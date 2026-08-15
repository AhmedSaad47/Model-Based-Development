/*
 * File: configured.c
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

#include "configured.h"

/* External inputs (root inport signals with default storage) */
ExtU_configured_T configured_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_configured_T configured_Y;

/* Model step function */
void configured_step(void)
{
  /* Outport: '<Root>/Outport' incorporates:
   *  Inport: '<Root>/Inport'
   */
  configured_Y.Outport = configured_U.Inport;
}

/* Model initialize function */
void configured_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void configured_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
