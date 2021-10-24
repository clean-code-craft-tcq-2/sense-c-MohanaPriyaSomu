#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif
typedef struct Stats;
Stats compute_statistics(const float* numberset, int setlength);
