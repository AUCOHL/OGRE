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
	// bool operator < (const triplet& other)
	// {
	// 	return z < other.z;
	// }
    triplet(const triplet& other) : x(other.x), y(other.y), z(other.z) {};
};

unordered_map <string, vector<triplet>> allNetsPath;


int GetMap( int z, int x, int y, int pz)
{
	if( x < 0 || x >= xDimension || y < 0 || y >= yDimension || z < 0 || z >= zDimension)
	{
		return INVALID;	 
	}

	// VIA!!
	// return (gcellGrid[z][x][y].congestion >= gcellGrid[z][x][y].congestionLimit) ? INVALID: 0;

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

// Here's the heuristic function that estimates the distance from a Node
// to the Goal. 

//changed
float MapSearchNode::GoalDistanceEstimate( MapSearchNode &nodeGoal )
{
	return (abs(x - nodeGoal.x) + abs(y - nodeGoal.y) + abs(z - nodeGoal.z));
}


//changed
bool MapSearchNode::IsGoal( MapSearchNode &nodeGoal )
{
	if( (x == nodeGoal.x) && (y == nodeGoal.y) && (z == nodeGoal.z))
	{
		return true;
	}
	return false;
}

// This generates the successors to the given Node. It uses a helper function called
// AddSuccessor to give the successors to the AStar class. The A* specific initialisation
// is done for each node internally, so here you just set the state information that
// is specific to the application

//changed
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
	float cost = (gcellGrid[z][x][y].congestion) /(1.f * gcellGrid[z][x][y].congestionLimit) * 10.0;
	return (z == successor.z) ? cost: cost*2; // so we need to apply dynamic cost function here
	return (z != successor.z) ? 1.f: 10.f;
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
   // cout << startX << " " << startY << " " << endX << " " << endY << " Metal" << z << endl;
}

void printOutput2()
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
	// printf("Done!\n");
	printOutput2();
	out.close();
}


