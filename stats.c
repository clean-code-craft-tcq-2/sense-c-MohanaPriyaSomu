#include "stats.h"

Stats Statistics{
	float average;
	float min;
	float max;
}s;

Stats compute_statistics(const float* numberset, int setlength) 
{
    int i = 0;
	int sum = 0;
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
	s.average = sum/setlength;
	if (setlength == 0)
	{
		return NAN; 
	}
	return s; // TEST_CASE("reports average, minimum and maximum")
}
