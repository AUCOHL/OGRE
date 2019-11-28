/**
 * @file    main.cpp
 * @author  Ali El-Said, Fady Mohamed, Habiba Gamal
 * @date    2019-6-1
*/

#include "common/common_header.h"
#include <boost/functional/hash.hpp>
#include <vector>
#include <queue>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <functional>
#include <stdexcept>

#include "Watch.h"
#include "ArgParser.h"
#include "LefDefParser.h"
#include "stlastar.h" // See header for copyright and usage information
#include "salt.h"
#include "fady_flute.h"

using namespace std;
void show_banner();
void show_usage ();
void show_cmd_args ();
int omp_thread_count();

#define INVALID 1
#define ALPHA 0.5
#define BETA 0.5

#ifndef UNIT_TEST

int zDimension, xDimension, yDimension;
vector<vector<vector<my_lefdef::gCellGridGlobal>>> gcellGrid;
unordered_map <int, lef::LayerPtr> layerMap;
ofstream out;
bool failed = false;
string failedNetName;

struct triplet
{
	int x, y, z;
	triplet(int z_, int x_, int y_) : x(x_), y(y_), z(z_) {};
	triplet operator + (const triplet& other)
	{
		return { z + other.z, x + other.x, y + other.y };
	}
	bool operator == (const triplet& other)
	{
		return z == other.z && x == other.x && y == other.y;
	}
    triplet(const triplet& other) : x(other.x), y(other.y), z(other.z) {};
};

unordered_map <string, vector<triplet>> allNetsPath;


int GetMap( int z, int x, int y, int pz)
{
	if( x < 0 || x >= xDimension || y < 0 || y >= yDimension || z < 0 || z >= zDimension)
	{
		return INVALID;	 
	}

	if (pz == z)
		return (gcellGrid[z][x][y].usedWires >= gcellGrid[z][x][y].maxWire) ? INVALID: 0;
	else 
		return (gcellGrid[z][x][y].usedVias >= gcellGrid[z][x][y].maxVia) ? INVALID: 0;
}

// Definitions
class MapSearchNode
{
public:
	int x;	 // the (x,y,z) positions of the node
	int y;	
	int z;
	MapSearchNode() { x = y = z = 0; }
	MapSearchNode( int pz, int px, int py) {z = pz; x=px; y=py; }

	float GoalDistanceEstimate( MapSearchNode &nodeGoal );
	bool IsGoal( MapSearchNode &nodeGoal );
	bool GetSuccessors( AStarSearch<MapSearchNode> *astarsearch, MapSearchNode *parent_node );
	float GetCost( MapSearchNode &successor );
	bool IsSameState( MapSearchNode &rhs );
	void PrintNodeInfo(); 
	inline bool operator ==(const MapSearchNode& other)
	{
		return x == other.x && y == other.y && z == other.z;
	}

};

bool MapSearchNode::IsSameState( MapSearchNode &rhs )
{

	// same state in a maze search is simply when (z, x,y) are the same
	if( (x == rhs.x) && (y == rhs.y) && (z == rhs.z))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MapSearchNode::PrintNodeInfo()
{
	char str[100];
	sprintf( str, "Node position : (%d,%d,%d)\n",z,x,y );
	cout << str;
}


float MapSearchNode::GoalDistanceEstimate( MapSearchNode &nodeGoal )
{
	return (abs(x - nodeGoal.x) + abs(y - nodeGoal.y) + abs(z - nodeGoal.z));
}


bool MapSearchNode::IsGoal( MapSearchNode &nodeGoal )
{
	if( (x == nodeGoal.x) && (y == nodeGoal.y) && (z == nodeGoal.z))
	{
		return true;
	}
	return false;
}

bool MapSearchNode::GetSuccessors( AStarSearch<MapSearchNode> *astarsearch, MapSearchNode *parent_node )
{

	int parent_x = -1; 
	int parent_y = -1; 
	int parent_z = -1; 

	if( parent_node )
	{
		parent_x = parent_node->x;
		parent_y = parent_node->y;
		parent_z = parent_node->z;
	}
	

	MapSearchNode NewNode;
	// push each possible move except allowing the search to go backwards
	if( (GetMap( z,x-1, y, z) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x-1) && (parent_y == y) && (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x-1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x, y-1, z) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y-1) && (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x, y-1 );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x+1, y, z) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x+1) && (parent_y == y)&& (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x+1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

		
	if((GetMap(z, x, y+1, z) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y+1)&& (parent_z == z)))
	{
		NewNode = MapSearchNode(z, x, y+1 );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z-1, x, y, z) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z-1)))
	{
		NewNode = MapSearchNode(z-1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}	
	
	if((GetMap(z+1, x, y, z) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z+1)))
	{
		NewNode = MapSearchNode(z+1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}	
	return true;
}

