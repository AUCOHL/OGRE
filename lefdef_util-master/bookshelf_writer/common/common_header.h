/**
 * @file    common_header.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-01-05 00:08:54
 *
 * Created on Fri Jan  5 00:08:54 2018.
 */

#ifndef COMMON_HEADER_H
#define COMMON_HEADER_H

// I/O related
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>

// STL Utilities
#include <utility>
#include <memory>
#include <chrono>
#include <iterator>

// STL Algorithms
#include <algorithm>
#include <numeric>
#include <functional>

// STL Containers
#include <vector>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>

// From C and System libraries
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <cassert>
#include <sys/time.h>
#include <sys/mman.h>
#include <sys/stat.h>

#include <stdexcept>

using std::cout;
using std::fixed;
using std::scientific;
using std::setprecision;
using std::cerr;
using std::endl;

using std::string;
using std::stod;
using std::stof;
using std::stoi;

using std::istream;
using std::ostream;
using std::ifstream;
using std::istream;
using std::ofstream;
using std::stringstream;
using std::istringstream;
using std::ostringstream;

using std::vector;
using std::deque;
using std::list;
using std::map;
using std::set;
using std::queue;
using std::stack;
using std::unordered_map;
using std::unordered_set;

using std::istream_iterator;
using std::ostream_iterator;
using std::back_inserter;
using std::front_inserter;

using std::pair;
using std::tuple;

using std::find;
using std::sort;
using std::make_pair;

using std::shared_ptr;
using std::unique_ptr;
using std::make_shared;

using std::exception;
using std::invalid_argument;
using std::logic_error;
using std::runtime_error;

using std::numeric_limits;

#endif // #ifndef COMMON_HEADER_H

