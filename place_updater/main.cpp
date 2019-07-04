/**
 * @file    main.cpp
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2017-12-23 22:12:10
 *
 * Created on Sat Dec 23 22:12:10 2017.
 */

#include "Logger.h"
#include "Watch.h"
#include "ArgParser.h"
#include "LefDefParser.h"
#include "DefWriter.h"

#include <iostream>

using namespace std;

void show_usage ();
void show_banner ();
void show_cmd_args ();
int omp_thread_count();

#ifndef UNIT_TEST

/**
 * Main.
 */
int main (int argc, char* argv[])
{
    util::Watch watch;

    // Parsing command line arguments
    auto& ap = ArgParser::get();

    ap.initialize(argc, argv);
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");
    auto filename_pl = ap.get_argument("-pl");

    if (filename_lef == "" or filename_def == "" or filename_pl == "") {
        show_usage();
        return -1;
    }

    show_cmd_args();

    // Run detaile drouter
    auto& ldp = my_lefdef::LefDefParser::get_instance();
    ldp.read_lef(filename_lef);
    ldp.read_def(filename_def);
    ldp.update_def(filename_pl);

    auto& dw = my_lefdef::DefWriter::get_instance();
    dw.write_def(ldp.get_def());

    cout << endl << "Done." << endl;

    return 0;
}

void show_usage ()
{
    cout << endl;
    cout << "Usage:" << endl;
    cout << "place_updater -lef <lef> -def <def> -pl <bookshelf_pl>" << endl << endl;
}

void show_cmd_args ()
{
    auto& ap = ArgParser::get();
    auto filename_lef = ap.get_argument("-lef");
    auto filename_def = ap.get_argument("-def");
    auto filename_pl = ap.get_argument("-pl");
    cout << "LEF           : " << filename_lef << endl;
    cout << "DEF           : " << filename_def << endl;
    cout << "Bookshelf .pl : " << filename_pl << endl;
}

int omp_thread_count() {
    int n = 0;
#pragma omp parallel reduction(+:n)
    n += 1;
    return n;
}

#else

#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Simple testcases
#include <boost/test/unit_test.hpp>

#endif
