/*
 * File: TPS_Mode_Detector.c
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

#include "TPS_Mode_Detector.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Model step function */
void TPS_Mode_Detector_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/TPS_Mode_Detector' */
  /* Switch: '<S1>/Switch' incorporates:
   *  Inport: '<Root>/TPS_bCoherencyFailure'
   */
  if (rtU.TPS_bCoherencyFailure) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Inport: '<Root>/TPS_bSensor1Failure'
     *  Inport: '<Root>/TPS_bSensor2Failure'
     *  Logic: '<S1>/AND'
     *  Logic: '<S1>/AND1'
     *  Logic: '<S1>/NOT'
     *  Logic: '<S1>/NOT1'
     *  Switch: '<S1>/Switch2'
     */
    if ((!rtU.TPS_bSensor1Failure) && rtU.TPS_bSensor2Failure) {
      /* Outport: '<Root>/TPS_Operation_Mode' incorporates:
       *  Constant: '<S1>/Downgraded_Mode_Sen_1'
       */
      rtY.TPS_Operation_Mode = Downgraded_Sen_1;
    } else if ((!rtU.TPS_bSensor2Failure) && rtU.TPS_bSensor1Failure) {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Downgraded_Mode_Sen_2'
       *  Outport: '<Root>/TPS_Operation_Mode'
       */
      rtY.TPS_Operation_Mode = Downgraded_Sen_2;
    } else {
      /* Outport: '<Root>/TPS_Operation_Mode' incorporates:
       *  Constant: '<S1>/Failure_Mode'
       *  Switch: '<S1>/Switch2'
       */
      rtY.TPS_Operation_Mode = Failure_Mode;
    }

    /* End of Switch: '<S1>/Switch1' */
  } else {
    /* Outport: '<Root>/TPS_Operation_Mode' incorporates:
     *  Constant: '<S1>/Constant'
     */
    rtY.TPS_Operation_Mode = Normal;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/TPS_Mode_Detector' */
}

/* Model initialize function */
void TPS_Mode_Detector_initialize(void)
{
  /* (no initialization code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
