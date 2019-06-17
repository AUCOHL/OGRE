/**
 * @file    DefWriter.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-10-24 17:12:41
 *
 * Created on Wed Oct 24 17:12:41 2018.
 */
#ifndef DEFWRITER_H
#define DEFWRITER_H

#include "common_header.h"

#include "Lef.h"
#include "Def.h"
#include "util.h"

namespace my_lefdef
{

class DefWriter
{
public:
    static DefWriter& get_instance ();

    void write_def (def::Def& def);

private:
    def::Def* def_;

    // Do not allow instantiation of this class.
    DefWriter ();
    ~DefWriter () = default;
    DefWriter (const DefWriter&) = delete;
    DefWriter& operator= (const DefWriter&) = delete;
    DefWriter (DefWriter&&) = delete;
    DefWriter& operator= (DefWriter&&) = delete;
};

}

#endif /* DEFWRITER_H */
