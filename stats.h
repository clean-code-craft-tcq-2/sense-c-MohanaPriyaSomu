#ifndef STATS_H 
#define STATS_H 

#include <math.h>

#ifdef NAN
/* NAN is supported */
#endif

struct Statistics
{
    float average;
    float min;
    float max;
}Stats;

Stats compute_statistics(const float* numberset, int setlength);

#endif
