/*
 * File: tpscode.h
 *
 * Code generated for Simulink model 'tpscode'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Thu May  7 23:57:20 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (8-bit)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_tpscode_h_
#define RTW_HEADER_tpscode_h_
#ifndef tpscode_COMMON_INCLUDES_
#define tpscode_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* tpscode_COMMON_INCLUDES_ */

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
extern void tpscode_initialize(void);
extern void tpscode_step(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'tpscode'
 * '<S1>'   : 'tpscode/TPS_Mode_Detector'
 */
#endif                                 /* RTW_HEADER_tpscode_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
