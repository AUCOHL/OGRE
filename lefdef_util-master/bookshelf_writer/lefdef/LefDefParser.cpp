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
LefDefParser::LefDefParser () : lef_(lef::Lef::get_instance()),
                                def_(def::Def::get_instance())
{
    //
}

/**
 * Returns the singleton object of the detailed router.
 */
LefDefParser& LefDefParser::get_instance ()
{
    static LefDefParser ldp;
    return ldp;
}

/**
 * Read a LEF file @a filename.
 */
void LefDefParser::read_lef (string filename)
{
    lef_.read_lef(filename);
    lef_.report();
}

/**
 * Read a DEF file @a filename.
 */
void LefDefParser::read_def (string filename)
{
    def_.read_def(filename);
    def_.report();
}

/**
 *
 */
void LefDefParser::write_bookshelf (string filename) const
{
    cout << "Writing bookshelf aux file." << endl;
    ofstream ofs(filename + ".aux");
    ofs << "RowBasedPlacement : temp.nodes temp.nets temp.wts temp.pl temp.scl temp.shapes" << endl;
    ofs.close();

    cout << "Writing bookshelf nodes file." << endl;
    write_bookshelf_nodes (filename + ".nodes");

    // nets
    cout << "Writing bookshelf nets file." << endl;
    write_bookshelf_nets (filename + ".nets");

    // wts
    cout << "Writing bookshelf wts file." << endl;
    write_bookshelf_wts (filename + ".wts");

    // scl
    cout << "Writing bookshelf scl file." << endl;
    write_bookshelf_scl (filename + ".scl");

    // pl
    cout << "Writing bookshelf pl file." << endl;
    write_bookshelf_pl (filename + ".pl");

    // aux
    cout << "Writing bookshelf aux file." << endl;
}

/**
 *
 */
static string get_current_time_stamp ()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    ostringstream oss;
    oss << std::put_time(&tm, "%m/%d/%Y %H:%M:%S");

    return oss.str();
}

/**
 *
 */
void LefDefParser::write_bookshelf_nodes (string filename) const
{
    ofstream ofs(filename);
    ofs << "UCLA nodes 1.0" << endl;
    ofs << "# Created : ";
    ofs << get_current_time_stamp() << endl;

    auto& component_umap = def_.get_component_umap();
    auto& pin_umap = def_.get_pin_umap();

    const auto x_pitch = lef_.get_min_x_pitch();
    const auto y_pitch = lef_.get_min_y_pitch();

    auto num_terminals = pin_umap.size();
    for (auto c : component_umap) {
        if (c.second->is_fixed_) {
            num_terminals++;
        }
    }

    ofs << "NumNodes : " << component_umap.size() + pin_umap.size() << endl;
    ofs << "NumTerminals : " << num_terminals << endl;

    for (auto p : pin_umap) {
        ofs << "\t" << std::setw(40) << std::left  << p.first;
        ofs << "\t" << std::setw(8)  << std::right << 1;
        ofs << "\t" << std::setw(8)  << std::right << 1;
        ofs << "\t" << "terminal" << endl;
    }

    for (auto c : component_umap) {
        ofs << "\t" << std::setw(40) << std::left << c.first;

        // Get width and height
        auto macro = c.second->lef_macro_;
        auto site = macro->site_;
        auto w = lround(macro->size_x_ / x_pitch);
        auto h = lround(macro->size_y_ / y_pitch);

        ofs << "\t" << std::setw(8) << std::right << w;
        ofs << "\t" << std::setw(8) << std::right << h;

        if (c.second->is_fixed_) {
            ofs << "\t" << "terminal";
        }
        ofs << endl;
    }
    ofs.close();
}

/**
 *
 */
