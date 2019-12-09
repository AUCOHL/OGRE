/**
 * @file    LefDefParser.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-10-16 12:29:08
 *
 * Created on Tue Oct 16 12:29:08 2018.
 */

#ifndef LEFDEFPARSER_H
#define LEFDEFPARSER_H

#include "common/common_header.h"

#include "Lef.h"
#include "Def.h"
#include "util/util.h"

namespace my_lefdef
{

struct gCellGridGlobal // Done by OGRE team
{
    pair<int, int> startCoord;
    pair<int, int> endCoord;
    int congestion  = 0;
    int capacity = 0;
    int congestionLimit; 
    int congestionLimitW;
    int congestionLimitV;
    int maxWire; 
    int maxVia; 
    int usedWires = 0; 
    int usedVias = 0; 
    long long area;
    void setCapacity(int capacity_)
    {
        capacity = capacity_;
    }  
    void setCongestionLimitW(int congestionLimitW_)
    {
        congestionLimitW = congestionLimitW_;
    }

    void setCongestionLimitV(int congestionLimitV_)
    {
        congestionLimitV = congestionLimitV_;
    }

    void setWireCap(int maxWire_)
    {
        maxWire = maxWire_;
    }

    void setViaCap(int maxVia_)
    {
        maxVia = maxVia_;
    }

    gCellGridGlobal(pair<int, int> startCoord_, pair<int, int> endCoord_, long long area_) : startCoord(startCoord_), endCoord(endCoord_), area(area_){};
};

class LefDefParser
{
public:
    void read_lef(string filename);
    void read_def(string filename);

    void update_def(string bookshelf_pl);

    static LefDefParser &get_instance();

    // Following functions will be removed soon
    def::Def &get_def();
    def::Def &def_;
    void get_connection_locations();

    // Done by OGRE team
    vector<vector<vector<gCellGridGlobal>>> &build_Gcell_grid(unordered_map<int, lef::LayerPtr> &layerMap);
    // Done by OGRE team
    pair<int, int> get_bounding_GCell(int x, int y);

// private:
    lef::Lef &lef_;

    // Do not allow instantiation of this class.
    LefDefParser();
    ~LefDefParser() = default;
    LefDefParser(const LefDefParser &) = delete;
    LefDefParser &operator=(const LefDefParser &) = delete;
    LefDefParser(LefDefParser &&) = delete;
    LefDefParser &operator=(LefDefParser &&) = delete;
};

} // namespace my_lefdef

#endif /* LEFDEFPARSER_H */
