#include <stdio.h>
#include <math.h>
#include "stats.h"

Stats compute_statistics(const float* numberset, int setlength) 
{
    int i = 0;
    float sum = 0.0;
    Stats s;
    s.average = 0;
    s.min = s.max = numberset[0];
    for (i = 0; i<setlength; i++)
    {
	sum += numberset[i];
	if (s.min > numberset[i])
	{
		s.min = numberset[i];
	}
	if (s.max < numberset[i])
	{
		s.max = numberset[i];
	}
    }

    if (setlength == 0)
    {
	s.average = NAN;
	s.min = NAN;
	s.max = NAN;

    }
    else 
    {
 	s.average = sum/setlength;
    }

    return s; // TEST_CASE("reports average, minimum and maximum")
}

//Testcase:"average is NaN for empty array"
Stats compute_statistics(const int numberset, int setlength)
 {
	Stats s; 
	if ((setlength == 0 ) || (numberset == 0))
	{
		s.average = NAN;
		s.min = NAN;
		s.max = NAN;		
	}
	return s;	
}
