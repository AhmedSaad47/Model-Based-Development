/*
 * File: nochange.h
 *
 * Code generated for Simulink model 'nochange'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Jul 25 22:59:07 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_nochange_h_
#define RTW_HEADER_nochange_h_
#ifndef nochange_COMMON_INCLUDES_
#define nochange_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* nochange_COMMON_INCLUDES_ */

#include "nochange_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Inport;                       /* '<Root>/Inport' */
} ExtU_nochange_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outport;                      /* '<Root>/Outport' */
} ExtY_nochange_T;

/* Real-time Model Data Structure */
struct tag_RTM_nochange_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_nochange_T nochange_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_nochange_T nochange_Y;

/* Model entry point functions */
extern void nochange_initialize(void);
extern void nochange_step(void);
extern void nochange_terminate(void);

/* Real-time Model object */
extern RT_MODEL_nochange_T *const nochange_M;

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
 * '<Root>' : 'nochange'
 * '<S1>'   : 'nochange/swc'
 */
#endif                                 /* RTW_HEADER_nochange_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