// given this node, what does it cost to move to successor. In the case
// of our map the answer is the map terrain value at this node since that is 
// conceptually where we're moving
float MapSearchNode::GetCost( MapSearchNode &successor )
{
	float funcP = ALPHA * (gcellGrid[z][x][y].usedWires / double(gcellGrid[z][x][y].maxWire)) + BETA * (gcellGrid[z][x][y].usedVias / double(gcellGrid[z][x][y].maxVia)); 
	return funcP * 30; 
}
typedef struct pathCoord 
{
	int lx, ly, ux, uy, z;
	bool operator ==(const pathCoord &other) const
	{
		return lx == other.lx && ly == other.ly && ux == other.ux && uy == other.uy && z == other.z;
	}

} pathCoord_t;

class MyHashFunction { 
	public: 
    size_t operator()(const pathCoord_t& p) const
    { 
        return (
				hash<int>()(p.lx) ^ hash<int>()(p.ly) ^
				hash<int>()(p.ux) ^ hash<int>()(p.uy) ^
				hash<int>()(p.z)); 
    } 
};
bool verbose = 1;
void write_seg(int lx, int ly, int ux, int uy, int z){
    int startX = gcellGrid[z-1][lx][ly].startCoord.first;
    int startY = gcellGrid[z-1][lx][ly].startCoord.second;
    int endX = gcellGrid[z-1][ux][uy].endCoord.first;
    int endY = gcellGrid[z-1][ux][uy].endCoord.second;
    out << startX << " " << startY << " " << endX << " " << endY << " Metal" << z << endl;
}
//
// ─── Print output into guide file ───────────────────────────────────────────────
//
void printOutput()
{
	for (auto it = allNetsPath.begin(); it != allNetsPath.end(); ++it)
	{
		out << it->first << endl << "(" << endl;
		auto myPath = it->second;
		if(myPath.size() <= 0)
		{	
			out << ")" << endl;
			continue;
		}
	
		int layerMax = layerMap.size();
		vector<vector<pair<int, int>>> routes(layerMax+1);
		for(int i = 0; i < myPath.size(); i++){
			int l = myPath[i].z;
			routes[l+1].push_back({myPath[i].x, myPath[i].y});
		}
		verbose = 0;
		for(int l = 1; l <= layerMax; l++)
		{
			if (layerMap[l]->dir_ == LayerDir::horizontal)
			{
				sort(routes[l].begin(), routes[l].end(),
					[](const pair<int, int> &a, const pair<int, int> &b)
					{
						if(a.second != b.second)
							return a.second < b.second; // sort according to y first
						else
							return a.first < b.first;
					});
				int x_ = -2, y_ = -2, x, y, xdiff, ydiff, xmax = x_, xmin = x_;
				routes[l].push_back({-2, -2});  // push dummy values to print last segment
				for(int i = 0; i < routes[l].size(); i++){
					x = routes[l][i].first;
					y = routes[l][i].second;
					xdiff = x - x_;
					ydiff = y - y_;
					if(abs(ydiff) > 0){
						if(xmax != -2)
							write_seg( xmin, y_, xmax, y_, l);
						xmin = xmax = x;
					}
					else{
						if(abs(xdiff) > 1){
							if(xmax != -2)
								write_seg( xmin, y_, xmax, y_, l);
							xmin = xmax = x;
						}
						else{
							xmax = x;
						}
					}
					x_ = x;
					y_ = y;
				}
			}
			else if (layerMap[l]->dir_ == LayerDir::vertical)
			{
				sort(routes[l].begin(), routes[l].end(),
					[](const pair<int, int> &a, const pair<int, int> &b)
					{
						if(a.first != b.first)
							return a.first < b.first;   // sort according to x first
						else
							return a.second < b.second;
					});
				int x_ = -2, y_ = -2, x, y, xdiff, ydiff, ymax = y_, ymin = y_;
				routes[l].push_back({-2, -2});  // push dummy values to print last segment
				for(int i = 0; i < routes[l].size(); i++){
					x = routes[l][i].first;
					y = routes[l][i].second;
					xdiff = x - x_;
					ydiff = y - y_;
					if(abs(xdiff) > 0){
						if(ymax != -2)
							write_seg( x_, ymin, x_, ymax, l);
						ymin = ymax = y;
					}
					else{
						if(abs(ydiff) > 1){
							if(ymax != -2)
								write_seg( x_, ymin, x_, ymax, l);
							ymin = ymax = y;
						}
						else{
							ymax = y;
						}
					}
					x_ = x;
					y_ = y;
				}
			}
		}
		out << ")" << endl;
	}
}

