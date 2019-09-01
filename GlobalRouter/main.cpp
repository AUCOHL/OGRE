/**
 * @file    main.cpp
 * @author  Ali El-Said, Fady Mohamed, Habiba Gamal
 * @date    2019-6-1
*/

#include "common/common_header.h"
//#include <boost/functional/hash.hpp>
#include <vector>
#include <queue>
#include <memory>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <functional>
#include <stdexcept>
#include <mutex>          // std::mutex

#include "ArgParser.h"
#include "LefDefParser.h"
#include "stlastar.h" // See header for copyright and usage information
#include "flute_wrapper.h"
#include "flute-function.h"
#include "coordinates.h"
using namespace std;
void show_banner();
void show_usage ();
void show_cmd_args ();
int omp_thread_count();

#define INVALID 1

#ifndef UNIT_TEST

unsigned int SearchStep[8];

int zDimension, xDimension, yDimension;

vector<vector<vector<my_lefdef::gCellGridGlobal>>> gcellGrid;

unordered_map <int, lef::LayerPtr> layerMap;
unordered_map <string, vector<CoordinateThreeDim>> allNetsPath;

ofstream out;

typedef CoordinateThreeDim Pin;
typedef priority_queue<pair<int, TwoPinTwoDim>, vector<pair<int, TwoPinTwoDim>>, std::greater<pair<int,TwoPinTwoDim>>> pq;
typedef std::vector<TwoPinTwoDim> Two_pin_list_2d;

std::mutex mtx;           // mutex for critical section


int GetMap( int z, int x, int y)
{
	if( x < 0 || x >= xDimension || y < 0 || y >= yDimension || z < 0 || z >= zDimension)
	{
		return INVALID;
	}
	return (gcellGrid[z][x][y].congestion >= gcellGrid[z][x][y].congestionLimit) ? INVALID: 0;

	// WRONG 
	// return ((gcellGrid[z][x][y].usedWires >= gcellGrid[z][x][y].maxWire) || (gcellGrid[z][x][y].usedVias >= gcellGrid[z][x][y].maxVia)) ? INVALID: 0;
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
	float GetCost( MapSearchNode &successor , int threadId);
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
	return (abs(x - nodeGoal.x) + abs(y - nodeGoal.y) );
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
	if( (GetMap( z,x-1, y) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x-1) && (parent_y == y) && (parent_z == z)))
	{
		NewNode = MapSearchNode(z, x-1, y );
		astarsearch->AddSuccessor( NewNode );
	}

	if((GetMap(z, x, y-1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x) && (parent_y == y-1) && (parent_z == z)))
	{
		NewNode = MapSearchNode(z, x, y-1 );
		astarsearch->AddSuccessor( NewNode );
	}

	if((GetMap(z, x+1, y ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x+1) && (parent_y == y)&& (parent_z == z)))
	{
		NewNode = MapSearchNode(z, x+1, y );
		astarsearch->AddSuccessor( NewNode );
	}


	if((GetMap(z, x, y+1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x) && (parent_y == y+1)&& (parent_z == z)))
	{
		NewNode = MapSearchNode(z, x, y+1 );
		astarsearch->AddSuccessor( NewNode );
	}

	if((GetMap(z-1, x, y ) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z-1)))
	{
		NewNode = MapSearchNode(z-1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}

	if((GetMap(z+1, x, y) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z+1)))
	{
		NewNode = MapSearchNode(z+1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}
	return true;
}

// given this node, what does it cost to move to successor. In the case
// of our map the answer is the map terrain value at this node since that is
// conceptually where we're moving