void LefDefParser::write_bookshelf_nets (string filename) const
{
    ofstream ofs(filename);
    ofs << "UCLA nets 1.0" << endl;
    ofs << "# Created : ";
    ofs << get_current_time_stamp() << endl << endl;

    auto& net_umap = def_.get_net_umap();
    auto num_connections = 0;

    for (auto& n : net_umap) {
        auto net = n.second;
        num_connections += net->connections_.size();
    }

    // Count the number of pins
    ofs << "NumNets : " << net_umap.size() << endl;
    ofs << "NumPins : " << num_connections << endl << endl;

    for (auto& n : net_umap) {
        auto net = n.second;
        ofs << "NetDegree : " << std::setw(8) << std::right
            << net->connections_.size() << "\t" << n.first << endl;

        for (auto& c : net->connections_) {
            // Populate the name and the direction of the pin
            string name;
            PinDir direction;

            if (c->lef_pin_ == nullptr) {
                name = c->name_;
                direction = c->pin_->dir_;
            }
            else {
                name = c->component_->name_;
                direction = c->lef_pin_->dir_;
            }

            // Print out
            ofs << "\t" << std::setw(20) << std::left << name;
            if (direction == PinDir::input) {
                ofs << " I  :";
            }
            else if (direction == PinDir::output) {
                ofs << " O  :";
            }
            else {
                // FIXME
                ofs << " I  :";
            }

            // Offset
            ofs << " 0.5 0.5" << endl;
        }
    }

    ofs.close();
}

/**
 *
 */
void LefDefParser::write_bookshelf_wts (string filename) const
{
    ofstream ofs(filename);
    ofs << "UCLA wts 1.0" << endl;
    ofs << "# Created : ";
    ofs << get_current_time_stamp() << endl << endl;

    auto& net_umap = def_.get_net_umap();

    for (auto& n : net_umap) {
        ofs << std::setw(40) << std::left << n.first << "\t1" << endl;
    }

    ofs.close();
}

/**
 *
 */
void LefDefParser::write_bookshelf_scl (string filename) const
{
    ofstream ofs(filename);
    ofs << "UCLA scl 1.0" << endl;
    ofs << "# Created : ";
    ofs << get_current_time_stamp() << endl << endl;

    auto& rows = def_.get_rows();

    // Minimum Y- and X-track pitch
    auto x_pitch = lef_.get_min_x_pitch();
    auto y_pitch = lef_.get_min_y_pitch();
    auto x_pitch_dbu = lef_.get_min_x_pitch_dbu();
    auto y_pitch_dbu = lef_.get_min_y_pitch_dbu();

    ofs << "NumRows : " << rows.size() << endl << endl;

    for (auto& r : rows) {
        auto site = lef_.get_site(r->macro_);
        string sym_str;
        if (site->symmetry_ == SiteSymmetry::x) {
            sym_str = "X";
        }
        else if (site->symmetry_ == SiteSymmetry::y) {
            sym_str = "Y";
        }
        else if (site->symmetry_ == SiteSymmetry::r90) {
            sym_str = "R90";
        }
        else {
            // FIXME
            sym_str = "Y";
        }

        ofs << "CoreRow Horizontal" << endl;
        ofs << "\tCoordinate   : " << r->y_ / y_pitch_dbu << endl;
        ofs << "\tHeight       : " << site->y_ / y_pitch << endl;
        ofs << "\tSitewidth    : " << site->x_ / x_pitch << endl;
        ofs << "\tSitespacing  : " << r->step_x_ / x_pitch_dbu << endl;
        ofs << "\tSiteorient   : " << r->orient_str_ << endl;
        ofs << "\tSitesymmetry : " << sym_str << endl;

        ofs << "\tSubrowOrigin : " << r->x_ / x_pitch_dbu;
        ofs << "\tNumSites : " << r->num_x_ << endl;
        ofs << "End" << endl;
    }

    ofs.close();
}

/**
 *
 */
