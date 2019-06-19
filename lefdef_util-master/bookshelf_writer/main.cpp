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

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <set>

using namespace std;

void show_usage ();
void show_banner ();
void show_cmd_args ();
int omp_thread_count();

#ifndef UNIT_TEST

/**
 * Main.
 */
int zDimension, xDimension, yDimension;

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
struct Node
{
	triplet coordinates;
	Node* parent;
	float gCost; // edge cost
	float hCost; // heuristic cost 
	float fCost; // combined cost
	bool operator < (const Node& other)
	{
		return fCost > other.fCost;
	}
	Node(triplet coordinates_, Node *parent_ = nullptr) : coordinates(coordinates_), parent(parent_) {};
};


vector<triplet> directions =
{
	{ 0,-1,0 },		//north
	{ 0 ,1, 0 },	//south
	{ 0 ,0, 1 },    //east
	{ 0 ,0, -1 },   //west
	{ 1 ,0, 0 },    //up
	{ -1 ,0, 0 },   //down
};
// should add the grid invalidation too
bool isValid(const Node* curr)
{
	return ((
		curr->coordinates.x >= 0 && curr->coordinates.x < xDimension &&
		curr->coordinates.y >= 0 && curr->coordinates.y < yDimension &&
		curr->coordinates.z >= 0 && curr->coordinates.z < zDimension ));
}

bool isDestination(const Node* curr, const Node *dest)
{
	return((
		curr->coordinates.x == dest->coordinates.x &&
		curr->coordinates.y == dest->coordinates.y &&
		curr->coordinates.z == dest->coordinates.z ));
}

double calculateHeuristic(const Node* curr, const Node* dest)
{
	// manhattan distance, maybe we should apply extra cost for up and down?
	return abs(curr->coordinates.x - dest->coordinates.x) +
		abs(curr->coordinates.y - dest->coordinates.y) +
		abs(curr->coordinates.z - dest->coordinates.z);
}

/*
	This function simply takes a set, and searches it
	for a triplet with the same coordinates
*/
Node* searchList(vector<Node*>& Set, triplet curr)
{
	for (auto &node : Set)
		if (node->coordinates == curr) return node;
	return nullptr;
}


