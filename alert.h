#ifndef ALERT_H 
#define ALERT_H 

#include "stats.h"
extern int emailAlertCallCount;
extern int ledAlertCallCount;
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
void emailAlerter();
void ledAlerter();

#endif
