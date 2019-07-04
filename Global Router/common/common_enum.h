/**
 * @file    common_enum.h
 * @author  Jinwook Jung (jinwookjung@kaist.ac.kr)
 * @date    2018-02-03 12:05:05
 *
 * Created on Sat Feb  3 12:05:05 2018.
 */

#ifndef COMMON_ENUM_H
#define COMMON_ENUM_H

enum class PinDir   { na, input, output, inout };
enum class PinUse   { na, analog, clock, ground, power, signal };
enum class SiteSymmetry { na, x, y, r90 };
enum class LayerDir { na, horizontal, vertical };
enum class TrackDir { na, x, y };

#endif
