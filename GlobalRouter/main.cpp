/**
 * @file    main.cpp
 * @author  Ali El-Said, Fady Mohamed, Habiba Gamal
 * @date    2019-6-1
*/

#include "common/common_header.h"
#include <boost/functional/hash.hpp>

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

#ifndef UNIT_TEST

int zDimension, xDimension, yDimension;
vector<vector<vector<my_lefdef::gCellGridGlobal>>> gcellGrid;
unordered_map <int, lef::LayerPtr> layerMap;

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


int GetMap( int z, int x, int y)
{
	if( x < 0 || x >= xDimension || y < 0 || y >= yDimension || z < 0 || z >= zDimension)
	{
		return INVALID;	 
	}
	return (gcellGrid[z][x][y].congestion >= gcellGrid[z][x][y].congestionLimit) ? INVALID: 0;
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
		return z == other.z && x == other.x && y == other.y;
	}

};


bool MapSearchNode::IsSameState( MapSearchNode &rhs )
{

	// same state in a maze search is simply when (x,y) are the same
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

float MapSearchNode::GoalDistanceEstimate( MapSearchNode &nodeGoal )
{
	return abs(x - nodeGoal.x) + abs(y - nodeGoal.y) + abs(z - nodeGoal.z);
}

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
	int count = 0;
	// push each possible move except allowing the search to go backwards
	if( (GetMap( z,x-1, y) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x-1) && (parent_y == y) && (parent_z == z))) 
	{
		++count;
		NewNode = MapSearchNode(z, x-1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x, y-1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y-1) && (parent_z == z))) 
	{
				++count;

		NewNode = MapSearchNode(z, x, y-1 );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x+1, y ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x+1) && (parent_y == y)&& (parent_z == z))) 
	{
				++count;

		NewNode = MapSearchNode(z, x+1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

		
	if((GetMap(z, x, y+1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y+1)&& (parent_z == z)))
	{
				++count;

		NewNode = MapSearchNode(z, x, y+1 );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z-1, x, y ) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z-1)))
	{
				++count;

		NewNode = MapSearchNode(z-1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}	
	
	if((GetMap(z+1, x, y) != INVALID) && !((parent_x == x) && (parent_y == y)&& (parent_z == z+1)))
	{
				++count;

		NewNode = MapSearchNode(z+1, x, y );
		astarsearch->AddSuccessor( NewNode );
	}	
//	printf("Count: %d\n", count);
	return true;
}

// given this node, what does it cost to move to successor. In the case
// of our map the answer is the map terrain value at this node since that is 
// conceptually where we're moving

