/**
 * @file    Lef.cpp
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-10-17 09:30:51
 *
 * Created on Sat Dec 23 23:48:39 2017.
 */

#include "Lef.h"
#include "StringUtil.h"

#include <cassert>

using namespace std;

namespace lef
{

/**
 * Implementation of the class Lef.
 */
struct Lef::Impl
{
    string filename_;

    double manufacturing_grid_;
    string clearance_measure_;
    bool use_min_spacing_obs_;

    Unit unit_;

    vector<SitePtr>  sites_;
    vector<LayerPtr> layers_;
    vector<ViaPtr>   vias_;
    vector<ObstPtr>  obsts_;
    vector<PinPtr>   pins_;

    vector<MacroPtr> macros_;

    unordered_map<string, MacroPtr> macro_umap_;
    unordered_map<string, LayerPtr> layer_umap_;

    double min_x_pitch_ = 987654321.0;
    double min_y_pitch_ = 987654321.0;
    int    min_x_pitch_dbu_ = 987654321;
    int    min_y_pitch_dbu_ = 987654321;
};

/* Constructors and destructor. */
Lef::Lef () : pimpl_{new Impl()}
{
    //
}

Lef& Lef::get_instance ()
{
    static Lef lef;
    return lef;
}

/**
 * Read a LEF file @a filename.
 */
void Lef::read_lef (string filename)
{
    // The typical way to create a unique_ptr for a FILE* pointer
    auto fp = unique_ptr<FILE, decltype(&fclose)>(
                  fopen(filename.c_str(), "r"), &fclose);

    if (fp == nullptr) {
        throw invalid_argument("(E) LEF (" + filename + ") not found.");
    }

    pimpl_->filename_ = filename;

    lefrInit();

    // Set the call-back functions.
    lefrSetUnitsCbk (LefParser::set_units);
    lefrSetSiteCbk  (LefParser::set_site);

    stable_sort(pimpl_->sites_.begin(), pimpl_->sites_.end(),
                [](const SitePtr a, const SitePtr b)->bool {
                    return a->name_ < b->name_;
                });

    lefrSetLayerCbk (LefParser::set_layer);
    lefrSetViaCbk   (LefParser::set_via);
    lefrSetObstructionCbk (LefParser::set_obstruction); 

    lefrSetMacroBeginCbk (LefParser::set_macro_begin);
    lefrSetMacroEndCbk   (LefParser::set_macro_end);
    lefrSetMacroCbk      (LefParser::set_macro);
    lefrSetPinCbk        (LefParser::set_pin);

    // Read the LEF file.
    auto ret = lefrRead(fp.get(), filename.c_str(), (void*) this);

    if (ret != 0) {
        throw logic_error("(E) An error occured in LEF parser.");
    }

    // Set the minimum horizontal/vertical metal pitches
    for (auto l : pimpl_->layers_) {
        if (l->dir_ == LayerDir::horizontal) {
            pimpl_->min_y_pitch_ = (l->pitch_y_ < pimpl_->min_y_pitch_) 
                                       ? l->pitch_y_ : pimpl_->min_y_pitch_;
        }
        else if (l->dir_ == LayerDir::vertical) {
            pimpl_->min_x_pitch_ = (l->pitch_x_ < pimpl_->min_x_pitch_) 
                                      ? l->pitch_x_ : pimpl_->min_x_pitch_;
        }
    }

    const auto DBU = pimpl_->unit_.db_number_;
    cout << "min_x_pitch: " << pimpl_->min_x_pitch_ << endl;
    cout << "min_y_pitch: " << pimpl_->min_y_pitch_ << endl;
    cout << "DBU: " << DBU << endl;
    pimpl_->min_x_pitch_dbu_ = pimpl_->min_x_pitch_ * DBU;
    pimpl_->min_x_pitch_dbu_ = pimpl_->min_x_pitch_ * DBU;
    pimpl_->min_y_pitch_dbu_ = pimpl_->min_y_pitch_ * DBU;

    lefrReleaseNResetMemory();
}


void Lef::report () const
{
    cout << "Summary of the LEF file read." << endl;
    cout << "File name: " << pimpl_->filename_ << endl;
    cout << "\t#Sites : " << pimpl_->sites_.size() << endl;
    cout << "\t#Layers: " << pimpl_->layers_.size() << endl;
    cout << "\t#Macros: " << pimpl_->macros_.size() << endl;
    cout << endl;
}


void Lef::report_verbose () const
{
    cout << "Sites:" << endl;
    for (auto& site : pimpl_->sites_) {
        cout << "\t" << *site << endl;
    }

    cout << "Layers:" << endl;
    for (auto& layer : pimpl_->layers_) {
        cout << "\t" << *layer << endl;
    }

    cout << "Macros:" << endl;
    for (auto& m : pimpl_->macros_) {
        cout << "\t" << *m << endl;
    }
}

SitePtr Lef::get_site (string name)
{
    auto& sites = pimpl_->sites_;
    auto range = equal_range(sites.begin(), sites.end(), nullptr,
                 [name] (SitePtr s1, SitePtr s2) {
                    auto lval = s1 ? s1->name_ : name;
                    auto rval = s2 ? s2->name_ : name;
                    return lval < rval;
                 });

    if (range.first != sites.end()) {
        return *(range.first);
    }
    else {
        return nullptr;
    }
}

LayerPtr Lef::get_layer (string name)
{
    auto found = pimpl_->layer_umap_.find(name);

    if (found == pimpl_->layer_umap_.end()) {
        return nullptr;
    }
    else {
        return found->second;
    }
}

MacroPtr Lef::get_macro (string name)
{
    auto found = pimpl_->macro_umap_.find(name);

    if (found == pimpl_->macro_umap_.end()) {
        return nullptr;
    }
    else {
        return found->second;
    }
}

int Lef::get_dbu () const
{
    return pimpl_->unit_.db_number_;
}

double Lef::get_min_x_pitch () const
{
    return pimpl_->min_x_pitch_;
}

double Lef::get_min_y_pitch () const
{
    return pimpl_->min_y_pitch_;
}

int Lef::get_min_x_pitch_dbu () const
{
    return pimpl_->min_x_pitch_dbu_;
}

int Lef::get_min_y_pitch_dbu () const
{
    return pimpl_->min_y_pitch_dbu_;
}


// LEF Call-back functions.
int LefParser::set_units (lefrCallbackType_e, lefiUnits* units, 
                          lefiUserData ud)
{
    auto lef = static_cast<Lef*>(ud);

    if (units->hasDatabase()) {
        auto& unit = lef->pimpl_->unit_;
        unit.db_name_ = units->databaseName();
        unit.db_number_ = (int) units->databaseNumber();
    }

    return 0;
}

int LefParser::set_site  (lefrCallbackType_e type, lefiSite* site, 
                          lefiUserData ud)
{
    // Check if the type is correct
    if (type != lefrSiteCbkType) {
        cout << "Type is not lefrSiteCbkType, terminate parsing." << endl;
        return 1;
    }

    auto lef = static_cast<Lef*>(ud);

    // Create a new site.
    auto& sites = lef->pimpl_->sites_;
    sites.emplace_back(make_shared<Site>());

    auto& cur_site = sites.back();

    // Set the attributes.
    cur_site->name_  = site->name();
    cur_site->class_ = site->hasClass() ? site->siteClass() : "";
    if (site->hasSize()) {
        cur_site->x_ = site->sizeX();
        cur_site->y_ = site->sizeY();
    }

    // Symmetries
    if (site->hasXSymmetry()) {
        cur_site->symmetry_ = SiteSymmetry::x;
    }
    else if (site->hasYSymmetry()) {
        cur_site->symmetry_ = SiteSymmetry::y;
    }
    else if (site->has90Symmetry()) {
        cur_site->symmetry_ = SiteSymmetry::r90;
    }
    else {
        cur_site->symmetry_ = SiteSymmetry::na;
    }

    return 0;
}

int LefParser::set_layer (lefrCallbackType_e, lefiLayer* layer, 
                          lefiUserData ud)
{
    auto lef = static_cast<Lef*>(ud);
    
    // Create a new layer.
    auto& layers = lef->pimpl_->layers_;
    layers.emplace_back(make_shared<Layer>());
    auto& l = layers.back();

    // Set the attributes.
    l->name_ = layer->name();
    l->type_ = layer->hasType() ? layer->type() : "";

    // Direction
    if (layer->hasDirection()) {
        if (string(layer->direction()) == "HORIZONTAL"
            || string(layer->direction()) == "horizontal") 
        {
            l->dir_ = LayerDir::horizontal;
        }
        else if (string(layer->direction()) == "VERTICAL"
                 || string(layer->direction()) == "vertical") 
        {
            l->dir_ = LayerDir::vertical;
        }
        else {
            l->dir_ = LayerDir::na;
        }
    }

    // Minimum width, area, width, and spacing
    if (layer->hasMinwidth()) {
        l->min_width_ = layer->minwidth();
    }
    if (layer->hasArea()) {
        l->area_ = layer->area();
    }
    if (layer->hasWidth()) {
        l->width_ = layer->width();
    }
    if (layer->hasSpacingNumber()) {
        for (int i = 0; i < layer->numSpacing(); i++) {
            // TODO
        }
    }

    if (layer->hasSpacingTableOrtho()) {
        // TODO
//        for (int i = 0; i < layer->numSpacingTable(); i++) {
//            auto spacing_table = layer->spacingTable(i);
//            auto parallel = spacing_table->parallel();
//            auto plength = parallel->length();
//        }
    }

    // Minimum pitch
    if (layer->hasXYPitch()) {
        l->pitch_x_ = layer->pitchX();
        l->pitch_y_ = layer->pitchY();
    }
    else if (layer->hasPitch()) {
        l->pitch_ = layer->pitch();
        l->pitch_x_ = layer->pitch();
        l->pitch_y_ = layer->pitch();
    }

    // Assign to the layer map.
    lef->pimpl_->layer_umap_[l->name_] = l;

    return 0;
}

int LefParser::set_via (lefrCallbackType_e, lefiVia* via, lefiUserData ud) 
{
    auto lef = static_cast<Lef*>(ud);

    auto& vias = lef->pimpl_->vias_;
    vias.emplace_back(make_shared<Via>());
    auto& the_via = vias.back();

    the_via->name_ = via->name();
    the_via->layers_.reserve(via->numLayers());

    for (int i = 0; i < via->numLayers(); i++) {
        auto layer_name = via->layerName(i);
        auto layer = lef->pimpl_->layer_umap_[layer_name];

        the_via->layers_.emplace_back(layer_name, layer);

        for (int j = 0; j < via->numRects(i); j++) {
            auto& the_via_layer = the_via->layers_.back();
            the_via_layer.rect_vec_.emplace_back(
                via->xl(i,j), via->yl(i,j),
                via->xh(i,j), via->yh(i,j));
        }
    }

    return 0;
}

int LefParser::set_obstruction (lefrCallbackType_e, lefiObstruction* obs, 
                                lefiUserData ud)
{
    auto lef = static_cast<Lef*>(ud);

    auto geometries = obs->lefiObstruction::geometries();
    auto num_items = geometries->numItems();

    // TODO
    auto& obsts = lef->pimpl_->obsts_;
    obsts.resize(num_items);

    return 0;
}

int LefParser::set_macro_begin (lefrCallbackType_e, const char* name, 
                                lefiUserData ud)
{
    auto lef = static_cast<Lef*>(ud);
    auto& macros = lef->pimpl_->macros_;
    auto& macro_umap = lef->pimpl_->macro_umap_;

    auto the_macro = make_shared<Macro>();
    the_macro->name_ = string(name);

    macros.emplace_back(the_macro);
    macro_umap[the_macro->name_] = the_macro;

    return 0;
}

int LefParser::set_macro_end (lefrCallbackType_e, const char*, 
                              lefiUserData)
{
    return 0;
}

int LefParser::set_macro (lefrCallbackType_e, lefiMacro* macro, 
                          lefiUserData ud)
{
    auto lef = static_cast<Lef*>(ud);
    auto m = lef->pimpl_->macros_.back();

    m->name_ = macro->name();
    m->site_name_ = macro->siteName();
    m->size_x_ = macro->sizeX();
    m->size_y_ = macro->sizeY();

    auto& sites = lef->pimpl_->sites_;
    auto range = equal_range(sites.begin(), sites.end(), nullptr,
                 [m] (SitePtr s1, SitePtr s2) {
                    auto lval = s1 ? s1->name_ : m->site_name_;
                    auto rval = s2 ? s2->name_ : m->site_name_;
                    return lval < rval;
                 });
    if (range.first != sites.end()) {
        m->site_ = *(range.first);
    }
    else {
        m->site_ = nullptr;
    }

    return 0;
}

int LefParser::set_pin (lefrCallbackType_e, lefiPin* pin, lefiUserData ud)
{
    // Create a new pin
    auto lef = static_cast<Lef*>(ud);
    auto& pins = lef->pimpl_->pins_;

    pins.emplace_back(make_shared<Pin>());
    auto the_pin = pins.back();

    // Set name and direction
    the_pin->name_ = string(pin->name());
    string dir_str = string(pin->direction());
    if (dir_str == "INPUT" || dir_str == "input") {
        the_pin->dir_ = PinDir::input;
    }
    else if (dir_str == "OUTPUT" || dir_str == "output") {
        the_pin->dir_ = PinDir::output;
    }

    // Set pin use
    auto pin_use = StringUtil::to_upper(string(pin->use()));
    if (pin_use == "ANALOG") {
        the_pin->use_ = PinUse::analog;
    }
    else if (pin_use == "CLOCK") {
        the_pin->use_ = PinUse::clock;
    }
    else if (pin_use == "GROUND") {
        the_pin->use_ = PinUse::ground;
    }
    else if (pin_use == "POWER") {
        the_pin->use_ = PinUse::power;
    }
    else {
        the_pin->use_ = PinUse::signal;
    }

    // Create ports
    for (int i = 0; i < pin->numPorts(); i++) {
        auto port = pin->port(i);   // Type: lefiGeometries*
        the_pin->ports_.emplace_back(make_shared<Port>());

        auto cur_port = the_pin->ports_.back();
        cur_port->name_ = the_pin->name_;

        for (int j = 0; j < port->numItems(); j++) {
            if (port->itemType(j) == lefiGeomLayerE) {
                cur_port->layer_name_ = port->getLayer(j);
            }
            else if (port->itemType(j) == lefiGeomRectE) {
                auto rect = port->getRect(j);
                cur_port->rects_.emplace_back(rect->xl, rect->yl, 
                                              rect->xh, rect->yh);
            }
            else if (port->itemType(j) == lefiGeomPolygonE) {
                throw logic_error("(E) LEF port is of polygon geometry.");
            }
        }
        
        // Set the bounding box of the port.
        auto& bbox = cur_port->bbox_;
        for (auto& r : cur_port->rects_) {
            if (bbox.lx_ > r.lx_) {
                bbox.lx_ = r.lx_;
            }
            if (bbox.ly_ > r.ly_) {
                bbox.ly_ = r.ly_;
            }
            if (bbox.ux_ < r.ux_) {
                bbox.ux_ = r.ux_;
            }
            if (bbox.uy_ < r.uy_) {
                bbox.uy_ = r.uy_;
            }
        }
    }

    // (FIXME) Create bounding box.
    auto& bbox = the_pin->bbox_;
    for (auto& p : the_pin->ports_) {
        if (bbox.lx_ > p->bbox_.lx_) {
            bbox.lx_ = p->bbox_.lx_;
        }
        if (bbox.ly_ > p->bbox_.ly_) {
            bbox.ly_ = p->bbox_.ly_;
        }
        if (bbox.ux_ < p->bbox_.ux_) {
            bbox.ux_ = p->bbox_.ux_;
        }
        if (bbox.uy_ < p->bbox_.uy_) {
            bbox.uy_ = p->bbox_.uy_;
        }
    }

    // (FIXME) Get the current macro
    auto m = lef->pimpl_->macros_.back();
    m->pin_umap_[the_pin->name_] = the_pin;
    return 0;
}

ostream& operator<< (ostream& os, const Unit& u)
{
    os << "Unit (db_name=" << u.db_name_
       << ", db_number=" << u.db_number_
       << ")";
    return os;
}

ostream& operator<< (ostream& os, const Site& s)
{
    os << "Site (name=" << s.name_
       << ", class=" << s.class_
       << ", x=" << s.x_ << ", y=" << s.y_
       << ")";
    return os;
}

ostream& operator<< (ostream& os, const Layer& l)
{
    os << "Layer (name=" << l.name_
       << ", type=" << l.type_
       << ", dir=" << to_string(static_cast<long long>(l.dir_))
       << ", min_width_=" << l.min_width_
       << ", area=" << l.area_
       << ", width=" << l.width_
       << ", pitch=" << l.pitch_
       << ", pitch_x=" << l.pitch_x_
       << ", pitch_y=" << l.pitch_y_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Via& v)
{
    os << "Via (name=" << v.name_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Macro& m)
{
    os << "Macro (name=" << m.name_
       << ", site_name=" << m.site_name_
       << ", size_x=" << m.size_x_ << ", size_y=" << m.size_y_
       << ", num_pins=" << m.pin_umap_.size() 
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Pin& p)
{
    os << "Pin (name=" << p.name_
       << ", dir=" << to_string(static_cast<long long>(p.dir_))
       << ", use=" << to_string(static_cast<long long>(p.use_))
       << ", num_ports=" << p.ports_.size()
       << ", bbox=" << p.bbox_
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Port& p)
{
    os << "Port (name=" << p.name_
       << "layer=" << p.layer_name_
       << "num_rects=" << p.rects_.size()
       << ")";

    return os;
}

ostream& operator<< (ostream& os, const Rect& r)
{
    os << "Rect (lx=" << r.lx_ << ", ly=" << r.ly_
       << ", ux=" << r.ux_ << ", uy=" << r.uy_
       << ")";
    return os;
}

}       // End of namespace lef
