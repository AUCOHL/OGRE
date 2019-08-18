#include "flute_wrapper.h"

#include <cassert>
#include <iostream>
using namespace std;

#include "flute-function.h"


Flute::Flute() {
    readLUT();      //Read in the binary lookup table - POWVFILE, POSTFILE

}

void Flute::routeNet(const std::vector<CoordinateThreeDim>& pinList, TreeFlute& result) {
    int pinNumber = pinList.size();
        if (pinNumber <= 1) return; 

    //The pin number must <= MAXD, or the flute will crash
    assert(pinNumber <= MAXD);

    // insert 2D-coordinate of pins of a net into x_ and y_
    for (int pinId = 0; pinId < pinNumber; ++pinId) {
        x_[pinId] = pinList[pinId].x ;
        y_[pinId] = pinList[pinId].y ;
    }

    // obtain the routing tree by FLUTE
    TreeWrapper routingTree;
    routingTree.tree = flute(pinNumber, x_.data(), y_.data(), ACCURACY);
    result.set(routingTree.tree);
    //printTree(routingTree.tree);
}

void Flute::printTree(Tree& routingTree) {
    printtree(routingTree);
}

void Flute::plotTree(Tree& routingTree) {
    plottree(routingTree);
}

int Flute::treeWireLength(Tree& routingTree) {
    return static_cast<int>(wirelength(routingTree));
}