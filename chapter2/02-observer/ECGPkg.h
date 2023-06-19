#ifndef ECGPkg_H
#define ECGPkg_H

// electrocardiogram  ECG

#include <stdio.h>
#include <stdlib.h>

/* forward declarations */
typedef struct TimeMarkedData TimeMarkedData;
typedef void (*UpdateFuncPtr)(const TimeMarkedData* tm);
typedef unsigned char boolean;
#define QUEUE_SIZE (20000)

#endif //ECGPkg_H