/*
	The code contains redundant code but can be optimized and 
	implemented better but more on that later.
*/
vector<triplet> findPath(Node* source, Node* target)
{
	Node* currentForward = nullptr, *currentBackward = nullptr;

	/*
		OpenSet is basically the set of nodes that i am considering expanding
		and ClosedSet is the set of nodes that i expanded already.
		We have Forward and Backward versions of both for
		forward propagation and backward propagation
	*/
	vector<Node*> openSetForward, closedSetForward;
	vector<Node*> openSetBackward, closedSetBackward;
	openSetForward.push_back(source);
	openSetBackward.push_back(target);
	Node* intersection = new Node({0,0,0});
	while (!openSetForward.empty() || !openSetBackward.empty())
	{
		currentForward = *openSetForward.begin();
		currentBackward = *openSetBackward.begin();
		int currentForward_it = 0;
		int currentBackward_it = 0;

		// get the least node with function cost and expand that path
		for (auto node : openSetForward)
			if (node->fCost < currentForward->fCost)
				currentForward = node, ++currentForward_it;

		// insert in the expanded set, and remove from not expanded one
		closedSetForward.push_back(currentForward);
		openSetForward.erase(openSetForward.begin() + currentForward_it);
		int directionsSize = directions.size();
		Node* successor = new Node({0,0,0});

		for (int i = 0; i < directionsSize; ++i)
		{
			/*
				so here i am validating the direction i should go to with respect to the layer number.
				For example, if i am on layer 0 i can only go east or west.
			*/
			if (currentForward->coordinates.z == 0 || currentForward->coordinates.z == 2)
				if (i == 0 || i == 1) continue;
			if (currentForward->coordinates.z == 1 || currentForward->coordinates.z == 3)
				if (i == 2 || i == 3) continue;

			Node newNode(currentForward->coordinates + directions[i]);
			Node* searchListResult = searchList(closedSetForward, newNode.coordinates);
			// if it is invalid or i already expanded it, continue
			if (!isValid(&newNode) || searchListResult) continue;

			int totalCost = currentForward->gCost + 1;
			successor = searchList(openSetForward, newNode.coordinates);

			/* if it is not in the openSet insert it, else apply relaxation*/
			if (successor == nullptr)
			{
				successor = new Node(newNode.coordinates, currentForward);
				successor->gCost = totalCost;
				successor->hCost = calculateHeuristic(successor, target);
				successor->fCost = totalCost + successor->hCost;
				openSetForward.push_back(successor);
			}
			else if (totalCost < successor->gCost)
			{
				successor->parent = currentForward;
				successor->gCost = totalCost;
				successor->fCost = totalCost + successor->hCost;
			}
		}
		bool breaking = false;
		/* 
			if the node i expanded was in the expanded list of the backward propagation
			that means we intersected at a node from the two propagations.
			Save it, and the path is from that node till the parent in
			the closed list of the forward and the closed list of the backward!
		*/
		for (auto node : closedSetBackward)
		{
			if (node->coordinates == currentForward->coordinates)
				breaking = true;
		}
		if (breaking)
		{
			intersection = currentForward;
			break;
		}
		// get the least node with function cost and expand that path
		for (auto node : openSetBackward)
			if (node->fCost < currentBackward->fCost)
				currentBackward = node, ++currentBackward_it;

		closedSetBackward.push_back(currentBackward);
		openSetBackward.erase(openSetBackward.begin() + currentBackward_it);
		directionsSize = directions.size();
		for (int i = 0; i < directionsSize; ++i)
		{
			if (currentBackward->coordinates.z == 0 || currentBackward->coordinates.z == 2)
				if (i == 0 || i == 1) continue;
			if (currentBackward->coordinates.z == 1 || currentBackward->coordinates.z == 3)
				if (i == 2 || i == 3) continue;
			Node newNode(currentBackward->coordinates + directions[i]);
			Node* searchListResult = searchList(closedSetBackward, newNode.coordinates);
			if (!isValid(&newNode) || searchListResult) continue;

			int totalCost = currentBackward->gCost + 1;

			Node* successor = searchList(openSetBackward, newNode.coordinates);
			/* if it is not in the openSet insert it, else apply relaxation*/
			if (successor == nullptr)
			{
				successor = new Node(newNode.coordinates, currentBackward);
				successor->gCost = totalCost;
				successor->hCost = calculateHeuristic(successor, source);
				successor->fCost = totalCost + successor->hCost;
				openSetBackward.push_back(successor);
			}
			else if (totalCost < successor->gCost)
			{
				successor->parent = currentBackward;
				successor->gCost = totalCost;
				successor->fCost = totalCost + successor->hCost;
			}
		}
		breaking = false;
		for (auto node : closedSetForward)
		{
			if (node->coordinates == currentBackward->coordinates)
				breaking = true;
		}
		if (breaking) {
			intersection = currentBackward;
			break;
		}
	}
	vector<triplet> pathBackward, path;

	for (auto node : closedSetForward)
	{
		if (node->coordinates == intersection->coordinates) { intersection = node; break; }
	}
	currentForward = intersection;
	while (currentForward != nullptr)
	{
		path.push_back(currentForward->coordinates);
		currentForward = currentForward->parent;
	}
	for (auto node : closedSetBackward)
	{
		if (node->coordinates == intersection->coordinates) { intersection = node; break; }
	}
	currentForward = intersection;
	while (currentForward != nullptr)
	{
		path.push_back(currentForward->coordinates);
		currentForward = currentForward->parent;
	}

	return path;
}

