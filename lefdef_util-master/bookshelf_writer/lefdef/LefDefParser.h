/**
 * @file    LefDefParser.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-10-16 12:29:08
 *
 * Created on Tue Oct 16 12:29:08 2018.
 */

#ifndef LEFDEFPARSER_H
#define LEFDEFPARSER_H

#include "common_header.h"

#include "Lef.h"
#include "Def.h"
#include "util.h"

namespace my_lefdef
{
    
    struct gCellGridGlobal
    {
        pair<int, int> startCoord;
        pair<int, int> endCoord;
        int congestionINV;
        void setCongestionINV(int congestionINV_)
        {
            congestionINV = congestionINV_;
        }
        gCellGridGlobal(pair<int,int> startCoord_, pair<int, int> endCoord_): startCoord(startCoord_), endCoord(endCoord_){};
    };
    
class LefDefParser
{
public:
    void read_lef (string filename);
    void read_def (string filename);

    void write_bookshelf (string filename) const;
    void write_bookshelf_nodes (string filename) const;
    void write_bookshelf_nets (string filename) const;
    void write_bookshelf_wts (string filename) const;
    void write_bookshelf_scl (string filename) const;
    void write_bookshelf_pl (string filename) const;

    void update_def (string bookshelf_pl);

    static LefDefParser& get_instance ();

    // Following functions will be removed soon
    def::Def& get_def ();
    
    vector<vector<vector<gCellGridGlobal>>>& build_Gcell_grid(unordered_map <string, lef::LayerPtr>& layerMap);

private:
    lef::Lef&    lef_;
    def::Def&    def_;

    // Do not allow instantiation of this class.
    LefDefParser ();
    ~LefDefParser () = default;
    LefDefParser (const LefDefParser&) = delete;
    LefDefParser& operator= (const LefDefParser&) = delete;
    LefDefParser (LefDefParser&&) = delete;
    LefDefParser& operator= (LefDefParser&&) = delete;
};

}

#endif /* LEFDEFPARSER_H */
