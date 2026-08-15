/*
 * File: nochange.c
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

#include "nochange.h"

/* External inputs (root inport signals with default storage) */
ExtU_nochange_T nochange_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_nochange_T nochange_Y;

/* Real-time model */
static RT_MODEL_nochange_T nochange_M_;
RT_MODEL_nochange_T *const nochange_M = &nochange_M_;

/* Model step function */
void nochange_step(void)
{
  /* Outport: '<Root>/Outport' incorporates:
   *  Inport: '<Root>/Inport'
   */
  nochange_Y.Outport = nochange_U.Inport;
}

/* Model initialize function */
void nochange_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void nochange_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
