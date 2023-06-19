#ifndef HistogramDisplay_H
#define HistogramDisplay_H

#include "ECGPkg.h"
#include "TMDQueue.h"


/* class HistogramDisplay */
//typedef struct HistogramDisplay HistogramDisplay;
typedef struct
{
    TMDQueue *itsTMDQueue;
}HistogramDisplay;

/* Constructors and destructors:*/
void HistogramDisplay_Init(HistogramDisplay *const me);
void HistogramDisplay_Cleanup(HistogramDisplay *const me);

/* Operations */
void             HistogramDisplay_getValue(HistogramDisplay *const me);
void             HistogramDisplay_update(const TimeMarkedData *tmd);
TMDQueue *HistogramDisplay_getItsTMDQueue(const HistogramDisplay *const me);
void             HistogramDisplay_setItsTMDQueue(HistogramDisplay *const me, TMDQueue *p_TMDQueue);

HistogramDisplay *HistogramDisplay_Create(void);
void              HistogramDisplay_Destroy(HistogramDisplay *const me);

#endif