class ThreadPool {
public:
    ThreadPool(size_t);
    template<class F, class... Args>
    auto enqueue(F&& f, Args&&... args) 
        -> std::future<typename std::result_of<F(Args...)>::type>;
    ~ThreadPool();
private:
    // need to keep track of threads so we can join them
    std::vector< std::thread > workers;
    // the task queue
    std::queue< std::function<void()> > tasks;
    
    // synchronization
    std::mutex queue_mutex;
    std::condition_variable condition;
    bool stop;
};
 
// the constructor just launches some amount of workers
inline ThreadPool::ThreadPool(size_t threads)
    :   stop(false)
{
    for(size_t i = 0;i<threads;++i)
        workers.emplace_back(
            [this]
            {
                for(;;)
                {
                    std::function<void()> task;

                    {
                        std::unique_lock<std::mutex> lock(this->queue_mutex);
                        this->condition.wait(lock,
                            [this]{ return this->stop || !this->tasks.empty(); });
                        if(this->stop && this->tasks.empty())
                            return;
                        task = std::move(this->tasks.front());
                        this->tasks.pop();
                    }

                    task();
                }
            }
        );
}

// add new work item to the pool
template<class F, class... Args>
auto ThreadPool::enqueue(F&& f, Args&&... args) 
    -> std::future<typename std::result_of<F(Args...)>::type>
{
    using return_type = typename std::result_of<F(Args...)>::type;

    auto task = std::make_shared< std::packaged_task<return_type()> >(
            std::bind(std::forward<F>(f), std::forward<Args>(args)...)
        );
        
    std::future<return_type> res = task->get_future();
    {
        std::unique_lock<std::mutex> lock(queue_mutex);

        // don't allow enqueueing after stopping the pool
        if(stop)
            throw std::runtime_error("enqueue on stopped ThreadPool");

        tasks.emplace([task](){ (*task)(); });
    }
    condition.notify_one();
    return res;
}

// the destructor joins all threads
inline ThreadPool::~ThreadPool()
{
    {
        std::unique_lock<std::mutex> lock(queue_mutex);
        stop = true;
    }
    condition.notify_all();
    for(std::thread &worker: workers)
        worker.join();
	printOutput();
	out.close();
}

