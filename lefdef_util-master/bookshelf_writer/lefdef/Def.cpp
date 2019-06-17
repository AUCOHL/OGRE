/**
 * @file    Def.cpp
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2017-12-24 23:08:18
 *
 * Created on Sun Dec 24 23:08:18 2017.
 */

#include "Def.h"

using namespace std;

namespace def
{

/**
 * Implementation of the class Def.
 */
struct Def::Impl
{
    // double dbu_;
    string design_name_;       ///< The design name.
    int dbu_;                       ///< Database unit microns.

    int die_lx_;               ///< Die lower bound.
    int die_ly_;               ///< Die lower bound.
    int die_ux_;               ///< Die upper bound.
    int die_uy_;               ///< Die upper bound.

    string filename_;
    vector<RowPtr> rows_;
    vector<TrackPtr> tracks_;
    vector<GCellGridPtr> gcell_grids_;

    unordered_map<string, PinPtr> pin_umap_;
    unordered_map<string, ComponentPtr> component_umap_;
    unordered_map<string, NetPtr> net_umap_;
    unordered_map<string, SpecialNetPtr> special_net_umap_;
};


/* Constructors and destructor. */
Def::Def () : pimpl_{new Impl()}
{
    //
}


Def& Def::get_instance ()
{
    static Def def;
    return def;
}

string Def::get_design_name () const
{
    return pimpl_->design_name_;
}

int Def::get_dbu () const
{
    return pimpl_->dbu_;
}

const vector<RowPtr>& Def::get_rows () const
{
    return pimpl_->rows_;
}

const vector<TrackPtr>& Def::get_tracks () const
{
    return pimpl_->tracks_;
}

const vector<GCellGridPtr>& Def::get_gcell_grids () const
{
    return pimpl_->gcell_grids_;
}

const ComponentUMap& Def::get_component_umap () const
{
    return pimpl_->component_umap_;
}

const NetUMap& Def::get_net_umap () const
{
    return pimpl_->net_umap_;
}

const SpecialNetUMap& Def::get_special_net_umap () const
{
    return pimpl_->special_net_umap_;
}

const PinUMap& Def::get_pin_umap () const
{
    return pimpl_->pin_umap_;
}


NetPtr Def::get_net (string name)
{
    auto& net_umap = pimpl_->net_umap_;
    auto found = net_umap.find(name);

    if (found == net_umap.end()) {
        return nullptr;
    }
    else {
        return found->second;
    }
}

ComponentPtr Def::get_component (string name)
{
    auto& component_umap = pimpl_->component_umap_;
    auto found = component_umap.find(name);

    if (found == component_umap.end()) {
        return nullptr;
    }
    else {
        return found->second;
    }
}

PinPtr Def::get_pin (string name)
{
    auto& pin_umap = pimpl_->pin_umap_;
    auto found = pin_umap.find(name);

    if (found == pin_umap.end()) {
        return nullptr;
    }
    else {
        return found->second;
    }
}


/**
 * Read a DEF file @a filename.
 */
void Def::read_def (string filename)
{
    // The typical way to create a unique_ptr for a FILE* pointer
	auto fp = unique_ptr<FILE, decltype(&fclose)>(
                  fopen(filename.c_str(), "r"), &fclose);

	if (fp == nullptr) {
		throw invalid_argument("(E) DEF (" + filename + ") not found.");
	}

    pimpl_->filename_ = filename;

    defrInit();

    defrSetDesignCbk(DefParser::set_design_name);
    defrSetUnitsCbk(DefParser::set_units);
    defrSetDieAreaCbk(DefParser::set_die_area);

    defrSetTrackCbk(DefParser::set_track);
    defrSetGcellGridCbk(DefParser::set_gcell_grid);
    defrSetRowCbk(DefParser::set_row);

    defrSetComponentStartCbk(DefParser::set_component_start);
    defrSetComponentCbk(DefParser::set_component);

    defrSetPinCbk(DefParser::set_pin);

    cout << "SPECIAL NETS..." << endl;
    defrSetSNetStartCbk(DefParser::set_special_net_start);
    defrSetSNetCbk(DefParser::set_special_net);
    cout << "SPECIAL NETS..." << endl;

	defrSetNetStartCbk(DefParser::set_net_start);
	defrSetNetCbk(DefParser::set_net);

    // TODO
    // group, region, net, via


    // Read the DEF file.
    auto ret = defrRead(fp.get(), filename.c_str(), (void*) this, true);

    if (ret != 0) {
        throw logic_error("(E) An error occured in DEF parser.");
    }

    defrReleaseNResetMemory();
    defrClear();
}


void Def::report () const
{
    cout << "Summary of the DEF file read." << endl;
    cout << "File name: " << pimpl_->filename_ << endl;
    cout << "\t#Rows      : " << pimpl_->rows_.size() << endl;
    cout << "\t#Tracks    : " << pimpl_->tracks_.size() << endl;
    cout << "\t#Components: " << pimpl_->component_umap_.size() << endl;
    cout << "\t#Pins      : " << pimpl_->pin_umap_.size() << endl;
    cout << "\t#Nets      : " << pimpl_->net_umap_.size() << endl;
    cout << endl;
}

void Def::report_verbose () const
{

    cout << "Rows: " << endl;
    for (auto& r : pimpl_->rows_) {
        cout << "\t" << *r << endl;
    }

    cout << "Tracks: " << endl;
    for (auto& t : pimpl_->tracks_) {
        cout << "\t" << *t << endl;
    }

    cout << "Components: " << endl;
    for (auto& it : pimpl_->component_umap_) {
        cout << "\t" << *(it.second) << endl;
    }

    cout << "Pins:" << endl;
    for (auto& it : pimpl_->pin_umap_) {
        cout << "\t" << *(it.second) << endl;
    }

    cout << "Nets: " << endl;
    for (auto& it : pimpl_->net_umap_) {
        cout << "\t" << *(it.second) << endl;
    }
}


int DefParser::set_design_name (defrCallbackType_e, const char* name, 
                                defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    def->pimpl_->design_name_ = name;

    return 0;
}

int DefParser::set_units (defrCallbackType_e, double unit, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    def->pimpl_->dbu_ = static_cast<int>(unit);

    return 0;
}

int DefParser::set_die_area (defrCallbackType_e, defiBox* box, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 

    def->pimpl_->die_lx_ = box->xl();
    def->pimpl_->die_ly_ = box->yl();
    def->pimpl_->die_ux_ = box->xh();
    def->pimpl_->die_uy_ = box->yh();

    return 0;
}

int DefParser::set_track (defrCallbackType_e, defiTrack* track, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& tracks = def->pimpl_->tracks_;

    tracks.emplace_back(make_shared<Track>());
    auto& the_track = tracks.back();

    string direction = track->macro();
    if (direction == "X" || direction == "x") {
        the_track->direction_ = TrackDir::x;
    }
    else {
        the_track->direction_ = TrackDir::y;
    }
    the_track->location_ = static_cast<int>(track->x());
    the_track->num_tracks_ = static_cast<int>(track->xNum());
    the_track->step_ = static_cast<int>(track->xStep());
    the_track->num_layers_ = static_cast<int>(track->numLayers());
    the_track->len_ = the_track->step_ * the_track->num_tracks_;

    the_track->layer_ = track->layer(0);
    for (int i = 0; i < the_track->num_layers_; i++) {
        the_track->layers_.emplace_back(track->layer(i));
    }

    return 0;
}


int DefParser::set_gcell_grid (defrCallbackType_e, defiGcellGrid* gcell_grid, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& gcell_grids = def->pimpl_->gcell_grids_;

    gcell_grids.emplace_back(make_shared<GCellGrid>());
    auto& the_grid = gcell_grids.back();

    string direction = gcell_grid->macro();
    if (direction == "X" || direction == "x") {
        the_grid->direction_ = TrackDir::x;
    }
    else {
        the_grid->direction_ = TrackDir::y;
    }

    the_grid->location_ = static_cast<int>(gcell_grid->x());
    the_grid->num_ = static_cast<int>(gcell_grid->xNum());
    the_grid->step_= static_cast<int>(gcell_grid->xStep());

    return 0;
}

//
// [ROW rowName siteName origX origY siteOrient
//      [DO numX BY numY [STEP stepX stepY]]
//      [+ PROPERTY {propName propVal} ...] ... ;] ...
int DefParser::set_row (defrCallbackType_e, defiRow* row, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& rows = def->pimpl_->rows_;

    rows.emplace_back(make_shared<Row>());
    auto the_row = rows.back();

    the_row->name_ = row->name();
    the_row->macro_ = row->macro();
    the_row->orient_str_ = row->orientStr();
    the_row->orient_ = row->orient();

    the_row->x_ = static_cast<int>(row->x());
    the_row->y_ = static_cast<int>(row->y());

    if (row->hasDoStep()) {
        the_row->num_x_  = static_cast<int>(row->xNum());
        the_row->num_y_  = static_cast<int>(row->yNum());
        the_row->step_x_ = static_cast<int>(row->xStep());
        the_row->step_y_ = static_cast<int>(row->yStep());
    }
    else if (row->hasDo()) {
        the_row->num_x_  = static_cast<int>(row->xNum());
        the_row->num_y_  = static_cast<int>(row->yNum());
        the_row->step_x_ = 0;
        the_row->step_y_ = 0;
    }
    else {
        the_row->num_x_  = 1;
        the_row->num_y_  = 1;
        the_row->step_x_ = 0;
        the_row->step_y_ = 0;
    }

    return 0;
}

int DefParser::set_component_start (defrCallbackType_e, int num_components, 
                                    defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& components = def->pimpl_->component_umap_;
    components.reserve(num_components);

    return 0;
}

int DefParser::set_component (defrCallbackType_e, defiComponent* comp, 
                              defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& components = def->pimpl_->component_umap_;

    auto the_comp = make_shared<Component>();

    the_comp->name_ = comp->id();
    the_comp->ref_name_ = comp->name();
    the_comp->is_fixed_ = comp->isFixed();
    the_comp->is_placed_ = comp->isPlaced();
    the_comp->x_ = comp->placementX();
    the_comp->y_ = comp->placementY();
    the_comp->orient_str_ = comp->placementOrientStr();
    the_comp->orient_ = comp->placementOrient();

    // Set the pointer to the lef macro
    auto& lef = lef::Lef::get_instance();
    the_comp->lef_macro_ = lef.get_macro(the_comp->ref_name_);
    
    components[the_comp->name_] = the_comp;

    return 0;
}

int DefParser::set_pin (defrCallbackType_e, defiPin* pin, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& pins = def->pimpl_->pin_umap_;

    auto the_pin = make_shared<Pin>();

    the_pin->name_ = pin->pinName();
    the_pin->net_name_ = pin->netName();

    auto dir_str = string(pin->direction());
    if (dir_str == "INPUT" || dir_str == "input") {
        the_pin->dir_ = PinDir::input;
    }
    else if (dir_str == "OUTPUT" || dir_str == "output") {
        the_pin->dir_ = PinDir::output;
    }

    the_pin->x_ = pin->placementX();
    the_pin->y_ = pin->placementY();

    the_pin->orient_str_ = pin->orientStr();
    the_pin->orient_ = pin->orient();

    if (pin->hasLayer()) {
        the_pin->layer_ = pin->layer(0);

		int xl, yl, xh, yh;
		pin->bounds(0, &xl, &yl, &xh, &yh);

        the_pin->lx_ = xl;
        the_pin->ly_ = yl;
        the_pin->ux_ = xh;
        the_pin->uy_ = yh;
    }

    pins[the_pin->name_] = the_pin;

    return 0;
}

int DefParser::set_net_start (defrCallbackType_e, int num_nets, 
                              defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& net_umap = def->pimpl_->net_umap_;
    net_umap.reserve(num_nets);

    return 0;
}

static void process_routed_net (NetPtr the_net, defiNet* net)
{
    cout << "Processing routed net..." << endl;
    the_net->wires_.reserve(net->numWires());

    for (int i = 0; i < net->numWires(); i++) {
        the_net->wires_.emplace_back(make_shared<Wire>());
        auto& the_wire = the_net->wires_.back();
        auto wire = net->wire(i);

        the_wire->wire_type_ = wire->wireType();
        the_wire->wire_segments_.reserve(wire->numPaths());
        auto& wire_segments = the_wire->wire_segments_;

        for (int j = 0; j < wire->numPaths(); j++) {
            wire_segments.emplace_back(make_shared<WireSegment>());
            auto& wire_segment = wire_segments.back();

            auto path = wire->path(j);
            path->initTraverse();

            int path_id = path->next();
            while (path_id != DEFIPATH_DONE) {
                int x, y, ext;
                switch (path_id) {
                    case DEFIPATH_LAYER:
                        wire_segment->layer_name_ = path->getLayer();
                        break;
                    case DEFIPATH_WIDTH:
                        wire_segment->width_ = path->getWidth();
                        break;
                    case DEFIPATH_POINT:
                        path->getPoint(&x, &y);
                        wire_segment->rpoints_.emplace_back(
                                make_shared<RoutingPoint>(x, y, 0));
                        break;
                    case DEFIPATH_FLUSHPOINT:
                        path->getFlushPoint(&x, &y, &ext);
                        wire_segment->rpoints_.emplace_back(
                                make_shared<RoutingPoint>(x, y, 0));
                        break;
                    case DEFIPATH_VIA:
                        auto& the_point = wire_segment->rpoints_.back();
                        the_point->has_via_ = true;
                        break;
                }
                path_id = path->next();
            }
        }
    }
}

static NetPtr create_net (Def* def, int dbu, defiNet* net)
{
    auto the_net = make_shared<Net>();

    the_net->name_ = net->name();
    the_net->connections_.reserve(net->numConnections());
    auto& connections = the_net->connections_;

    for (int i = 0; i < net->numConnections(); i++) {
        string inst_name = net->instance(i);
        string pin_name = net->pin(i);

        // Get the owner component
        auto comp = def->get_component(inst_name);
        int lx, ly, ux, uy;

        lef::PinPtr lef_pin = nullptr;
        ConnectionPtr c = nullptr;

        if (comp == nullptr) {
            auto pin = def->get_pin(pin_name); 

            if (pin) {
                lx = pin->lx_;
                ly = pin->ly_;
                ux = pin->ux_;
                uy = pin->uy_;
            }

            c = make_shared<Connection>(pin_name, pin, lx, ly, ux, uy);
        }
        else {
            auto lef_macro = comp->lef_macro_;
            lef_pin = lef_macro->pin_umap_[pin_name];

            lx = comp->x_ + static_cast<int>(lef_pin->bbox_.lx_ * dbu);
            ly = comp->y_ + static_cast<int>(lef_pin->bbox_.ly_ * dbu);
            ux = comp->x_ + static_cast<int>(lef_pin->bbox_.ux_ * dbu);
            uy = comp->y_ + static_cast<int>(lef_pin->bbox_.uy_ * dbu);

            c = make_shared<Connection>(pin_name, comp, lef_pin, lx, ly, ux, uy);
        }

        connections.emplace_back(c);
    }

    if (net->numWires() > 0) {
        process_routed_net(the_net, net);
    }

    return the_net;
}

int DefParser::set_net (defrCallbackType_e, defiNet* net, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto dbu = def->pimpl_->dbu_;

    auto the_net = create_net(def, dbu, net);

    auto& net_umap = def->pimpl_->net_umap_;
    net_umap[the_net->name_] = the_net;

    return 0;
}

int DefParser::set_special_net_start (defrCallbackType_e, int num_nets, 
                                      defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto& special_net_umap = def->pimpl_->special_net_umap_;
    special_net_umap.reserve(num_nets);

    return 0;
}

int DefParser::set_special_net (defrCallbackType_e, defiNet* net, defiUserData ud)
{
    auto def = static_cast<Def*>(ud); 
    auto dbu = def->pimpl_->dbu_;

    auto the_net = create_net(def, dbu, net);
    cout << the_net->name_ << endl;

    auto& special_net_umap = def->pimpl_->special_net_umap_;
    special_net_umap[the_net->name_] = static_pointer_cast<SpecialNet>(the_net);

    return 0;
}




ostream& operator<< (ostream& os, const Row& r)
{
    os << "Row (name=" << r.name_
       << ", macro=" << r.macro_
       << ", orient_str=" << r.orient_str_ << ", orient=" << r.orient_
       << ", x=" << r.x_ << ", y=" << r.y_
       << ", num_x=" << r.num_x_ << ", num_y=" << r.num_y_
       << ", step_x=" << r.step_x_ << ", step_y=" << r.step_y_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Track& t)
{
    os << "Track (direction=" << static_cast<int>(t.direction_)
       << ", location=" << t.location_
       << ", num_tracks=" << t.num_tracks_
       << ", step=" << t.step_
       << ", num_layers=" << t.num_layers_
       << ", layer=" << t.layer_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Component& c)
{
    os << "Component (name=" << c.name_
       << ", ref_name=" << c.ref_name_
       << ", x=" << c.x_ << ", y=" << c.y_
       << ", is_fixed=" << c.is_fixed_
       << ", is_placed=" << c.is_placed_
       << ", orient_str=" << c.orient_str_
       << ", orient=" << c.orient_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Pin& p)
{
    os << "Pin (name=" << p.name_
       << ", net_name=" << p.net_name_
       << ", layer=" << p.layer_
       << ", dir=" << static_cast<long long>(p.dir_)
       << ", x=" << p.x_ << ", y=" << p.y_
       << ", orient_str=" << p.orient_str_
       << ", orient=" << p.orient_
       << ", lx=" << p.lx_ << ", ly=" << p.ly_
       << ", ux=" << p.ux_ << ", uy=" << p.uy_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Via& v)
{
    os << "Via (layer=" << v.layer_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const RoutingPoint& rp)
{
    os << "RoutingPoint (x=" << rp.x_ << ", y=" << rp.y_ << ", ext=" << rp.ext_
       << ", has_via=" << rp.has_via_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Wire& w)
{
    os << "Wire (wire_type=" << w.wire_type_
       << ", layer=" << w.layer_
       << ", num_wire_segments=" << w.wire_segments_.size()
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const WireSegment& ws)
{
    os << "WireSegment (layer_name=" << ws.layer_name_
       << ", width=" << ws.width_
       << ", num_rpoints=" << ws.rpoints_.size()
       << ")";

    return os;
}


ostream& operator<< (ostream& os, const Connection& c)
{
    os << "Connection (name=" << c.name_
       << ", lx=" << c.lx_ << ", ly=" << c.ly_
       << ", ux=" << c.ux_ << ", uy=" << c.uy_;

    if (c.lef_pin_ != nullptr) {
        os << ", lef_pin=" << *(c.lef_pin_);
    }
    os << ")";

    return os;
}

ostream& operator<< (ostream& os, const Net& n)
{
    os << "Net (name=" << n.name_
       << ", num_pins=" << n.connections_.size()
       << ", num_wires=" << n.wires_.size()
       << ", num_vias=" << n.vias_.size()
       << ")";

    return os;
}

int Def::get_die_lx () const
{
    return pimpl_->die_lx_;
}
int Def::get_die_ly () const
{
    return pimpl_->die_ly_;
}
int Def::get_die_ux () const
{
    return pimpl_->die_ux_;
}
int Def::get_die_uy () const
{
    return pimpl_->die_uy_;
}


}       // End of namespace lefdef
