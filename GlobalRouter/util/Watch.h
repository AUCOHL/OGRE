/**
 * @file    Watch.h
 * @author  Jinwook Jung (jinwookjungs@gmail.com)
 * @date    2017-09-29 09:47:39
 * @brief   Declares a utility class that measures runtime and memory usage.
 */
 
#ifndef WATCH_H 
#define WATCH_H	

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <memory>

#ifdef __linux__
#include <sys/time.h>
#include <sys/resource.h>
#endif

namespace util {

/**
 * @brief 
 * @author Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date   2017-09-22 00:51:19
 */
static int get_memory_usage()
{
#ifdef __linux__
    struct rusage usage; 
    if(getrusage(RUSAGE_SELF, &usage) == 0) {
        return usage.ru_maxrss / 1000;
    }
    else {
        return 0;
    }
#elif __APPLE__
    struct rusage usage; 
    if(getrusage(RUSAGE_SELF, &usage) == 0) {
        return usage.ru_maxrss / 1000000;
    }
    else {
        return 0;
    }
#else
    return 0;
#endif
}


/**
 * @brief  Return a date string of format "DD-MM-YYYY HH:MM:SS".
 * @author Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date   2017-09-27 00:51:17
 */
static std::string get_date_string ()
{
    auto tp = std::chrono::system_clock::now();
    std::time_t t = std::chrono::system_clock::to_time_t(tp);

    // Convert to calendar time
    std::string ts = std::ctime(&t);

    // Remove trailing newline
    ts.resize(ts.size()-1);

    return ts;
}


/**
 * @class  
 * @author Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date   2017-09-22 00:50:54
 * @brief  
 */
class Watch
{
public:
    Watch ();
    ~Watch ();

private:
    struct Impl;
    std::unique_ptr<Impl> pimpl_;   ///< Pointer to the implementation.
    static int depth_;

    Watch (const Watch&) = delete;
    Watch& operator= (const Watch&) = delete;
};

}   // End of namespace util

#endif

