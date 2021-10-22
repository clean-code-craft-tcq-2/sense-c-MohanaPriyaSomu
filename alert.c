#include "alert.h"


int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void check_and_alert(float maxThreshold, alerter_funcptr alerters, Stats compute_statistics)
{
	if (compute_statistics.max > maxThreshold)
	{
		alerters();
	}
}

void emailAlerter()
{
	emailAlertCallCount = 1;
}

void ledAlertCallCount()
{
	ledAlertCallCount = 1;
}
		