//
// ─── Update capacity of gcells based on placement of obstructions ───────────────────────────────────────────────
//
void putObstructions()
{
	cout << "Placing Obstructions on Grid" << endl;
	auto& ldp = my_lefdef::LefDefParser::get_instance();
	unordered_map<string, def::ComponentPtr> compMap = ldp.def_.get_component_umap();
	int defDBU = ldp.def_.get_dbu();
    int lefDBU = ldp.lef_.get_dbu();

    int i = 0;
	for (auto & comp: compMap){
		int x0 = comp.second->x_;
		int y0 = comp.second->y_;
		int W = comp.second-> lef_macro_ -> size_x_ * defDBU;
		int H = comp.second-> lef_macro_ -> size_y_ * defDBU;
		string orientation = comp.second->orient_str_;

		for(auto & obs: comp.second-> lef_macro_->obsts){
			// cout <<comp.second->  lef_macro_->name_;

			//using units of DEF
			int x = obs.xl * defDBU;
			int y = obs.yl * defDBU;
			int ux = obs.xh * defDBU;
			int uy = obs.yh * defDBU;

			int w = ux - x;
			int h = uy - y; 

			int xl, yl, xh, yh; 


			//getting the coordinates of the obstruction after placement  
			if (orientation == "N"){
				xl = x0 + x;
				yl = y0 + y;
				xh = xl + w;
				yh = yl + h; 

			} else if (orientation == "FN"){
				xl = x0 + W - x - w; 
				yl = y0 + y;
				xh = xl + w;
				yh = yl + h; 
				
			} else if (orientation == "S"){
				xl = x0 + W - x - w;
				yl = y0 + H - y - h; 
				xh = xl + w;
				yh = yl + h; 

			} else if (orientation == "FS"){
				xl = x0 + x;
				yl = y0 + H - y - h;
				xh = xl + w;
				yh = yl + h; 

			} else if (orientation == "W"){
				xl = x0 + H - y - h;
				yl = y0 + x; 
				xh = xl + h; 
				yh = yl + w; 

			} else if (orientation == "FW"){
				xl = x0 + y;
				yl = y0 + x;
				xh = xl + h; 
				yh = yl + w; 

			} else if (orientation == "E"){
				xl = x0 + y;
				yl = y0 + W - x - w;
				xh = xl + h; 
				yh = yl + w; 

			} else if (orientation == "FE"){
				xl = x0 + H - y - h; 
				yl = y0 + W - x - w; 
				xh = xl + h; 
				yh = yl + w; 

			} else {
				xl = x0 + x;
				yl = y0 + y;
				xh = xl + w;
				yh = yl + h; 
			}
			int k = obs.layer;
			pair<int, int> pMin;
			pair<int, int> pMax;
			pMin = ldp.get_bounding_GCell(xl, yl);
			pMax = ldp.get_bounding_GCell(xh, yh);
			pair <int, int> temp = pMin;
			pMin = {min(pMin.first, pMax.first), min(pMin.second, pMax.second)};
			pMax = {max(temp.first, pMax.first), max(temp.second, pMax.second)};

			int startX, startY, endX, endY;
			for (int i = pMin.first; i<=pMax.first; i++){

				for (int j=pMin.second; j<=pMax.second; j++){
					if (i == pMin.first)
						startX = xl;
					else
						startX = gcellGrid[k-1][i][j].startCoord.first;
					if (j == pMin.second)
						startY = yl;
					else
						startY = gcellGrid[k-1][i][j].startCoord.second;

					if (i == pMax.first)
						endX = xh;
					else
						endX = gcellGrid[k-1][i][j].endCoord.first;
					if (j == pMax.second)
						endY = yh;
					else
						endY = gcellGrid[k-1][i][j].endCoord.second;
            		double pitchX = layerMap[k]->pitch_x_ * defDBU;
            		double pitchY = layerMap[k]->pitch_y_ * defDBU;

            		double obstructionChangeInX = endX - startX;
            		double obstructionChangeInY = endY - startY;
            		double gcellChangeInX = gcellGrid[k-1][i][j].endCoord.first - gcellGrid[k-1][i][j].startCoord.first;
            		double gcellChangeInY = gcellGrid[k-1][i][j].endCoord.second - gcellGrid[k-1][i][j].startCoord.second;

            		double utilization = (obstructionChangeInX * obstructionChangeInY) / (gcellChangeInX * gcellChangeInY);
            		if(utilization == 1){
            			utilization = 0.95; 
            		}
            		int capacity = gcellGrid[k-1][i][j].capacity * (1  - utilization);
	            	gcellGrid[k-1][i][j].setCapacity(capacity);
	                gcellGrid[k-1][i][j].setWireCap(capacity * 1- ((0.5*utilization)+0.25));
	                gcellGrid[k-1][i][j].setViaCap(capacity * ((0.5*utilization)+0.25));

				}
			}
		}
	}
}

