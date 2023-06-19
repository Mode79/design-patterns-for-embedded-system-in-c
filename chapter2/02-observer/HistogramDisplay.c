#include "HistogramDisplay.h"
#include "TMDQueue.h"
#include "TimeMarkedData.h"

static void cleanUpRelations(HistogramDisplay *const me);

void HistogramDisplay_Init(HistogramDisplay *const me)
{
    me->itsTMDQueue = NULL;
}

void HistogramDisplay_Cleanup(HistogramDisplay *const me)
{
    /* remove yourself from server subscription list */
    TMDQueue_unsubscribe(me->itsTMDQueue, HistogramDisplay_update);
    cleanUpRelations(me);
}

void HistogramDisplay_update(const TimeMarkedData *tmd)
{
    printf("    Histogram -> TimeInterval: %d  DataValue: %d\n", tmd->timeInterval, tmd->dataValue);
}
void HistogramDisplay_getValue(HistogramDisplay *const me)
{
}

TMDQueue *HistogramDisplay_getItsTMDQueue(const HistogramDisplay *const me)
{
    return (TMDQueue *)me->itsTMDQueue;
}

void HistogramDisplay_setItsTMDQueue(HistogramDisplay *const me, TMDQueue *p_TMDQueue)
{
    me->itsTMDQueue = p_TMDQueue;
    TMDQueue_subscribe(me->itsTMDQueue, HistogramDisplay_update);
}

HistogramDisplay *HistogramDisplay_Create(void)
{
    HistogramDisplay *me = (HistogramDisplay *)malloc(sizeof(HistogramDisplay));
    if(me != NULL)
    {
        HistogramDisplay_Init(me);
    }
    return me;
}

void HistogramDisplay_Destroy(HistogramDisplay *const me)
{
    if(me != NULL)
    {
        HistogramDisplay_Cleanup(me);
    }
    free(me);
}

static void cleanUpRelations(HistogramDisplay *const me)
{
    if(me->itsTMDQueue != NULL)
    {
        me->itsTMDQueue = NULL;
    }
}
