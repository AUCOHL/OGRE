#define _CRT_SECURE_NO_WARNINGS

#ifndef  _GLOBAL_H_
#define  _GLOBAL_H_

#include <stdio.h>

#define  TRUE   1
#define  FALSE  0
#define  MAXLONG  0x7fffffffL

struct ppoint
{
  long    x, y;
};

typedef  struct ppoint Point;

typedef  long nn_array[8];

#endif  /* _GLOBAL_H_ */