float MapSearchNode::GetCost( MapSearchNode &successor )
{
	return (float) ((gcellGrid[z][x][y].congestion) /(1.f * gcellGrid[z][x][y].congestionLimit)) * 10.0; // so we need to apply dynamic cost function here
	//return 1.f;
}
typedef struct pathCoord 
{
	int lx, ly, ux, uy, z;
	bool operator ==(const pathCoord &other) const
	{
		return lx == other.lx && ly == other.ly && ux == other.ux &&
				uy == other.uy && z == other.z;
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
void printOutput(ostream& out, vector<triplet>& myPath){
    
    triplet bufferMin(-10, -10, -10);
	triplet bufferMax(-10, -10, -10);
	unordered_set<pathCoord_t, MyHashFunction> finalPath;
    if (myPath.size() > 0){
        bufferMin = myPath[0];
		bufferMax = myPath[0];
	}
    if (myPath.size() <= 0){
    	return;
    }
    for (int i = 1; i < myPath.size(); i++){
        if(myPath[i].z == bufferMin.z){
			if (layerMap[bufferMin.z + 1] ->dir_ == LayerDir::horizontal)
				if (bufferMin.y > myPath[i].y)
					bufferMin = myPath[i];
				if (bufferMax.y < myPath[i].y)
					bufferMax = myPath[i];
			else 
				if (bufferMin.x > myPath[i].x)
					bufferMin = myPath[i];
				if (bufferMax.x < myPath[i].x)
					bufferMax = myPath[i];
		}
        else{
            int startX = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.first;
            int startY = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.second;
            int endX = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.first;
            int endY = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.second;
			finalPath.insert({startX, startY, endX, endY, bufferMax.z+1});
            bufferMax = myPath[i];
            bufferMin = myPath[i];
        }
    }
	int i = myPath.size();
	int startX = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.first;
	int startY = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.second;
	int endX = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.first;
	int endY = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.second;
	finalPath.insert({startX, startY, endX, endY, bufferMax.z+1});
	for (auto guide: finalPath)
    	out << guide.lx << " " << guide.ly << " " << guide.ux << " " << guide.uy << " Metal" << guide.z << endl;
}

void putObstructions(){
	auto& ldp = my_lefdef::LefDefParser::get_instance();
	unordered_map<string, def::ComponentPtr> compMap = ldp.def_.get_component_umap();
	//cout << "SIZE " <<compMap.size() << endl;
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
				       	// cout << "Layer: " << k << " Cell "<<i <<" "<< j << " Congestion " << gcellGrid[k-1][i][j].congestionINV << endl;
				       	gcellGrid[k-1][i][j].congestion += (occupied * ratio);
				       	//if(gcellGrid[k-1][i][j].congestion >= 0)
				       	//	gcellGrid[k-1][i][j].congestionINV = 0; 
				       	// cout << "Layer: " << k << " Cell "<<i <<" "<< j << " Ratio " << ratio << " Congestion " << gcellGrid[k-1][i][j].congestionINV << endl;
					}
				}
			}
		}
	}
}
typedef priority_queue<pair<int, string>, vector<pair<int, string>>, std::greater<pair<int,string>>> pq;
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
			//cout << "net: " << net->first << endl;

			ordered_nets.push({10000, net->first});
			goto exit;
		}
		fluteTree = Flutee::flute(d, x, y, 3, mapping);
				//	cout << "net: " << net->first << endl;

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