//
// ─── Order Nets in descending order ───────────────────────────────────────────────
//
typedef priority_queue<pair<int, string>, vector<pair<int, string>>, std::less<pair<int,string>>> pq;
pq orderNets(unordered_map<string, def::NetPtr> &nets)
{
	auto net = nets.begin();
    auto& ldp = my_lefdef::LefDefParser::get_instance();

	Flutee::Tree fluteTree;
	int flutewl;
	
	Flutee::readLUT("POWV9.dat","PORT9.dat");

	int d;
	pq ordered_nets; // self ordering <int,string> net structure
	while (net != nets.end())
	{
		d = 0;
		int connectionSize = net->second->connections_.size();
		
		int64_t *x = new int64_t[connectionSize+10], *y = new int64_t[connectionSize+10];
				int *mapping = new int[connectionSize + 1];

		 for (int i = 0; i < connectionSize; ++i) 
        {
            int xCoord = net->second->connections_[i]->lx_;
            int yCoord = net->second->connections_[i]->ly_;
            if (net->second->connections_[i]->lef_pin_ == nullptr)
			{
				xCoord = net->second->connections_[i]->pin_->x_;
				yCoord = net->second->connections_[i]->pin_->y_;
			}
            pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoord, yCoord);  
            xCoord = locationInGCellGrid.first; yCoord = locationInGCellGrid.second;
			x[d] = xCoord;
			y[d++] = yCoord;
		}
		if (d == 1)
		{
			ordered_nets.push({10000, net->first});
			goto exit;
		}
		fluteTree = Flutee::flute(d, x, y, 3, mapping);
		ordered_nets.push({fluteTree.length, net->first});
		exit:
			++net;
	}
	return ordered_nets;
}

unordered_map<int, pair<int, int>> idMap;
vector<pair<triplet, triplet>> route_nodes;

int layerStringtoNumber(const string layerName)
{
    string result;
    for (int i = 5; i < layerName.length(); ++i)
    	result += layerName[i];
    return stoi(result) - 1;
}

void dfs(shared_ptr<salt::TreeNode> node, int p_layer)
{
	int p_x = node->loc.x, c_x;
	int p_y = node->loc.y, c_y;
	int p_z, c_z;

	if(idMap.find(node->id) != idMap.end())
		p_z = idMap[node->id].second;	
	else
		p_z = p_layer; // node is a steiner node
	
	for (auto child: node->children)
	{
		c_x = child->loc.x;
		c_y = child->loc.y;
		if(idMap.find(child->id) != idMap.end())
			c_z = idMap[child->id].second;	
		else
			c_z = p_z;
		route_nodes.push_back({{p_z, p_x, p_y}, {c_z, c_x, c_y}});
		dfs(child, p_z);
	}
} 


struct params
{
	MapSearchNode source;
	MapSearchNode target;
	int threadId;
	string netName;
	params(MapSearchNode source_, MapSearchNode target_,int threadId_,string netName_):
	 source(source_), target(target_), threadId(threadId_), netName(netName_){};
	 params(){};
};

//
// ─── Routing of Two-Pin Subnets ───────────────────────────────────────────────
// ─── Every thread will route a whole net ──────────────────────────────────────
//
volatile int x = 0;
#include <mutex>          // std::mutex
std::mutex mtx;           // mutex for critical section
void routeTwoPoints(MapSearchNode source, MapSearchNode target, int id, string name)	
{

	AStarSearch<MapSearchNode> astarsearch(1000000);
	astarsearch.SetStartAndGoalStates(source, target);
	vector <triplet> threadResult;
	unsigned int SearchState;
	unsigned int SearchSteps = 0;
	int count;

	do
	{
		SearchState = astarsearch.SearchStep();
		SearchSteps++;
	} while (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SEARCHING);
		if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SUCCEEDED) 
		{
			MapSearchNode* node = astarsearch.GetSolutionStart();
			int steps = 0;
			count = 0;
			for (int addition = node->z+1; addition >= node->z-1; --addition)
			{
				if (addition < 0 || addition >= zDimension || count >=2)
					continue;

				threadResult.push_back({addition, node->x, node->y});

				++count;
			}

			gcellGrid[node->z][node->x][node->y].usedWires += 1;

			do
			{
				MapSearchNode* parentNode = node; 
				node = astarsearch.GetSolutionNext();
				if (!node) break;
				count = 0;
				for (int addition = node->z+1; addition >= node->z-1; --addition)
				{
					if (addition < 0 || addition >= zDimension || count >= 2) 
						continue;
					threadResult.push_back({addition, node->x, node->y});

					++count;
				}
				
				//
				// ─── Increment utilization of Gcell ───────────────────────────────────────────────
				//
				if (parentNode->z == node->z)
					gcellGrid[node->z][node->x][node->y].usedWires += 1;
				else 
					gcellGrid[node->z][node->x][node->y].usedVias += 1;

			}while(!failed);
			if (failed)
				return;
			mtx.lock();
			allNetsPath[name].insert(allNetsPath[name].begin(), threadResult.begin(), threadResult.end());
			mtx.unlock();
			astarsearch.FreeSolutionNodes();
		} 
		else if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_FAILED)   
		{
			printf("Search terminated. will Ripup and reroute\n");
			failedNetName = name;
			mtx.lock();
			failed = true;
			mtx.unlock();
			return;
		}
    	astarsearch.EnsureMemoryFreed();
		++x;
}

