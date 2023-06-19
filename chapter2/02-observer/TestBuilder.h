#ifndef TestBuilder_H
#define TestBuilder_H

#include "ECGPkg.h"
#include <stdio.h>
#include "ECG_Module.h"
#include "HistogramDisplay.h"
#include "TMDQueue.h"
#include "WaveformDisplay.h"

/* class TestBuilder */
typedef struct TestBuilder TestBuilder;
struct TestBuilder
{
    ECG_Module       itsECG_Module;
    HistogramDisplay itsHistogramDisplay;
    TMDQueue        itsTMDQueue;
    WaveformDisplay itsWaveformDisplay;
};

/* Constructors and destructors:*/
void TestBuilder_Init(TestBuilder *const me);
void TestBuilder_Cleanup(TestBuilder *const me);

// struct ArrhythmiaDetector* TestBuilder_getItsArrhythmiaDetector(const TestBuilder* const me);
struct ECG_Module       *TestBuilder_getItsECG_Module(const TestBuilder *const me);
struct HistogramDisplay *TestBuilder_getItsHistogramDisplay(const TestBuilder *const me);
// struct QRSDetector* TestBuilder_getItsQRSDetector(const TestBuilder* const me);
TMDQueue *TestBuilder_getItsTMDQueue(const TestBuilder *const me);
// struct WaveformDisplay* TestBuilder_getItsWaveformDisplay(const TestBuilder* const me);

TestBuilder *TestBuilder_Create(void);
void         TestBuilder_Destroy(TestBuilder *const me);

#endif
