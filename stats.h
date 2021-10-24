#ifndef STATS_H 
#define STATS_H 

#include <math.h>

#ifdef NAN
/* NAN is supported */
#endif

struct Stats
{
    float average;
    float min;
    float max;
};

Stats compute_statistics(const float* numberset, int setlength);

#endif
