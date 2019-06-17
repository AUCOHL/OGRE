/**
 * @file    Util.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-02-01 15:17:03
 *
 * Created on Thu Feb  1 15:17:03 2018.
 */

#ifndef UTIL_H
#define UTIL_H

#include "common_header.h"

template <typename E>
constexpr typename std::underlying_type<E>::type to_underlying(E e) noexcept {
    return static_cast<typename std::underlying_type<E>::type>(e);
}

template <typename T> void remove_vector_duplicates (vector<T>& vec);
template <typename T> void extend_vector (vector<T>& dest, vector<T>& src);
template <typename T> void delete_elements (vector<T>& a, vector<T>& b);

template <typename T> T gcd (T a, T b);
template <typename T> T lcm (T a, T b);

template <typename T>
bool has_overlap (T lx1, T ly1, T ux1, T uy1, T lx2, T ly2, T ux2, T uy2);

#endif
