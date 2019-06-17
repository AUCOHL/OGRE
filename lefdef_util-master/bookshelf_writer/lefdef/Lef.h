/**
 * @file    Lef.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2017-12-23 22:26:47
 *
 * Created on Sat Dec 23 22:26:47 2017.
 */

#ifndef LEF_H
#define LEF_H

#include "lef/lefrReader.hpp"
#include "common_header.h"
#include "common_enum.h"

namespace lef
{

/* Forward declaration. */
struct Rect;
struct Unit;
struct Site;
struct Layer;
struct Via;
struct Obst;
struct Macro;
struct Pin;
struct Port;
class  Lef;

using RectPtr  =  shared_ptr<Rect>;
using UnitPtr  =  shared_ptr<Unit>;
using SitePtr  =  shared_ptr<Site>;
using LayerPtr =  shared_ptr<Layer>;
using ViaPtr   =  shared_ptr<Via>;
using ObstPtr  =  shared_ptr<Obst>;
using MacroPtr =  shared_ptr<Macro>;
using PinPtr   =  shared_ptr<Pin>;
using PortPtr  =  shared_ptr<Port>;

/**
 * A rectangle.
 */
struct Rect
{
    double lx_;
    double ly_;
    double ux_;
    double uy_;

    Rect () : lx_(numeric_limits<double>::max()),
              ly_(numeric_limits<double>::max()),
              ux_(numeric_limits<double>::min()),
              uy_(numeric_limits<double>::min()) {}

    Rect (double lx, double ly, double ux, double uy)
        : lx_(lx), ly_(ly), ux_(ux), uy_(uy) {}
};

ostream& operator<< (ostream& os, const Rect& r);


/**
 * A class to represent unit information of a LEF file.
 */
struct Unit
{
    string db_name_;       ///< databaseName of lefiUnits
    int db_number_;     ///< databaseNumber of lefiUnits
};

ostream& operator<< (ostream& os, const Unit& u);


/**
 * A class to represent a site.
 */
struct Site
{
    string name_;       ///< Name of the site.
    string class_;      ///< Class of the site. 
    double x_;          ///< Width.
    double y_;          ///< Height.
    SiteSymmetry symmetry_;   ///< Symmetry of the site.
};

ostream& operator<< (ostream& os, const Site& s);

/**
 * A class to represent a metal layer.
 */
struct Layer
{
    string name_;      ///< Name of the layer.
    string type_;      ///< Type of the layer.
    LayerDir dir_;       ///< Direction of the layer.

    ///< Spacing table
    struct SpacingTable {
        double parallel_run_length_;    ///< Always 0 for this contest.
        vector<pair<double, double>> spacing_rules_;  ///< Width to spacing.
    };

    double      min_width_;
    double      area_;
    double      width_;
    double      spacing_;
    double      pitch_;
    double      pitch_x_;
    double      pitch_y_;
};

ostream& operator<< (ostream& os, const Layer& l);


/**
 * A class to represent a via layer.
 */
struct Via
{
    string name_;          ///< Name of the via.

    struct Layer {
        string name_;
        LayerPtr layer_ptr_;
        vector<Rect> rect_vec_;

        Layer (string name, LayerPtr layer_ptr)
            : name_(name), layer_ptr_(layer_ptr), rect_vec_() {}
    };

    vector<Layer> layers_;
};

ostream& operator<< (ostream& os, const Via& v);


/**
 * A class to represent an obstruction.
 */
struct Obst
{
    // 
};


/**
 * A class to represent a macro.
 */
struct Macro
{
    string name_;
    string site_name_;
    double size_x_;
    double size_y_;

    SitePtr site_;

    unordered_map<string, PinPtr> pin_umap_;
};

ostream& operator<< (ostream& os, const Macro& m);


/**
 * A class to represent a pin.
 */
struct Pin
{
    MacroPtr owner_;
    string name_;
    PinDir dir_;
    PinUse use_;

    Rect bbox_;     ///< Bounding box of the ports.

    vector<PortPtr> ports_;
};

ostream& operator<< (ostream& os, const Pin& p);


/**
 * A classs to represent a port.
 */
struct Port
{
    PinPtr owner_;
    LayerPtr layer_;

    string name_;
    string layer_name_;
    vector<Rect> rects_;
    Rect bbox_;
};

ostream& operator<< (ostream& os, const Port& p);


/**
 * A class to keep the information in a LEF file.
 */
class Lef
{
public:
    static Lef& get_instance ();

    void read_lef (string filename);
    void report () const;
    void report_verbose () const;

    SitePtr get_site (string name);
    LayerPtr get_layer (string name);
    MacroPtr get_macro (string name);

    int get_dbu () const;
    double get_min_x_pitch () const;
    double get_min_y_pitch () const;
    int get_min_x_pitch_dbu () const;
    int get_min_y_pitch_dbu () const;

private:
    struct Impl;
    unique_ptr<Impl> pimpl_;   ///< Pointer to the implementation.

    friend class LefParser;

    Lef ();
    ~Lef () = default;
    Lef (const Lef&) = delete;
    Lef& operator= (const Lef&) = delete;
    Lef (Lef&&) = delete;
    Lef& operator= (Lef&&) = delete;
};


/**
 * A set of call-back functions for lef parser.
 */
class LefParser
{
public:
    static int set_units       (lefrCallbackType_e, lefiUnits*, lefiUserData );
    static int set_site        (lefrCallbackType_e, lefiSite*, lefiUserData);
    static int set_layer       (lefrCallbackType_e, lefiLayer*, lefiUserData);
    static int set_via         (lefrCallbackType_e, lefiVia*, lefiUserData);
    static int set_obstruction (lefrCallbackType_e, lefiObstruction*, lefiUserData);

    static int set_macro_begin (lefrCallbackType_e, const char*, lefiUserData);
    static int set_macro_end   (lefrCallbackType_e, const char*, lefiUserData);
    static int set_macro       (lefrCallbackType_e, lefiMacro*,  lefiUserData);
    static int set_pin         (lefrCallbackType_e, lefiPin*,    lefiUserData);

private:
    LefParser () = default;
    ~LefParser () = default;
    LefParser (const LefParser& rhs) = delete;
    LefParser& operator= (const LefParser& rhs) = delete;
};

}       // End of namespace lef

#endif
