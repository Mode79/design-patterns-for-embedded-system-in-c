#ifndef TimeMarkedData_H
#define TimeMarkedData_H

#include "ECGPkg.h"


struct TimeMarkedData
{
    int timeInterval;
    int dataValue;
};


void TimeMarkedData_Init(TimeMarkedData* const me);
void TimeMarkedData_Cleanup(TimeMarkedData* const me);


#endif //TimeMarkedData_H
