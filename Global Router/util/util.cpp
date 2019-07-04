/**
 * @file    Util.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-02-01 15:17:03
 *
 * Created on Thu Feb  1 15:17:03 2018.
 */

#include "common_header.h"
#include "util.h"

/**
 * Extend vertor @a dest by concatenating @a src.
 */
template <typename T>
void extend_vector (vector<T>& dest, vector<T>& src) 
{
    dest.insert(dest.end(), src.begin(), src.end());
}

/**
 * Delete elements of @a b from @a a.
 */
template <typename T>
void delete_elements (vector<T>& a, vector<T>& b) 
{
    set<T> result;
    set_difference(a.begin(), a.end(), b.begin(), b.end(), 
                   inserter(result, result.end()));

    a.clear();
    a.insert(a.end(), result.begin(), result.end());
}

/**
 * Remove element duplicates in @a vec.
 */
template <typename T> 
void remove_vector_duplicates(vector<T>& vec)
{
    stable_sort(vec.begin(), vec.end());
    auto it_end = unique(vec.begin(), vec.end());
    vec.erase(it_end, vec.end());
}

/**
 * Return GCD of two numbers @a a and @a b.
 */
template <typename T>
T gcd (T a, T b) {
    T temp;

    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

/**
 * Return Least Common Multiple of two numbers @a a and @a b.
 */
template <typename T>
T lcm(T a, T b)
{
    T temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

/**
 * Return true if two rectangle has overlap.
 */
template <typename T>
bool has_overlap (T lx1, T ly1, T ux1, T uy1, T lx2, T ly2, T ux2, T uy2)
{
    if ((lx1 <= lx2 && lx2 <= ux1) && (ly1 <= ly2 && ly2 <= uy1)) {
        return true;
    }
    else if ((lx1 <= lx2 && lx2 <= ux1) && (ly1 <= uy2 && uy2 <= uy1)) {
        return true;
    }
    else if ((lx1 <= ux2 && ux2 <= ux1) && (ly1 <= ly2 && ly2 <= uy1)) {
        return true;
    }
    else if ((lx1 <= ux2 && ux2 <= ux1) && (ly1 <= uy2 && uy2 <= uy1)) {
        return true;
    }
    else {
        return false;
    }
}

// Template specialization
template int gcd<int> (int a, int b);
template uint32_t gcd<uint32_t> (uint32_t a, uint32_t b);
template uint64_t gcd<uint64_t> (uint64_t a, uint64_t b);

template int lcm<int> (int a, int b);
template uint32_t lcm<uint32_t> (uint32_t a, uint32_t b);
template uint64_t lcm<uint64_t> (uint64_t a, uint64_t b);

template bool has_overlap (uint32_t lx1, uint32_t ly1, uint32_t ux1, uint32_t uy1, 
                           uint32_t lx2, uint32_t ly2, uint32_t ux2, uint32_t uy2);
template bool has_overlap (double lx1, double ly1, double ux1, double uy1, 
                           double lx2, double ly2, double ux2, double uy2);
