/**
 * @file    LefDefParser.cpp
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-10-18 10:40:18
 *
 * Created on Tue Oct 16 12:31:28 2018.
 */

#include "LefDefParser.h"
#include "StringUtil.h"
#include "Watch.h"
#include "Logger.h"

#define D(x) cout << #x " is " << x << endl

namespace my_lefdef
{

/**
 * Default ctor.
 */
LefDefParser::LefDefParser() : lef_(lef::Lef::get_instance()),
                               def_(def::Def::get_instance())
{
    //
}

/**
 * Returns the singleton object of the detailed router.
 */
LefDefParser &LefDefParser::get_instance()
{
    static LefDefParser ldp;
    return ldp;
}

/**
 * Read a LEF file @a filename.
 */
void LefDefParser::read_lef(string filename)
{
    lef_.read_lef(filename);
    lef_.report();
}

/**
 * Read a DEF file @a filename.
 */
void LefDefParser::read_def(string filename)
{
    def_.read_def(filename);
    def_.report();
}

static string get_current_time_stamp()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    ostringstream oss;
    oss << std::put_time(&tm, "%m/%d/%Y %H:%M:%S");

    return oss.str();
}

void LefDefParser::update_def(string bookshelf_pl)
{
    unordered_map<string, pair<int, int>> pl_umap;

    // Read bookshelf placement file.
    cout << "Reading bookshelf pl file..." << endl;
    ifstream ifs(bookshelf_pl);
    if (!ifs.is_open())
    {
        throw invalid_argument("Cannot open " + bookshelf_pl);
    }

    string line;
    getline(ifs, line);

    // FIXME
    assert(line == "UCLA pl 1.0");

    while (getline(ifs, line))
    {
        if (line == "" or line[0] == '#')
        {
            continue;
        }
        istringstream iss(line);

        string t1, t2, t3;
        iss >> t1 >> t2 >> t3;
        pl_umap[t1] = make_pair(stoi(t2), stoi(t3));
    }

    cout << "Updating DEF file..." << endl;
    auto &component_umap = def_.get_component_umap();
    auto x_pitch_dbu = lef_.get_min_x_pitch_dbu();
    auto y_pitch_dbu = lef_.get_min_y_pitch_dbu();

    for (auto it : component_umap)
    {
        auto found = pl_umap.find(it.first);
        if (found == pl_umap.end())
        {
            cout << "Error: " << it.first << " not found in .pl." << endl;
        }
        if (!it.second->is_fixed_)
        {
            auto x_orig = it.second->x_;
            auto y_orig = it.second->y_;
            auto x_new = found->second.first * x_pitch_dbu;
            auto y_new = found->second.second * y_pitch_dbu;
            //            cout << it.first << " : (" << x_orig << ", " << y_orig << ")"
            //                             << " -> (" << x_new << ", " << y_new << ")" << endl;
            it.second->x_ = x_new;
            it.second->y_ = y_new;

            it.second->is_placed_ = true;
        }
    }
}

def::Def &LefDefParser::get_def()
{
    return def_;
}

//    vector<vector<vector<gCellGridGlobal>>> myGlobalGrid;
vector<vector<vector<gCellGridGlobal>>> myGlobalGrid;