void putObstructions()
{
	auto& ldp = my_lefdef::LefDefParser::get_instance();
	unordered_map<string, def::ComponentPtr> compMap = ldp.def_.get_component_umap();
	int defDBU = ldp.def_.get_dbu();
    int lefDBU = ldp.lef_.get_dbu();
	for (auto & comp: compMap){
		int posX = comp.second->x_;
		int posY = comp.second->y_;
		for (auto & pin: comp.second-> lef_macro_ -> pin_umap_){
			for(auto & port: pin.second->ports_){

				int lx =  port->bbox_.lx_ * defDBU;
				int ly = port->bbox_.ly_* defDBU;
				int ux = port->bbox_.ux_ * defDBU;
				int uy = port->bbox_.uy_ * defDBU;

				lx += posX;
				ly += posY;
				ux += posX;
				uy += posY;

				int k = stoi(port->layer_name_.substr(5));
				pair<int, int> pMin;
				pair<int, int> pMax;
				pMin = ldp.get_bounding_GCell(lx, ly);
				pMax = ldp.get_bounding_GCell(ux, uy);
				pair <int, int> temp = pMin;
				pMin = {min(pMin.first, pMax.first), min(pMin.second, pMax.second)};
				pMax = {max(temp.first, pMax.first), max(temp.second, pMax.second)};

				int startX, startY, endX, endY;

				for (int i = pMin.first; i<=pMax.first; i++){

					for (int j=pMin.second; j<=pMax.second; j++){

						if (i == pMin.first)
							startX = lx;
						else
							startX = gcellGrid[k-1][i][j].startCoord.first;
						if (j == pMin.second)
							startY = ly;
						else
							startY = gcellGrid[k-1][i][j].startCoord.second;

						if (i == pMax.first)
							endX = ux;
						else
							endX = gcellGrid[k-1][i][j].endCoord.first;
						if (j == pMax.second)
							endY = uy;
						else
							endY = gcellGrid[k-1][i][j].endCoord.second;

                		double pitchX = layerMap[k]->pitch_x_;
                		double pitchY = layerMap[k]->pitch_y_;
                		int dimension = 0, occupied, occupiedV, dimension2 = 0;
                		double ratio, ratioV;

						if (layerMap[k] ->dir_ == LayerDir::horizontal){
				           	//get difference in y
		                    dimension = endY - startY;
		                    ratio = (endX - startX) / double(gcellGrid[k-1][i][j].endCoord.first - gcellGrid[k-1][i][j].startCoord.first);
		                    occupied = dimension / (pitchX * defDBU);
		                    dimension2 = endX - startX;
		                    ratioV = (endY - startY) / double(gcellGrid[k-1][i][j].endCoord.second - gcellGrid[k-1][i][j].startCoord.second);
                    		occupiedV = dimension2 / (pitchY * defDBU);
                    		occupiedV *= occupied; 
						}
				       	if (layerMap[k] ->dir_ == LayerDir::vertical){
				           	//get difference in x
		                    dimension = endX - startX;
		                    ratio = (endY - startY) / double(gcellGrid[k-1][i][j].endCoord.second - gcellGrid[k-1][i][j].startCoord.second);
		                    occupied = dimension / (pitchY * defDBU);
		                    dimension2 = endY - startY;
		                    ratioV = (endX - startX) / double(gcellGrid[k-1][i][j].endCoord.first - gcellGrid[k-1][i][j].startCoord.first);
                    		occupiedV = dimension2 / (pitchX * defDBU);
                    		occupiedV *= occupied; 
				       	}
				       	// gcellGrid[k-1][i][j].congestion += (occupied * ratio);

				       	// cout << "Wr " << int (occupied * ratio * 0.75) << endl;
				       	// cout << "Vr " << int ( occupiedV * ratioV * 0.25) << endl;
				       	// cout << "W " << int (occupied * ratio) << endl;
				       	// cout << "V " << int ( occupiedV * ratioV) << endl;

				       	// // Considering obstructions with maximum capacity of wires and vias
				       	// cout << gcellGrid[k-1][i][j].maxWire << " " << gcellGrid[k-1][i][j].usedWires << " " << gcellGrid[k-1][i][j].maxVia << " " << gcellGrid[k-1][i][j].usedVias << endl;
				       	gcellGrid[k-1][i][j].usedWires += int(occupied * ratio * 0.75);
				       	gcellGrid[k-1][i][j].usedVias += int(occupiedV * ratioV * 0.25);

				       	// cout << gcellGrid[k-1][i][j].maxWire << " " << gcellGrid[k-1][i][j].usedWires << " " << gcellGrid[k-1][i][j].maxVia << " " << gcellGrid[k-1][i][j].usedVias << endl << endl;
					}
				}
			}
		}
	}
}

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
		//printf("FLUTE wirelength of Net: %s | %d\n", net->first.c_str(), fluteTree.length);
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
// every thread will route a whole net!
volatile int x = 0;
#include <mutex>          // std::mutex
std::mutex mtx;           // mutex for critical section
void routeTwoPoints(MapSearchNode source, MapSearchNode target, int id, string name)	
{

	AStarSearch<MapSearchNode> astarsearch(1000000);
	astarsearch.SetStartAndGoalStates(source, target);
	// cout << endl << id << endl;

	vector <triplet> threadResult;
	unsigned int SearchState;
	unsigned int SearchSteps = 0;
	int count;
				//Supporting blocked source and target

	// VIA!!
	// if (gcellGrid[source.z][source.x][source.y].congestion >=
	// 	gcellGrid[source.z][source.x][source.y].congestionLimit)
	// 	gcellGrid[source.z][source.x][source.y].congestion =
	// 	gcellGrid[source.z][source.x][source.y].congestionLimit/2;
	// if (gcellGrid[target.z][target.x][target.y].congestion >=
	// 	gcellGrid[target.z][target.x][target.y].congestionLimit)
	// 	gcellGrid[target.z][target.x][target.y].congestion = 
	// 	gcellGrid[target.z][target.x][target.y].congestionLimit/2;
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

			// VIA!!
			gcellGrid[node->z][node->x][node->y].usedWires += 1;

			for (;;)
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
				
				// VIA!!
				if (parentNode->z == node->z)
					gcellGrid[node->z][node->x][node->y].usedWires += 1;
				else 
					gcellGrid[node->z][node->x][node->y].usedVias += 1;

			};
			mtx.lock();
			allNetsPath[name].insert(allNetsPath[name].begin(), threadResult.begin(), threadResult.end());
			mtx.unlock();
			astarsearch.FreeSolutionNodes();
		} 
		else if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_FAILED)   
		{
			printf("Search terminated. Did not find goal state\n");
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
	ThreadPool tp(threadsCounter);
	
    // Run detaile drouter
    auto& ldp = my_lefdef::LefDefParser::get_instance();

    if (filename_lef == "" or filename_def == "" or outfile_guide == "" or thread_count == "") {
        show_usage();
        return -1;
    }
    show_banner();
    show_cmd_args();
    ldp.read_lef(filename_lef);
    ldp.read_def(filename_def);

    gcellGrid = ldp.build_Gcell_grid(layerMap);
    zDimension = gcellGrid.size();
    xDimension = gcellGrid[0].size();
    yDimension = gcellGrid[0][0].size();
	
    unordered_map<string, def::NetPtr> nets;
    nets = ldp.def_.get_net_umap();
	auto ordered_nets = orderNets(nets);
	int netCounter=0;
	for (auto net: nets)
	{
		allNetsPath[net.first] = vector<triplet>();
	}
	//putting obstructions on gcell grid
    // putObstructions();]
    cout << "no obstructions" << endl; 
	puts("Starting to Route!");
	int net_id = 0;
	int bufferId = 0;
	params memoryAllocation[8];
	int paramsBuffering = 0;
	printf("nets size: %d\n", (int)ordered_nets.size());
	int connectionAmount = 0;

	while(ordered_nets.size())
    {
		auto netName = ordered_nets.top(); ordered_nets.pop();
		auto &net = nets[netName.second];

		double eps = 0.0;	// setting for shallowness vs. lightness
		salt::Net salt_net;
		idMap.clear();
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
				puts("SOURCE IS STEINER :?"); 
			}
			dfs(salt_tree.source, source_layer);
		
			bool netFailed = false;
			connectionAmount += route_nodes.size();
			for (auto route: route_nodes)
			{
				MapSearchNode start;
				start.z = route.first.z; start.x = route.first.x; start.y = route.first.y;
				MapSearchNode goal;
				goal.z = route.second.z; goal.x = route.second.x; goal.y = route.second.y;
				string name = netName.second;
				
				tp.enqueue(routeTwoPoints, start, goal, bufferId, name );
				
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
				//for (int i = 0; i < net->connections_.size(); ++i)
				{
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
