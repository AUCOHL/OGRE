/**
 * @file    main.cpp
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2017-12-23 22:12:10
 *
 * Created on Sat Dec 23 22:12:10 2017.
 */

#include "Logger.h"
#include "Watch.h"
#include "ArgParser.h"
#include "LefDefParser.h"
#include "stlastar.h" // See header for copyright and usage information

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>
#include <math.h>

using namespace std;

void show_usage ();
void show_cmd_args ();
int omp_thread_count();

#define INVALID 1

#ifndef UNIT_TEST

/**
 * Main.
 */
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
	
	return (gcellGrid[z][x][y].congestionINV <= 0);
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

	// push each possible move except allowing the search to go backwards
	if( (GetMap( z,x-1, y) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x-1) && (parent_y == y) && (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x-1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x, y-1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y-1) && (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x, y-1 );
		astarsearch->AddSuccessor( NewNode );
	}	

	if((GetMap(z, x+1, y ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::horizontal && !((parent_x == x+1) && (parent_y == y)&& (parent_z == z))) 
	{
		NewNode = MapSearchNode(z, x+1, y );
		astarsearch->AddSuccessor( NewNode );
	}	

		
	if((GetMap(z, x, y+1 ) != INVALID) && layerMap[z+1] ->dir_ == LayerDir::vertical && !((parent_x == x) && (parent_y == y+1)&& (parent_z == z)))
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

float MapSearchNode::GetCost( MapSearchNode &successor )
{
	return (float) GetMap( z,x, y );

}

void printOutput(ostream& out, vector<triplet>& myPath, vector<vector<vector<my_lefdef::gCellGridGlobal>>>& gcellGrid){
    
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

// void printOutput(ostream& out, vector<triplet>& myPath, vector<vector<vector<my_lefdef::gCellGridGlobal>>>& gcellGrid){
    
//     triplet buffer(-10, -10, -10);
//     if (myPath.size() > 0)
//         buffer = myPath[0];
//     for (int i = 1; i < myPath.size(); i++){
//         if(myPath[i].z == buffer.z)
//             continue;
//         else{
//             if(myPath[i-1] == buffer){
//                 //cout << buffer.x << " " << buffer.y <<  " metal " << buffer.z+1 << endl;
//                 int startX = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.first;
//                 int startY = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.second;
//                 int endX = gcellGrid[buffer.z][buffer.x][buffer.y].endCoord.first;
//                 int endY = gcellGrid[buffer.z][buffer.x][buffer.y].endCoord.second;
//                 out << startX << " " << startY << " " << endX << " " << endY << " metal " << buffer.z+1 << endl;
//                 buffer = myPath[i];
//             }
//             else{
//                 //cout << buffer.x << " " << buffer.y << " " << myPath[i-1].x << " " << myPath[i-1].y << " metal " << buffer.z+1 << endl;
//                 int startX = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.first;
//                 int startY = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.second;
//                 int endX = gcellGrid[buffer.z][myPath[i-1].x][myPath[i-1].y].endCoord.first;
//                 int endY = gcellGrid[buffer.z][myPath[i-1].x][myPath[i-1].y].endCoord.second;
//                 out << startX << " " << startY << " " << endX << " " << endY << " metal " << buffer.z+1 << endl;
//                 buffer = myPath[i];
//             }
//         }
//     }
//     if (buffer == myPath[myPath.size()-1]){
//         //cout << buffer.x << " " << buffer.y << " " << " metal " << buffer.z+1 << endl;
//         int startX = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.first;
//         int startY = gcellGrid[buffer.z][buffer.x][buffer.y].startCoord.second;
//         int endX = gcellGrid[buffer.z][buffer.x][buffer.y].endCoord.first;
//         int endY = gcellGrid[buffer.z][buffer.x][buffer.y].endCoord.second;
//         out << startX << " " << startY << " " << endX << " " << endY << " metal " << buffer.z+1 << endl;
//     }
// }
/*
	This function simply takes a set, and searches it
	for a triplet with the same coordinates
*/

int main (int argc, char* argv[])
{
    util::Watch watch;
    ofstream out;
//    if (!out.isOpen()){
//        cout << "Error to open file" << endl;
//    }
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
    //show_banner();
    show_cmd_args();
    ldp.read_lef(filename_lef);
    ldp.read_def(filename_def);

	AStarSearch<MapSearchNode> astarsearch(100000);
    gcellGrid = ldp.build_Gcell_grid(layerMap);
    zDimension = gcellGrid.size();
    xDimension = gcellGrid[0].size();
    yDimension = gcellGrid[0][0].size();
    for (auto &layer: layerMap){
        cout << layer.first << endl;
    }
//    //output for testing
//    for (int k=0; k<gcellGrid.size(); k++){
//        cout << "Metal Layer: " << k + 1 << ", Direction is : " ;
//        if (layerMap[k+1] ->dir_ == LayerDir::horizontal)
//            cout << "horizontal" << endl;
//        if (layerMap[k+1] ->dir_ == LayerDir::vertical)
//            cout << "vertical" << endl;

//        for (int i=0; i<gcellGrid[k].size(); i++){
//            for (int j=0; j<gcellGrid[k][i].size(); j++){
//                cout << "Start Coord X: " << gcellGrid[k][i][j].startCoord.first << " End Coord X: " << gcellGrid[k][i][j].endCoord.first << " Start Coord Y: " << gcellGrid[k][i][j].startCoord.second << " End Coord Y: " << gcellGrid[k][i][j].endCoord.second << " Free Wires " << gcellGrid[k][i][j].congestionINV << endl;
//            }
//        }
//        cout << endl;
//    }

    unordered_map<string, def::NetPtr> nets;
    nets = ldp.def_.get_net_umap();

    MapSearchNode prev(0,0,0), curr(0,0,0);
    vector <triplet> netPath;
	int netCounter=0;
    for (auto &net: nets)
    {
        netPath.clear();
		//printf("%d\n", ++netCounter);
        int connection_size = net.second->connections_.size();
        //if (connection_size <= 1)
       // 	continue;

        out << net.second->name_ << endl << "(" << endl;
        int xCoordPrev = net.second->connections_[0]->lx_;
        int yCoordPrev = net.second->connections_[0]->ly_;
        string layer_namePrev;
        if (net.second->connections_[0]->lef_pin_ != nullptr)
            layer_namePrev = net.second->connections_[0]->lef_pin_->ports_[0]->layer_name_;
        else
          {
			layer_namePrev = net.second->connections_[0]->pin_->layer_;
			xCoordPrev = net.second->connections_[0]->pin_->x_;
			yCoordPrev = net.second->connections_[0]->pin_->y_;
		  }
        
        string layer_numberPrev = "";
        for (int i = 5; i < layer_namePrev.length(); ++i)
                layer_numberPrev += layer_namePrev[i];
        int zCoordPrev = stoi(layer_numberPrev) - 1;
        pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordPrev, yCoordPrev);  
        xCoordPrev = locationInGCellGrid.first; yCoordPrev = locationInGCellGrid.second;
        prev = {zCoordPrev,xCoordPrev, yCoordPrev};
        //cout << "Net Name: " << net.first << endl;
        //cout << "Number of Connections: " << connection_size << endl;

        for (int i = 1; i < connection_size; ++i) 
        {
            int xCoordCurr = net.second->connections_[i]->lx_;
            int yCoordCurr = net.second->connections_[i]->ly_;
            string layer_nameCurr = "";
            if (net.second->connections_[i]->lef_pin_ != nullptr)
            layer_nameCurr = net.second->connections_[i]->lef_pin_->ports_[0]->layer_name_;
            else
			{
                layer_nameCurr = net.second->connections_[i]->pin_->layer_;
				cout << "current IO pin location : ";
				cout << net.second->connections_[i]->pin_->lx_ << " ";
				cout << net.second->connections_[i]->pin_->ly_ << endl;
				cout << "prev pin location : " << prev.x << " " << prev.y << endl;
			}
            
            string layer_numberCurr = "";
            for (int i = 5; i < layer_nameCurr.length(); ++i)
                layer_numberCurr += layer_nameCurr[i];
            int zCoordCurr = stoi(layer_numberCurr) - 1;
            pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordCurr, yCoordCurr);  
            xCoordCurr = locationInGCellGrid.first; yCoordCurr = locationInGCellGrid.second;
            curr = {zCoordPrev,xCoordCurr,yCoordCurr};
			if (net.first == "net504")
            cout << "Route from cell: ( " << prev.z << " , " << prev.x << " , " << prev.y
            << " ) to ( " << curr.z << " , " << curr.x << " , " << curr.y << " )\n took this path:\n";
			astarsearch.SetStartAndGoalStates(prev, curr);
			unsigned int SearchState;
			unsigned int SearchSteps = 0;
			do
			{
				SearchState = astarsearch.SearchStep();
				SearchSteps++;
			} while (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SEARCHING);

			if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_SUCCEEDED) 
			{
				//puts("Search found goal state");
				MapSearchNode* node = astarsearch.GetSolutionStart();
				int steps = 0;
				vector<triplet> myPath;
			//	node->PrintNodeInfo();
				myPath.push_back({node->z, node->x, node->y});
				gcellGrid[node->z][node->x][node->y].congestionINV -= 10;
				for (;;)
				{
					node = astarsearch.GetSolutionNext();
					if (!node) break;
					//node->PrintNodeInfo();
					myPath.push_back({node->z, node->x, node->y});
					gcellGrid[node->z][node->x][node->y].congestionINV -= 10;
					if (gcellGrid[node->z][node->x][node->y].congestionINV < 0)
						printf("blocked a gcellgrid\n");
					steps++;
				};
				//printf("Solution steps %d\n", steps);
				netPath.insert(std::end(netPath), std::begin(myPath), std::end(myPath));
				astarsearch.FreeSolutionNodes();
			} 
			else if (SearchState == AStarSearch<MapSearchNode>::SEARCH_STATE_FAILED)   
			{
				printf("Search terminated. Did not find goal state\n");
			}
			//printf("SearchSteps : %d\n", SearchSteps++);
            astarsearch.EnsureMemoryFreed();
			prev = curr;
            // for (auto loc: myPath)
            // {
            //     printf("Z: %d | X: %d | Y: %d\n", loc.z, loc.x, loc.y);
            // }
        }
		if (net.first == "net504"){
			for (auto trip: netPath)
			{
				printf("z: %d | x: %d | y: %d\n", trip.z, trip.x, trip.y);
			}
		}
        printOutput(out, netPath, gcellGrid);
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
 * @author Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date   2017-12-23 22:20:22
 */
/*void show_banner ()
{
    cout << endl;
    cout << string(79, '=') << endl;
    cout << "LEF/DEF Parser" << endl;
    cout << "Author: Jinwook Jung" << endl;
    cout << string(79, '=') << endl;
}*/

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