int main (int argc, char* argv[])
{
    util::Watch watch;
    ofstream out;
    // Parsing command line arguments
    auto& ap = ArgParser::get();

    ap.initialize(argc, argv);
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");
	string outFileName = "";
	int i = filename_def.size() - 1;
	for (; i >= 0 && filename_def[i] != '.'; --i);
	for (int j = 0; j < i; ++j) outFileName += filename_def[j];
	outFileName += ".guide";
    out.open(outFileName);


    // Run detaile drouter
    auto& ldp = my_lefdef::LefDefParser::get_instance();

    if (filename_lef == "" or filename_def == "") {
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
   
	//    //output for testing
	//    for (int k=0; k<gcellGrid.size(); k++){
	//        cout << "Metal Layer: " << k + 1 << ", Direction is : " ;
	//        if (layerMap[k+1] ->dir_ == LayerDir::horizontal)
	//            cout << "horizontal" << endl;
	//        if (layerMap[k+1] ->dir_ == LayerDir::vertical)
	//            cout << "vertical" << endl;

	//        for (int i=0; i<gcellGrid[k].size(); i++){
	//            for (int j=0; j<gcellGrid[k][i].size(); j++){
	//                cout << "Start Coord X: " << gcellGrid[k][i][j].startCoord.first << " End Coord X: " << gcellGrid[k][i][j].endCoord.first << " Start Coord Y: " << gcellGrid[k][i][j].startCoord.second << " End Coord Y: " << gcellGrid[k][i][j].endCoord.second << " Free Wires " << gcellGrid[k][i][j].congestionLimit << endl;
	//            }
	//        }
	//        cout << endl;
	//    }

    unordered_map<string, def::NetPtr> nets;
    nets = ldp.def_.get_net_umap();
	auto ordered_nets = orderNets(nets);
    vector <triplet> netPath;
	int netCounter=0;
			AStarSearch<MapSearchNode> astarsearch(100000);

	//putting obstructions on gcell grid
    putObstructions();
	puts("Starting to Route!");
	int net_id = 0;
	while(ordered_nets.size())
    {
    	netPath.clear();
		auto netName = ordered_nets.top(); ordered_nets.pop();
		auto &net = nets[netName.second];
		if (netName.second == "ionet1006")
			{
				cout << "ah\n";
				cout << net->connections_.size();
			}
		//auto net = netx.second;
		// //STEINER TREE INTEGRATION CODE
		double eps = 0.0;	// setting for shallowness vs. lightness
		salt::Net salt_net;
		idMap.clear();
		bool canRun = salt_net.read_net(net, net_id++, idMap);
	//	printlog("Run SALT algorithm on net", salt_net.name, "with", salt_net.pins.size(), "pins using epsilon =", eps);
			// Run SALT
		salt::Tree salt_tree;
							int count = 0;
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
				puts("SOURCE IS STEINER WTF :?"); 
			}
			dfs(salt_tree.source, source_layer);
			bool netFailed = false;
			for (auto route: route_nodes)
			{
				MapSearchNode start({route.first.z, route.first.x, route.first.y});
				MapSearchNode goal({route.second.z, route.second.x, route.second.y});
				astarsearch.SetStartAndGoalStates(start, goal);
				unsigned int SearchState;
				unsigned int SearchSteps = 0;
				//printf("Routing from (%d, %d, %d) to (%d, %d, %d)\n", route.first.z, route.first.x, 
				//route.first.y, route.second.z, route.second.x, route.second.y);	
				//Supporting blocked source and target
				if (gcellGrid[route.first.z][route.first.x][route.first.y].congestion >=
					gcellGrid[route.first.z][route.first.x][route.first.y].congestionLimit)
					gcellGrid[route.first.z][route.first.x][route.first.y].congestion =
					gcellGrid[route.first.z][route.first.x][route.first.y].congestionLimit/2;
				if (gcellGrid[route.second.z][route.second.x][route.second.y].congestion >=
					gcellGrid[route.second.z][route.second.x][route.second.y].congestionLimit)
					gcellGrid[route.second.z][route.second.x][route.second.y].congestion = 
					gcellGrid[route.second.z][route.second.x][route.second.y].congestionLimit/2;

				do
				{
					SearchState = astarsearch.SearchStep();
					SearchSteps++;
				} while (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SEARCHING);
				if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SUCCEEDED) 
				{
					MapSearchNode* node = astarsearch.GetSolutionStart();
					int steps = 0;
					vector<triplet> myPath;
					count = 0;
					for (int addition = node->z-1; addition <= node->z+1; ++addition)
					{
						if (addition < 0 || addition >= zDimension || count ==2) continue;
						myPath.push_back({addition, node->x, node->y});
						++count;
					}
					gcellGrid[node->z][node->x][node->y].congestion += 1;
					//if (gcellGrid[node->z][node->x][node->y] )
					for (;;)
					{
						node = astarsearch.GetSolutionNext();
						if (!node) break;
						count = 0;
						for (int addition = node->z-1; addition <= node->z+1; ++addition)
						{
							if (addition < 0 || addition >= zDimension || count == 2) continue;
							myPath.push_back({addition, node->x, node->y});
							++count;
						}
						gcellGrid[node->z][node->x][node->y].congestion += 1;
					};
					netPath.insert(std::end(netPath), std::begin(myPath), std::end(myPath));
					//printf("searchSteps: %d\n", SearchSteps);
					astarsearch.FreeSolutionNodes();
				} 
				else if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_FAILED)   
				{
					printf("Search terminated. Did not find goal state\n");
					netFailed = true;
				}
    	        astarsearch.EnsureMemoryFreed();
			}
		
		}
		else
		{
			if (net->connections_.size() != 1)
			{
				vector<triplet> myPath;
				//if (net->name_ == "net1003")
				{
					int i = 0;
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
						count = 0;
						for (int addition = layerNo-1; addition <= layerNo+1; ++addition)
							{	
								if (addition < 0 || addition >= zDimension || count==2) continue;
									myPath.push_back({addition, p.first, p.second});
								++count;
							}
					}
				}
				netPath.insert(std::end(netPath), std::begin(myPath), std::end(myPath));
			}
			//cout << netName.second << endl;
			// handle 7aga hena kda
		}			
		out << netName.second << endl << "(" << endl;
		printOutput(out, netPath);
		out << ")" << endl;		
		
	}
    cout << endl << "Done." << endl;
    out.close();
    return 0;
}

void show_usage ()
{
    cout << endl;
    cout << "Usage:" << endl;
    cout << "lefdef_parser -lef <lef> -def <def>" << endl << endl;
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
