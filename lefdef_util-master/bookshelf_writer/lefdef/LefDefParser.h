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
    
    void build_Gcell_grid();

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
