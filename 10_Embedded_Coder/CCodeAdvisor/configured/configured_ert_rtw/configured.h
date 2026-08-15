/*
 * File: configured.h
 *
 * Code generated for Simulink model 'configured'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Jul 26 00:11:23 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_configured_h_
#define RTW_HEADER_configured_h_
#ifndef configured_COMMON_INCLUDES_
#define configured_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* configured_COMMON_INCLUDES_ */

#include "configured_types.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
} ExtU_configured_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY_configured_T;

/* External inputs (root inport signals with default storage) */
extern ExtU_configured_T configured_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_configured_T configured_Y;

/* Model entry point functions */
extern void configured_initialize(void);
extern void configured_step(void);
extern void configured_terminate(void);

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
 * '<Root>' : 'configured'
 * '<S1>'   : 'configured/swc'
 */
#endif                                 /* RTW_HEADER_configured_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
