/**
 * @file    StringUtil.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-01-24 08:18:48
 *
 * Created on Wed Jan 24 08:18:48 2018.
 */

#ifndef STRING_UTIL_H
#define STRING_UTIL_H

#include "common_header.h"

class StringUtil
{
public:
    static deque<string> tokenize (string);
    static string to_upper (string);
    static string to_lower (string);

private:
    StringUtil () = default;
    ~StringUtil () = default;
    StringUtil (const StringUtil& rhs) = delete;
    StringUtil& operator= (const StringUtil& rhs) = delete;
};

#endif
