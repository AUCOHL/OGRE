/**
 * @file    Watch.cpp
 * @author  Jinwook Jung (jinwookjungs@gmail.com)
 * @date    2017-09-22 00:50:48
 *
 * Created on Fri 22 Sep 2017 12:50:48 AM KST.
 */

#include "Watch.h"

using namespace std;

namespace util
{

typedef chrono::time_point<chrono::system_clock> TimeStamp;

/**
 * @class Watch::Impl
 * @author Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date   2017-09-20 17:38:51
 * @brief Implementation of the Watch.
 */
struct Watch::Impl
{
    int    initial_mem_usage_;      ///< Initial RAM usage.
    TimeStamp begin_time_;             ///< Time stamp at the beginning.
    TimeStamp end_time_;               ///< Time stamp at the end.

    Impl () : initial_mem_usage_(0)
    {
        begin_time_ = chrono::system_clock::now();
        end_time_ = chrono::system_clock::now();
        initial_mem_usage_ = util::get_memory_usage();
    }
    ~Impl () {};
    Impl(Impl const&) = delete;
    Impl& operator = (const Impl&) = delete;

    void finish() {
        end_time_ = chrono::system_clock::now();
        auto elapsed = end_time_ - begin_time_;
        auto msec = chrono::duration_cast<chrono::milliseconds>(elapsed);
        int last_mem_usage = util::get_memory_usage();

        cout << "Mem usage: " << last_mem_usage - initial_mem_usage_ << " MB" << endl;
        cout << "Elapsed  : " << msec.count() / 1000.0 << " sec" << endl;
    }
};


int Watch::depth_ = 0;

Watch::Watch() : pimpl_( new Impl() )
{
    depth_++;
}
Watch::~Watch ()
{
    pimpl_->finish();
    depth_--;
}
}   // End of namespace util
