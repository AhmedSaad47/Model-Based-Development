/*
 * File: TPS_Mode_Detector.h
 *
 * Code generated for Simulink model 'TPS_Mode_Detector'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue May  5 22:54:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TPS_Mode_Detector_h_
#define RTW_HEADER_TPS_Mode_Detector_h_
#ifndef TPS_Mode_Detector_COMMON_INCLUDES_
#define TPS_Mode_Detector_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TPS_Mode_Detector_COMMON_INCLUDES_ */

#ifndef DEFINED_TYPEDEF_FOR_TPS_Modes_
#define DEFINED_TYPEDEF_FOR_TPS_Modes_

typedef enum {
  Normal = 0,                          /* Default value */
  Downgraded_Sen_1,
  Downgraded_Sen_2,
  Failure_Mode
} TPS_Modes;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  boolean_T TPS_bSensor1Failure;       /* '<Root>/TPS_bSensor1Failure' */
  boolean_T TPS_bSensor2Failure;       /* '<Root>/TPS_bSensor2Failure' */
  boolean_T TPS_bCoherencyFailure;     /* '<Root>/TPS_bCoherencyFailure' */
} ExtU;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  TPS_Modes TPS_Operation_Mode;        /* '<Root>/TPS_Operation_Mode' */
} ExtY;

/* External inputs (root inport signals with default storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void TPS_Mode_Detector_initialize(void);
extern void TPS_Mode_Detector_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('tpscode/TPS_Mode_Detector')    - opens subsystem tpscode/TPS_Mode_Detector
 * hilite_system('tpscode/TPS_Mode_Detector/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'tpscode'
 * '<S1>'   : 'tpscode/TPS_Mode_Detector'
 */
#endif                                 /* RTW_HEADER_TPS_Mode_Detector_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