void LefDefParser::write_bookshelf_pl (string filename) const
{
    ofstream ofs(filename);
    ofs << "UCLA pl 1.0" << endl;
    ofs << "# Created : ";
    ofs << get_current_time_stamp() << endl << endl;

    auto& component_umap = def_.get_component_umap();
    auto& pin_umap = def_.get_pin_umap();

    auto x_pitch_dbu = lef_.get_min_x_pitch_dbu();
    auto y_pitch_dbu = lef_.get_min_y_pitch_dbu();

    for (auto it : component_umap) {
        auto c = it.second;
        ofs << std::setw(40) << std::left << c->name_;

        if (c->is_placed_ || c->is_fixed_) {
            ofs << "\t" << c->x_ / x_pitch_dbu
                << "\t" << c->y_ / y_pitch_dbu
                << "\t: " << c->orient_str_ << endl;
        }
        else {
            ofs << "\t" << 0 << "\t" << 0 << "\t: N" << endl;
        }
    }

    for (auto& it : pin_umap) {
        auto p = it.second;
        ofs << std::setw(40) << std::left  << p->name_;
        ofs << "\t" << p->x_ / x_pitch_dbu
            << "\t" << p->y_ / y_pitch_dbu
            << "\t: " << p->orient_str_ << endl;
    }

    ofs.close();
}

/**
 *
 */