int main (int argc, char* argv[])
{
    util::Watch watch;

    // Parsing command line arguments
    auto& ap = ArgParser::get();

    ap.initialize(argc, argv);
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");


    // Run detaile drouter
    auto& ldp = my_lefdef::LefDefParser::get_instance();

//    ldp.writeGcells();

    if (filename_lef == "" or filename_def == "") {
        show_usage();
        return -1;
    }

    show_banner();
    show_cmd_args();

    ldp.read_lef(filename_lef);
    ldp.read_def(filename_def);


    ldp.write_bookshelf("temp");

    unordered_map <string, lef::LayerPtr> layerMap;
    vector<vector<vector<my_lefdef::gCellGridGlobal>>> gcellGrid = ldp.build_Gcell_grid(layerMap);
    zDimension = gcellGrid.size();
    xDimension = gcellGrid[0].size();
    yDimension = gcellGrid[0][0].size();

    //output for testing
    for (int k=0; k<gcellGrid.size(); k++){
        cout << "Metal Layer: " << k + 1 << ", Direction is : " ;
        if (layerMap["metal" + std::to_string(k+1)] ->dir_ == LayerDir::horizontal)
            cout << "horizontal" << endl;
        if (layerMap["metal" + std::to_string(k+1)] ->dir_ == LayerDir::vertical)
            cout << "vertical" << endl;

        for (int i=0; i<gcellGrid[k].size(); i++){
            for (int j=0; j<gcellGrid[k][i].size(); j++){
                cout << "Start Coord X: " << gcellGrid[k][i][j].startCoord.first << " End Coord X: " << gcellGrid[k][i][j].endCoord.first << " Start Coord Y: " << gcellGrid[k][i][j].startCoord.second << " End Coord Y: " << gcellGrid[k][i][j].endCoord.second << " Free Wires " << gcellGrid[k][i][j].congestionINV << endl;
            }
        }
        cout << endl;
    }

    unordered_map<string, def::NetPtr> nets;
    nets = ldp.def_.get_net_umap();

    triplet prev(0,0,0), curr(0,0,0);
    
    for (auto &net: nets)
    {
        int connection_size = net.second->connections_.size();
        int xCoordPrev = net.second->connections_[0]->lx_;
        int yCoordPrev = net.second->connections_[0]->ly_;
        string layer_namePrev;
        if (net.second->connections_[0]->lef_pin_ != nullptr)
            layer_namePrev = net.second->connections_[0]->lef_pin_->ports_[0]->layer_name_;
        else
            layer_namePrev = net.second->connections_[0]->pin_->layer_;
        
        string layer_numberPrev = "";
        for (int i = 5; i < layer_namePrev.length(); ++i)
                layer_numberPrev += layer_namePrev[i];
        int zCoordPrev = stoi(layer_numberPrev) - 1;
        pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordPrev, yCoordPrev);  
        xCoordPrev = locationInGCellGrid.first; yCoordPrev = locationInGCellGrid.second;
        prev = {zCoordPrev,xCoordPrev, yCoordPrev};
        cout << "Net Name: " << net.first << endl;
        cout << "Number of Connections: " << connection_size << endl;
        for (int i = 1; i < connection_size; ++i) 
        {
            int xCoordCurr = net.second->connections_[i]->lx_;
            int yCoordCurr = net.second->connections_[i]->ly_;
            string layer_nameCurr = "";
            if (net.second->connections_[i]->lef_pin_ != nullptr)
            layer_nameCurr = net.second->connections_[i]->lef_pin_->ports_[0]->layer_name_;
            else
                layer_nameCurr = net.second->connections_[i]->pin_->layer_;
            
            string layer_numberCurr = "";
            for (int i = 5; i < layer_nameCurr.length(); ++i)
                layer_numberCurr += layer_nameCurr[i];
            int zCoordCurr = stoi(layer_numberCurr) - 1;
            pair<int, int> locationInGCellGrid = ldp.get_bounding_GCell(xCoordCurr, yCoordCurr);  
            xCoordCurr = locationInGCellGrid.first; yCoordCurr = locationInGCellGrid.second;
            curr = {zCoordPrev,xCoordCurr,yCoordCurr};
            vector<triplet> myPath = findPath(new Node(prev), new Node(curr));
              cout << "Route from cell: ( " << prev.z << " , " << prev.x << " , " << prev.y
              << " ) to ( " << curr.z << " , " << curr.x << " , " << curr.y << " )\n took this path:\n";
            
            prev = curr;
            for (auto loc: myPath)
            {
                printf("Z: %d | Y: %d | Z: %d\n", loc.z, loc.x, loc.y);
            }
        }
    }
    cout << endl << "Done." << endl;
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
void show_banner ()
{
    cout << endl;
    cout << string(79, '=') << endl;
    cout << "LEF/DEF Parser" << endl;
    cout << "Author: Jinwook Jung" << endl;
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
