#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <functional>
#include <set>
#include <vector>
#include <chrono>
using namespace std::chrono;

using namespace std;

const int X = 100;
const int Y = 100;
const int Z = 4;
bool grid[4][100][100];

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
		curr->coordinates.x >= 0 && curr->coordinates.x < X &&
		curr->coordinates.y >= 0 && curr->coordinates.y < Y &&
		curr->coordinates.z >= 0 && curr->coordinates.z < Z ));
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

			int totalCost = currentForward->gCost + ((i > 3) ? 15 : 10);
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

			int totalCost = currentBackward->gCost + ((i > 3) ? 15 : 10);

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

int main()
{

	Node* source = new Node({ 0, 0, 0 });
	Node* destination = new Node({ 3,50, 50 });
	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	vector<triplet> path = findPath(source, destination);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(t2 - t1).count();
	cout << duration << endl;
	for (auto loc : path)
		printf("X: %d | Y: %d | Z: %d\n", loc.x, loc.y, loc.z);
	return 0;
}