float MapSearchNode::GetCost( MapSearchNode &successor, int threadId )
{
	float funcP = gcellGrid[z][x][y].congestion / gcellGrid[z][x][y].congestionLimit;
	return funcP;	
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
	int count = 0;
	for (int i = z; i == z; ++i){
	//if (i <= 0 || i > zDimension || count >= 3) continue;
    out << startX << " " << startY << " " << endX << " " << endY << " Metal" << i << endl;
	//++count;
	}
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
		if (it->first == "net1797")
		{
			for (auto trip: myPath)
			{
				printf("(%d %d %d)\n", trip.z, trip.x, trip.y);
			}
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
	printf("Done!\n");
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
                		int dimension = 0, occupied;
                		double ratio;

						if (layerMap[k] ->dir_ == LayerDir::horizontal){
				           	//get difference in y
		                    dimension = endY - startY;
		                    ratio = (endX - startX) / double(gcellGrid[k-1][i][j].endCoord.first - gcellGrid[k-1][i][j].startCoord.first);
		                    occupied = dimension / (pitchX * defDBU);
						}
				       	if (layerMap[k] ->dir_ == LayerDir::vertical){
				           	//get difference in x
		                    dimension = endX - startX;
		                    ratio = (endY - startY) / double(gcellGrid[k-1][i][j].endCoord.second - gcellGrid[k-1][i][j].startCoord.second);
		                    occupied = dimension  / (pitchY * defDBU);
				       	}
				       	gcellGrid[k-1][i][j].congestion += (occupied * ratio);
					}
				}
			}
		}
	}
}

int layerStringtoNumber(const string layerName)
{
    string result;
    for (int i = 5; i < layerName.length(); ++i)
    	result += layerName[i];
    return stoi(result) - 1;
}

pq orderNets(unordered_map<string, def::NetPtr> &nets)
{
	auto net = nets.begin();
    auto& ldp = my_lefdef::LefDefParser::get_instance();

	pq myOrderedNets;

	Flute netRoutingTreeRouter;

	unordered_map<string,TreeFlute> flutetree; // a tree for every net
	unordered_map<string,Two_pin_list_2d> TwoPinList;

	while (net != nets.end())
	{
		string netName = net->first;
		int connectionSize = net->second->connections_.size();
		int d = 0;
		vector<Pin> netPinList(connectionSize);
		pair<int, int> p;
		int layerNo;
		for (int i = 0; i < connectionSize; ++i)
        {
			if (net->second->connections_[i]->lef_pin_ != nullptr)
			{
				pair<int, int> leftBottomCorner = {net->second->connections_[i]->lx_, net->second->connections_[i]->ly_};
            	pair<int, int> topRightCorner = {net->second->connections_[i]->ux_, net->second->connections_[i]->uy_} ;
            	p = ldp.get_bounding_GCell((leftBottomCorner.first + topRightCorner.first)/2, (leftBottomCorner.second + topRightCorner.second)/2);
				layerNo = layerStringtoNumber(net->second->connections_[i]->lef_pin_->ports_[0]->layer_name_);
			}
			else
			{
				p = ldp.get_bounding_GCell(net->second->connections_[i]->pin_->x_, net->second->connections_[i]->pin_->y_);
			    layerNo = layerStringtoNumber(net->second->connections_[i]->pin_->layer_);
			}
			netPinList[i] = {layerNo, p.first, p.second};
		}
//
		TreeFlute& tree = flutetree[netName];
		netRoutingTreeRouter.routeNet(netPinList,tree);
		tree.number =  2 * tree.deg - 2;
 		for (int j = 0; j < tree.number; ++j)
		{
            Branch& branch = tree.branch[j];

            // //for all pins and steiner pointsz

            TwoPinTwoDim two_pin;

            two_pin.pin1.x = (int) branch.x;
            two_pin.pin1.y = (int) branch.y;
            two_pin.pin2.x = (int) tree.branch[branch.n].x;
            two_pin.pin2.y = (int) tree.branch[branch.n].y;
            two_pin.net_id = netName;
			
           if (two_pin.pin1 != two_pin.pin2)
		    {
			   myOrderedNets.push({two_pin.getEuclideanDistance(), two_pin});
			 //  TwoPinList[netName].push_back(std::move(two_pin));
		    }
        }
		printf("FLUTE wirelength of Net: %s | %.1f\n", net->first.c_str(), tree.length);
		++net;
	}
	cout << "returning\n";
	return myOrderedNets;
}

