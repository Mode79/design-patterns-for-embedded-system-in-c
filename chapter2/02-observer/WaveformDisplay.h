#ifndef WaveformDisplay_H
#define WaveformDisplay_H

#include "ECGPkg.h"
#include "TMDQueue.h"


typedef struct WaveformDisplay WaveformDisplay;
struct WaveformDisplay
{
    TMDQueue* itsTMDQueue;
};
/* Constructors and destructors:*/
void WaveformDisplay_Init(WaveformDisplay* const me);
void WaveformDisplay_Cleanup(WaveformDisplay* const me);
/* Operations */
void WaveformDisplay_update(const TimeMarkedData *tmd);
void WaveformDisplay_getScalarValue(WaveformDisplay* const me);
void WaveformDisplay_setItsTMDQueue(WaveformDisplay* const me, TMDQueue* p_TMDQueue);

WaveformDisplay* WaveformDisplay_Create(void);
WaveformDisplay* WaveformDisplay_Destroy(WaveformDisplay* const me);

#endif //WaveformDisplay_H
