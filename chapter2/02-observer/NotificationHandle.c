#include "NotificationHandle.h"


static void cleanUpRelations(NotificationHandle *const me);

void NotificationHandle_Init(NotificationHandle *const me)
{
    me->itsNotificationHandle = NULL;
}

void NotificationHandle_Cleanup(NotificationHandle *const me)
{
    cleanUpRelations(me);
}

NotificationHandle *NotificationHandle_getItsNotificationHandle(const NotificationHandle *const me)
{
    return (NotificationHandle *)me->itsNotificationHandle;
}

void NotificationHandle_setItsNotificationHandle(NotificationHandle *const  me,
                                                 NotificationHandle *p_NotificationHandle)
{
    me->itsNotificationHandle = p_NotificationHandle;
}

NotificationHandle *NotificationHandle_Create(void)
{
    NotificationHandle *me = (NotificationHandle *)malloc(sizeof(NotificationHandle));
    if(me != NULL)
    {
        NotificationHandle_Init(me);
    }
    return me;
}

void NotificationHandle_Destroy(NotificationHandle *const me)
{
    if(me != NULL)
    {
        NotificationHandle_Cleanup(me);
    }
    free(me);
}

static void cleanUpRelations(NotificationHandle *const me)
{
    if(me->itsNotificationHandle != NULL)
    {
        me->itsNotificationHandle = NULL;
    }
}