void routeTwoPoints(MapSearchNode source, MapSearchNode target, int id, string name)
{

	AStarSearch<MapSearchNode> astarsearch(1000000, id);
	astarsearch.SetStartAndGoalStates(source, target);
	// cout << endl << id << endl;
	if (name == "net1797")
	{
		printf("Routing From: (%d %d %d) to (%d %d %d)", source.z, source.x, source.y, target.z, target.x, target.y);
	}
	vector <CoordinateThreeDim> threadResult;
	unsigned int SearchState;
	SearchStep[id] = 0;
	int count;
				//Supporting blocked source and target
	if (gcellGrid[source.z][source.x][source.y].congestion >=
		gcellGrid[source.z][source.x][source.y].congestionLimit)
		gcellGrid[source.z][source.x][source.y].congestion =
		gcellGrid[source.z][source.x][source.y].congestionLimit/2;
	if (gcellGrid[target.z][target.x][target.y].congestion >=
		gcellGrid[target.z][target.x][target.y].congestionLimit)
		gcellGrid[target.z][target.x][target.y].congestion =
		gcellGrid[target.z][target.x][target.y].congestionLimit/2;
	do
	{
		SearchState = astarsearch.SearchStep();
		SearchStep[id]++;
	} while (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SEARCHING);
		if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SUCCEEDED)
		{
			MapSearchNode* node = astarsearch.GetSolutionStart();
			int steps = 0;
			count = 0;
			for (int addition = node->z+1; addition >= node->z-1; --addition)
			{
				if (addition < 0 || addition >= zDimension || count >=2) continue;
				threadResult.push_back({addition, node->x, node->y});
				++count;
			}
			gcellGrid[node->z][node->x][node->y].congestion += 1;
			/*
			ispd18-1
			net1797
			(
			24000 370500 30000 376200 Metal1 (0, 4, 65)
			18000 376200 24000 383040 Metal1 (0, 3, 66)
			18000 376200 24000 383040 Metal2 (1, 3, 66)
			24000 370500 30000 383040 Metal2 (1, 4, 66)
			)
 			;
			 */
			for (;;)
			{
				node = astarsearch.GetSolutionNext();

				if (!node) break;
				count = 0;
				for (int addition = node->z+1; addition >= node->z-1; --addition)
				{
					if (addition < 0 || addition >= zDimension || count >= 2)	continue;
					threadResult.push_back({addition, node->x, node->y});

					++count;
				}
				gcellGrid[node->z][node->x][node->y].congestion += 1;
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
}

int main (int argc, char* argv[])
{
    //util::Watch watch;
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

	// debugging purposes


	int netCounter=0;
	for (auto net: nets)
	{
		allNetsPath[net.first] = vector<CoordinateThreeDim>();
	}

	//putting obstructions on gcell grid
    putObstructions();
	puts("Starting to Route!");
	int net_id = 0;
	int bufferId = 0;
	int paramsBuffering = 0;
	printf("nets size: %d\n", (int)ordered_nets.size());
	int connectionAmount = 0;

	while(ordered_nets.size())
    {
		pair<int,TwoPinTwoDim> TwoPinNet = ordered_nets.top(); ordered_nets.pop(); 
		MapSearchNode start;
		start.z = 0; 
		start.x = TwoPinNet.second.pin1.x; 
		start.y = TwoPinNet.second.pin1.y;
		MapSearchNode goal;
		goal.z = 0;
		 goal.x = TwoPinNet.second.pin2.x;
		  goal.y = TwoPinNet.second.pin2.y;
		tp.enqueue(routeTwoPoints, start, goal, bufferId, TwoPinNet.second.net_id);
		++bufferId;
		bufferId %= threadsCounter;
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