int main (int argc, char* argv[])
{
    util::Watch watch;
    // Parsing command line arguments
    auto& ap = ArgParser::get();

    ap.initialize(argc, argv);
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");
	auto outfile_guide = ap.get_argument("-output");
	auto thread_count = ap.get_argument("-thread");
    out.open(outfile_guide);
	int threadsCounter = stoi(thread_count);
	//
	// ─── INITIALIZE THE THREADS ─────────────────────────────────────────────────────
	//
	ThreadPool tp(threadsCounter);
	
    auto& ldp = my_lefdef::LefDefParser::get_instance();

    if (filename_lef == "" or filename_def == "" or outfile_guide == "" or thread_count == "") {
        show_usage();
        return -1;
    }
    show_banner();
    show_cmd_args();
	//
	// ─── PARSE DEF AND LEF FILES ────────────────────────────────────────────────────
	//
    ldp.read_lef(filename_lef);
    ldp.read_def(filename_def);

	//
	// ─── BUILD GLOBAL GRID ──────────────────────────────────────────────────────────
	//
    gcellGrid = ldp.build_Gcell_grid(layerMap);
    zDimension = gcellGrid.size();
    xDimension = gcellGrid[0].size();
    yDimension = gcellGrid[0][0].size();
	
    unordered_map<string, def::NetPtr> nets;
    nets = ldp.def_.get_net_umap();

	pq x = orderNets(nets);
	queue <pair<int, string>> ordered_nets;
	for (int i = 0;i<x.size();i++)
	{
		pair<int, string> b = x.top();
		ordered_nets.push(b);
		x.pop();
	}

	auto ordered_nets_backup = ordered_nets;
	int netCounter=0;
	for (auto net: nets)
	{
		allNetsPath[net.first] = vector<triplet>();
	}
    putObstructions();
	puts("Starting to Route!");
	int net_id = 0;
	int bufferId = 0;
	printf("nets size: %d\n", (int)ordered_nets.size());

	//
	// ─── START ROUTING ──────────────────────────────────────────────────────────────
	//	
REROUTE:
	if (failed)
	{
		queue<pair<int, string>> empty;
   		swap(ordered_nets, empty);

		auto ordered_nets_backup2 = ordered_nets_backup;
		int w = ordered_nets_backup2.size();
		pair<int, string> a;
		for (int i =0 ;i<w; i++)
		{
			a = ordered_nets_backup2.front();
			if (a.second == failedNetName)
			{
				ordered_nets.push(a);
				break;
			}
			ordered_nets_backup2.pop();
		}
		int ww = ordered_nets_backup.size();
		pair<int, string> c;
		for (int j =0 ;j<ww; j++)
		{
			c = ordered_nets_backup.front();
			if (c.second == failedNetName)
			{
				ordered_nets_backup.pop();
				c = ordered_nets_backup.front();
			}
			ordered_nets.push(c);
			ordered_nets_backup.pop();
		}
		ordered_nets_backup = ordered_nets;
		failed = false;

		// auto n = ordered_nets_backup.top();
		// vector<decltype(n)> temp;
		// while (ordered_nets_backup.size())
		// {
			
		// 	if (ordered_nets_backup.top().second == failedNetName)
		// 	{
		// 		auto check = ordered_nets_backup.top();
		// 		temp.insert(temp.begin(), ordered_nets_backup.top());
		// 		ordered_nets_backup.pop();
		// 	}
		// 	else
		// 	{
		// 		temp.push_back(ordered_nets_backup.top());
		// 		ordered_nets_backup.pop();
		// 	}
		// }
		// for (int i = 0 ; i<temp.size();i++)
		// {
		// 	ordered_nets.push(temp[i]);
		// }
		// ordered_nets_backup = ordered_nets;
		// failed = false;
	}

	while(ordered_nets.size())
    {
		auto netName = ordered_nets.front(); ordered_nets.pop();
		auto &net = nets[netName.second];

		double eps = 0.0;	// setting for shallowness vs. lightness
		salt::Net salt_net;
		idMap.clear();
		//
		// ─── RUN SALT TREE ───────────────────────────────────────────────
		//
		bool canRun = salt_net.read_net(net, net_id++, idMap);
		salt::Tree salt_tree;
		salt::SaltBuilder saltB;
		if (canRun)
		{
			saltB.Run(salt_net, salt_tree, eps);
			route_nodes.clear();
			int source_layer;
			if(idMap.find(salt_tree.source->id) != idMap.end()){
				source_layer = idMap[salt_tree.source->id].second;
			}
			else{
				source_layer = 0;
			}
			dfs(salt_tree.source, source_layer);
		
			for (auto route: route_nodes)
			{
				MapSearchNode start;
				start.z = route.first.z; start.x = route.first.x; start.y = route.first.y;
				MapSearchNode goal;
				goal.z = route.second.z; goal.x = route.second.x; goal.y = route.second.y;
				string name = netName.second;
				//
				// SCHEDULE JOBS FOR 2-PIN NETS
				//
				tp.enqueue(routeTwoPoints, start, goal, bufferId, name );
				if (failed)
					goto REROUTE;
				
				++bufferId;
				bufferId %= threadsCounter;
			}
		}
		else
		{
			allNetsPath[netName.second];
			if (net->connections_.size() != 1)
			{
				int i = 0, count = 0;
				pair<int, int> p;
				int layerNo;
				if (net->connections_[0]->lef_pin_ != nullptr)
				{	
					p = ldp.get_bounding_GCell(net->connections_[i]->lx_, net->connections_[i]->ly_);
					layerNo = layerStringtoNumber(net->connections_[i]->lef_pin_->ports_[0]->layer_name_);
				}
				else
				{
					 p = ldp.get_bounding_GCell(net->connections_[i]->pin_->x_,net->connections_[i]->pin_->y_ );
					layerNo = layerStringtoNumber(net->connections_[i]->pin_->layer_);
					
				}
				for (int addition = layerNo-1; addition <= layerNo+1; ++addition)
				{	
					if (addition < 0 || addition >= zDimension || count==2) continue;
						allNetsPath[netName.second].push_back({addition, p.first, p.second});
					++count;
				}
			}
		}				
	}
    return 0;
}

void show_usage ()
{
    cout << endl;
    cout << "Usage:" << endl;
    cout << "global_router -lef <lef> -def <def> -output <guide> -thread <# of threads>" << endl << endl;
}

/**
 * @brief  Show banner of this binary.
 * @authors Ali El-Said, Fady Mohamed, Habiba Gamal
 * @date   2019-6-1
 */
void show_banner ()
{
    cout << endl;
    cout << string(79, '=') << endl;
    cout << "\t\t\tISPD - Global Routing Contest" << endl;
    cout << "\t\tAuthors: Ali El-Said, Fady Mohamed, Habiba Gamal" << endl;
	cout << "\t\tAffiliation: The American University in Cairo" << endl;
    cout << string(79, '=') << endl;
}

void show_cmd_args ()
{
    auto& ap = ArgParser::get();
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");
    cout << "  LEF file   : " << filename_lef << endl;
    cout << "  DEF file   : " << filename_def << endl;
}

int omp_thread_count() {
    int n = 0;
#pragma omp parallel reduction(+:n)
    n += 1;
    return n;
}

#else

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Simple testcases
#include <boost/test/unit_test.hpp>

#endif
