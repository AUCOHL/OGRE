/**
 * @file    main.cpp
 * @author  Ali El-Said, Fady Mohamed, Habiba Gamal
 * @date    2019-6-1
*/

#include "common/common_header.h"
#include "Watch.h"
#include "ArgParser.h"
#include "LefDefParser.h"
#include "stlastar.h" // See header for copyright and usage information
//#include "salt.h"

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

void printOutput(ostream& out, vector<triplet>& myPath){
    
    triplet bufferMin(-10, -10, -10);
	triplet bufferMax(-10, -10, -10);
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
            out << startX << " " << startY << " " << endX << " " << endY << " Metal" << bufferMax.z+1 << endl;
            bufferMax = myPath[i];
            bufferMin = myPath[i];
        }
    }
	int i = myPath.size();
	int startX = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.first;
	int startY = gcellGrid[bufferMin.z][bufferMin.x][bufferMin.y].startCoord.second;
	int endX = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.first;
	int endY = gcellGrid[bufferMax.z][bufferMax.x][bufferMax.y].endCoord.second;
	out << startX << " " << startY << " " << endX << " " << endY << " Metal" << bufferMax.z+1 << endl;
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

	//salt::Tree fluteTree;
	int flutewl;
	
	//flute::readLUT();

	int d;
	pq ordered_nets; // self ordering <int,string> net structure
	while (net != nets.end())
	{
		d = 0;
		int connectionSize = net->second->connections_.size();
		
		int *x = new int[connectionSize+10], *y = new int[connectionSize+10];
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
	//	fluteTree = flute::flute(d, x, y, 3);
	//	printf("FLUTE wirelength of Net: %s | %d\n", net->first.c_str(), fluteTree.length);
	//	ordered_nets.push({fluteTree.length, net->first});
		exit:
			++net;
	}
	return ordered_nets;
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
	//auto ordered_nets = orderNets(nets);
    MapSearchNode prev(0,0,0), curr(0,0,0);
    vector <triplet> netPath;
	int netCounter=0;
			AStarSearch<MapSearchNode> astarsearch(100000);

	//putting obstructions on gcell grid
    putObstructions();
	puts("Starting to Route!");
	int net_id = 0;
	// for (int iterations = 1; ordered_nets.size(); ++iterations)
	// {

	// 	pq unrouted_nets;
		//while(ordered_nets.size())

		for (auto &netx: nets)
    	{
		//	printf("Net: %d\n", ++netCounter);
    	    netPath.clear();
			//auto netName = ordered_nets.top(); ordered_nets.pop();
			//auto &net = nets[netName.second];
			auto net = netx.second;
			// //STEINER TREE INTEGRATION CODE
			// double eps = 0.0;	// setting for shallowness vs. lightness
			// salt::Net salt_net;
			// bool canRun = salt_net.read_net(net, net_id++);

			// printlog("Run SALT algorithm on net", salt_net.name, "with", salt_net.pins.size(), "pins using epsilon =", eps);

			// // Run SALT
			// salt::Tree salt_tree;
			// salt::SaltBuilder saltB;
			// if (canRun)
			// 	saltB.Run(salt_net, salt_tree, eps);
				
			// END STEINER
			
			// return 0;

    	    int connection_size = net->connections_.size();
					//	printf("Connection Size: %d\n", connection_size);

			bool netFailed = false;

    	    int xCoordPrev = net->connections_[0]->lx_;
    	    int yCoordPrev = net->connections_[0]->ly_;
    	    string layer_namePrev;
    	    if (net->connections_[0]->lef_pin_ != nullptr)
    	        layer_namePrev = net->connections_[0]->lef_pin_->ports_[0]->layer_name_;
    	    else
    	    {
				layer_namePrev = net->connections_[0]->pin_->layer_;
				xCoordPrev = net->connections_[0]->pin_->x_;
				yCoordPrev = net->connections_[0]->pin_->y_;
			}
	
    	    string layer_numberPrev = "";
    	    for (int i = 5; i < layer_namePrev.length(); ++i)
    	            layer_numberPrev += layer_namePrev[i];
    	    int zCoordPrev = stoi(layer_numberPrev) - 1;
    	    pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordPrev, yCoordPrev);  
    	    xCoordPrev = locationInGCellGrid.first; yCoordPrev = locationInGCellGrid.second;
    	    prev = {zCoordPrev,xCoordPrev, yCoordPrev};
	

    	    for (int i = 1; i < connection_size; ++i) 
    	    {
    	        int xCoordCurr = net->connections_[i]->lx_;
    	        int yCoordCurr = net->connections_[i]->ly_;
    	        string layer_nameCurr = "";
    	        if (net->connections_[i]->lef_pin_ != nullptr)
    	        layer_nameCurr = net->connections_[i]->lef_pin_->ports_[0]->layer_name_;
    	        else
				{
    	            layer_nameCurr = net->connections_[i]->pin_->layer_;
					// we need to check this?
					xCoordCurr = net->connections_[i]->pin_->x_;
					yCoordCurr = net->connections_[i]->pin_->y_;
				}
	
    	        string layer_numberCurr = "";
    	        for (int i = 5; i < layer_nameCurr.length(); ++i)
    	            layer_numberCurr += layer_nameCurr[i];
    	        int zCoordCurr = stoi(layer_numberCurr) - 1;
    	        pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordCurr, yCoordCurr);  
    	        xCoordCurr = locationInGCellGrid.first; yCoordCurr = locationInGCellGrid.second;
    	        curr = {zCoordPrev,xCoordCurr,yCoordCurr};
				//printf("Routing from (%d, %d, %d) to (%d, %d, %d)\n", prev.z, prev.x, prev.y, zCoordCurr, xCoordCurr, yCoordCurr);
				astarsearch.SetStartAndGoalStates(prev, curr);
				unsigned int SearchState;
				unsigned int SearchSteps = 0;

				//Supporting blocked source and target
				// if (gcellGrid[prev.z][prev.x][prev.y].congestion >= gcellGrid[prev.z][prev.x][prev.y].congestionLimit)
				// 	gcellGrid[prev.z][prev.x][prev.y].congestion = gcellGrid[prev.z][prev.x][prev.y].congestionLimit/2;
				// if (gcellGrid[curr.z][curr.x][curr.y].congestion >= gcellGrid[curr.z][curr.x][curr.y].congestionLimit)
				// 	gcellGrid[curr.z][curr.x][curr.y].congestion = gcellGrid[curr.z][curr.x][curr.y].congestionLimit/2;

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
					myPath.push_back({node->z, node->x, node->y});
					gcellGrid[node->z][node->x][node->y].congestion += 1;
					//if (gcellGrid[node->z][node->x][node->y] )
					for (;;)
					{
						node = astarsearch.GetSolutionNext();
						if (!node) break;
						myPath.push_back({node->z, node->x, node->y});
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
    	      //  astarsearch.EnsureMemoryFreed();
				prev = curr;
    	    }
			// if (!netFailed){
			 	out << net->name_ << endl << "(" << endl;
    	     	printOutput(out, netPath);
    	     	out << ")" << endl;
			// }
			// else
			// {
			// 	unrouted_nets.push(netName);
			// 	netFailed = false;
			// 	continue;
			// }
    	
		//ordered_nets = unrouted_nets;
		//printf("Finished Iteration Number #%d\n", iterations);
		//printf("We have %d failed routed. Expanding Congestion!\n", unrouted_nets.size());
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