void LefDefParser::update_def (string bookshelf_pl)
{
    unordered_map<string, pair<int, int>> pl_umap;

    // Read bookshelf placement file.
    cout << "Reading bookshelf pl file..." << endl;
    ifstream ifs(bookshelf_pl);
    if (!ifs.is_open()) {
        throw invalid_argument("Cannot open " + bookshelf_pl);
    }

    string line;
    getline(ifs, line);

    // FIXME
    assert(line == "UCLA pl 1.0");

    while (getline(ifs, line)) {
        if (line == "" or line[0] == '#') {
            continue;
        }
        istringstream iss(line);

        string t1, t2, t3;
        iss >> t1 >> t2 >> t3;
        pl_umap[t1] = make_pair(stoi(t2), stoi(t3));
    }

    cout << "Updating DEF file..." << endl;
    auto& component_umap = def_.get_component_umap();
    auto x_pitch_dbu = lef_.get_min_x_pitch_dbu();
    auto y_pitch_dbu = lef_.get_min_y_pitch_dbu();

    for (auto it : component_umap) {
        auto found = pl_umap.find(it.first);
        if (found == pl_umap.end()) {
            cout << "Error: " << it.first << " not found in .pl." << endl;
        }
        if (!it.second->is_fixed_) {
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


    def::Def& LefDefParser::get_def ()
    {
        return def_;
    }

//    vector<vector<vector<gCellGridGlobal>>> myGlobalGrid;
    vector<vector<vector<gCellGridGlobal>>> myGlobalGrid;

    vector<vector<vector<my_lefdef::gCellGridGlobal>>>& LefDefParser::build_Gcell_grid( unordered_map <string, lef::LayerPtr>& layerMap )
    {
        vector<def::GCellGridPtr> gCellGridVector= def_.get_gcell_grids ();
        set<int> xCoord;
        set<int> yCoord;

        //creating all points based on step and do, inserting into a set to revome duplicates
        for (auto GcellGridItem: gCellGridVector)
        {
            if (GcellGridItem->direction_ == TrackDir::x)
                for(int i = GcellGridItem->location_; i < GcellGridItem->location_ + GcellGridItem->num_ * GcellGridItem->step_; i = i + GcellGridItem->step_)
                    xCoord.insert(i);
            else
                for(int i = GcellGridItem->location_; i < GcellGridItem->location_ + GcellGridItem->num_ * GcellGridItem->step_; i = i + GcellGridItem->step_)
                    yCoord.insert(i);
        }


        //getting number of metal tracks from def file
        vector<def::TrackPtr> tracks= def_.get_tracks ();
        unordered_set <string> tracks_names;

        //create a map of metal layer name and layer pointer
        for (int i=0; i<tracks.size(); i++){
            string layerName = tracks[i]->layer_;
            tracks_names.insert(layerName);
            layerMap[layerName] = lef_.get_layer(layerName);
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
        for (int i=0; i<zDimension; i++){
            myGlobalGrid[i] = vector<vector<my_lefdef::gCellGridGlobal>>(xDimension-1);
        }

        //creating gcells
        for (int i = 0; i < xDimension - 1; ++i)
        {
            auto it = xCoord.begin();
            advance(it, i);
            int firstMinX = *it;
            ++it;
            int secondMinX = *it;
            for(int j = 0; j < yDimension - 1; ++j)
            {
                auto itY = yCoord.begin();
                advance(itY, j);
                int firstMinY = *itY;
                ++itY;
                int secondMinY = *itY;

                for (int k=0; k < zDimension; k++){
                    myGlobalGrid[k][i].push_back({{firstMinX, firstMinY},{secondMinX, secondMinY}});
                }
            }
        }
        //creating congestion based on available metal wires
        for (int k = 0; k < zDimension; k++)
        {
            for (int i = 0; i < xDimension - 1; ++i)
            {
                for(int j = 0; j < yDimension-1; ++j)
                {
                    //get units of lef and def
                    int defDBU = def_.get_dbu ();
                    int lefDBU = lef_.get_dbu ();

                    //get pitch
                    lef::LayerPtr l= layerMap["metal" + std::to_string(k+1)];
                    double pitch = layerMap["metal" + std::to_string(k+1)] -> pitch_;
                    double pitchX = layerMap["metal" + std::to_string(k+1)] -> pitch_x_;
                    double pitchY = layerMap["metal" + std::to_string(k+1)] -> pitch_y_;

                    double dimension;
                    if (l->dir_ == LayerDir::horizontal){ //get difference in y
                        dimension = myGlobalGrid[k][i][j].endCoord.second - myGlobalGrid[k][i][j].startCoord.second;
                    }
                    else if (l->dir_ == LayerDir::vertical){ //get difference in x
                        dimension = myGlobalGrid[k][i][j].endCoord.first - myGlobalGrid[k][i][j].startCoord.first;
                    }

                    //get number of free wires in cell
                    int freeWires = (dimension * defDBU) / (pitch * lefDBU);
                    myGlobalGrid[k][i][j].setCongestionINV(freeWires);

                }
            }
        }
        return myGlobalGrid;
    }
    void LefDefParser::get_connection_locations()
    {
        unordered_map<string, def::NetPtr> nets;
        nets = def_.get_net_umap();

        bool brk = true;
        for (const auto &n : nets)
        {
            auto &connections = n.second->connections_;
            const auto &c = connections[0];
            for (const auto &c : connections)
            {
                int lx = c->lx_;
                int ly = c->ly_;
                int ux = c->ux_;
                int uy = c->uy_;
                auto name = c->name_;

                D(name);
                D(lx), D(ly), D(ux), D(uy);

                auto comp = c->component_;
                auto comp_name = comp->name_;
                auto comp_x = comp->x_;
                auto comp_y = comp->y_;

                D(comp_name), D(comp_x), D(comp_y);

                auto lefpin = c->lef_pin_;
                auto lefpin_name = lefpin->name_;

                D(lefpin_name);

                // auto pin = c->pin_;
                // auto pin_name = pin->name_;

                // D(pin_name);

                if(brk) break;
            }
            if(brk) break;
        }
        return;
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
        while(lo < hi){
            midx = lo + (hi - lo + 1)/2;
          //  D(midx);

            if(x >= myGlobalGrid[0][midx][0].startCoord.first)
                lo = midx;
            else
                hi = midx-1;
        }
        int ansx = lo;
        int midy;
        lo = 0, hi = MAX_Y_IND;
        while(lo < hi){
            midy = lo + (hi - lo + 1) / 2;

            if (y >= myGlobalGrid[0][0][midy].startCoord.second)
                lo = midy;
            else
                hi = midy - 1;
        }
        int ansy = lo;
        return {ansx, ansy};
    }

}
