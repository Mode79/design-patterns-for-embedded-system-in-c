#include "WaveformDisplay.h"
#include "TMDQueue.h"
#include "TimeMarkedData.h"

void WaveformDisplay_Init(WaveformDisplay *const me)
{
    me->itsTMDQueue = NULL;
}

void WaveformDisplay_Cleanup(WaveformDisplay *const me)
{
}
void WaveformDisplay_update(const TimeMarkedData *tmd)
{
    printf("    WaveformDisplay -> TimeInterval: %d  DataValue: %d\n", tmd->timeInterval, tmd->dataValue);
}
void WaveformDisplay_getScalarValue(WaveformDisplay *const me)
{
}

void WaveformDisplay_setItsTMDQueue(WaveformDisplay *const me, struct TMDQueue *p_TMDQueue)
{
    me->itsTMDQueue = p_TMDQueue;
    TMDQueue_subscribe(me->itsTMDQueue, WaveformDisplay_update);
}

WaveformDisplay *WaveformDisplay_Create(void)
{
}

WaveformDisplay *WaveformDisplay_Destroy(WaveformDisplay *const me)
{
}