vector<vector<vector<my_lefdef::gCellGridGlobal>>> &LefDefParser::build_Gcell_grid(unordered_map<int, lef::LayerPtr> &layerMap)
{
    vector<def::GCellGridPtr> gCellGridVector = def_.get_gcell_grids();
    set<int> xCoord;
    set<int> yCoord;

    //creating all points based on step and do, inserting into a set to revome duplicates
    for (auto GcellGridItem : gCellGridVector)
    {
        if (GcellGridItem->direction_ == TrackDir::x)
            for (int i = GcellGridItem->location_; i < GcellGridItem->location_ + GcellGridItem->num_ * GcellGridItem->step_; i = i + GcellGridItem->step_)
                xCoord.insert(i);
        else
            for (int i = GcellGridItem->location_; i < GcellGridItem->location_ + GcellGridItem->num_ * GcellGridItem->step_; i = i + GcellGridItem->step_)
                yCoord.insert(i);
    }
    //getting number of metal tracks from def file
    vector<def::TrackPtr> tracks = def_.get_tracks();
    unordered_set<string> tracks_names;
    
    //create a map of metal layer name and layer pointer
    for (int i = 0; i < tracks.size(); i++)
    {
        string layerName = tracks[i]->layer_;
        tracks_names.insert(layerName);
        int l = layerName[layerName.length()-1] - '0';
        layerMap[l] = lef_.get_layer(layerName);
    }
    //get dimensions of gcell grid
    int xDimension = xCoord.size();
    int yDimension = yCoord.size();
    int zDimension = tracks_names.size();
    cout << "Y DIMENSION " << yDimension - 1 << endl;
    cout << "X DIMENSION " << xDimension - 1 << endl;
    cout << "Z DIMENSION " << zDimension << endl;

    
    //building Gcell grid
    myGlobalGrid.resize(zDimension);
    for (int i = 0; i < zDimension; i++)
    {
        myGlobalGrid[i] = vector<vector<my_lefdef::gCellGridGlobal>>(xDimension - 1);
    }

    //creating gcells
    for (int i = 0; i < xDimension - 1; ++i)
    {
        auto it = xCoord.begin();
        advance(it, i);
        int firstMinX = *it;
        ++it;
        int secondMinX = *it;
        for (int j = 0; j < yDimension - 1; ++j)
        {
            auto itY = yCoord.begin();
            advance(itY, j);
            int firstMinY = *itY;
            ++itY;
            int secondMinY = *itY;

            for (int k = 0; k < zDimension; k++)
            {
                myGlobalGrid[k][i].push_back({{firstMinX, firstMinY}, {secondMinX, secondMinY}, (secondMinY - firstMinY) * (secondMinX - firstMinX)});
            }
        }
    }
   //get units of lef and def
    int defDBU = def_.get_dbu();
    
    //creating congestion based on available metal wires
    for (int k = 0; k < zDimension; k++)
    {
        for (int i = 0; i < xDimension - 1; ++i)
        {
            for (int j = 0; j < yDimension - 1; ++j)
            {
     
                                
                // DONE
                // string metalString = layerMap.begin()->first;
                // metalString = metalString.substr(0, 5);
                lef::LayerPtr l = layerMap[k + 1];
                double pitch = layerMap[k + 1]->pitch_;
                double pitchX = layerMap[k + 1]->pitch_x_;
                double pitchY = layerMap[k + 1]->pitch_y_;
                int dimension = 0, freeWires;
                if (l->dir_ == LayerDir::horizontal)
                { //get difference in y
                    dimension = myGlobalGrid[k][i][j].endCoord.second - myGlobalGrid[k][i][j].startCoord.second;
                    freeWires = dimension  / (pitchX * defDBU);
                }
                else if (l->dir_ == LayerDir::vertical)
                { //get difference in x
                    dimension = myGlobalGrid[k][i][j].endCoord.first - myGlobalGrid[k][i][j].startCoord.first;
                    freeWires = dimension / (pitchY * defDBU);
                }
                //get number of free wires in cell
                myGlobalGrid[k][i][j].setCongestionLimit(freeWires*2.5);
            }
        }
    }
    return myGlobalGrid;
}

  
int MAX_X_IND = 4;
int MAX_Y_IND = 1;
pair<int, int> LefDefParser::get_bounding_GCell(int x, int y)
{
    MAX_X_IND = myGlobalGrid[0].size() - 1;
    MAX_Y_IND = myGlobalGrid[0][0].size() - 1;
    //D(MAX_X_IND), D(MAX_Y_IND);
    // Binary search on x

    int lo = 0, midx, hi = MAX_X_IND;
    while (lo < hi)
    {
        midx = lo + (hi - lo + 1) / 2;
        //  D(midx);

        if (x >= myGlobalGrid[0][midx][0].startCoord.first)
            lo = midx;
        else
            hi = midx - 1;
    }
    int ansx = lo;
    int midy;
    lo = 0, hi = MAX_Y_IND;
    while (lo < hi)
    {
        midy = lo + (hi - lo + 1) / 2;

        if (y >= myGlobalGrid[0][0][midy].startCoord.second)
            lo = midy;
        else
            hi = midy - 1;
    }
    int ansy = lo;
    return {ansx, ansy};
}

} // namespace my_lefdef
