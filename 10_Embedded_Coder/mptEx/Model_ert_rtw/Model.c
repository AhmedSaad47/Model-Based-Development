/*
 * File: Model.c
 *
 * Code generated for Simulink model 'Model'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Aug 10 07:46:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Model.h"
#include "rtwtypes.h"
#include "Model_private.h"
#include "Definition.h"

/* Exported block signals */
real32_T CellVoltage;                  /* '<Root>/CellVoltage' */

/* External outputs (root outports fed by signals with default storage) */
ExtY_Model_T Model_Y;

/* Real-time model */
static RT_MODEL_Model_T Model_M_;
RT_MODEL_Model_T *const Model_M = &Model_M_;

/* Exported data definition */

/* Definition for custom storage class: Global */
uint32_T CellCurrent;                  /* '<Root>/CellCurrent' */
int8_T CellTemp;                       /* '<Root>/CellTemp' */
void uMultiWordMul(const uint32_T u1[], int32_T n1, const uint32_T u2[], int32_T
                   n2, uint32_T y[], int32_T n)
{
  int32_T i;
  int32_T j;
  int32_T k;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0U;
  }

  for (i = 0; i < n1; i++) {
    int32_T ni;
    uint32_T a0;
    uint32_T a1;
    uint32_T cb;
    uint32_T u1i;
    cb = 0U;
    u1i = u1[i];
    a1 = u1i >> 16U;
    a0 = u1i & 65535U;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      uint32_T b1;
      uint32_T w01;
      uint32_T w10;
      uint32_T yk;
      u1i = u2[j];
      b1 = u1i >> 16U;
      u1i &= 65535U;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint32_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      u1i = w10 << 16U;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      u1i = w01 << 16U;
      yk += u1i;
      cb += (uint32_T)(yk < u1i);
      y[k] = yk;
      cb += w10 >> 16U;
      cb += w01 >> 16U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }
}

/* Model step function */
void Model_step(void)
{
  uint32_T tmp;
  int8_T tmp_0;

  /* Outport: '<Root>/CV2' incorporates:
   *  Gain: '<S1>/Gain'
   *  Inport: '<Root>/CellVoltage'
   */
  Model_Y.CV2 = (real32_T)((uint16_T)Vg) * CellVoltage;

  /* Gain: '<S1>/Gain1' */
  if (((uint16_T)Tg) > 15) {
    tmp_0 = MAX_int8_T;
  } else {
    tmp_0 = (int8_T)(((uint16_T)Tg) << 3);
  }

  /* Outport: '<Root>/CT3' incorporates:
   *  Gain: '<S1>/Gain1'
   *  Inport: '<Root>/CellTemp'
   */
  Model_Y.CT3 = (int16_T)(tmp_0 * CellTemp);

  /* Gain: '<S1>/Gain2' incorporates:
   *  Inport: '<Root>/CellCurrent'
   *  Outport: '<Root>/CC12'
   */
  if (((uint16_T)Cg) > 15) {
    tmp = MAX_uint32_T;
  } else {
    tmp = (uint32_T)((uint16_T)Cg) << 28;
  }

  uMultiWordMul(&tmp, 1, &CellCurrent, 1, &Model_Y.CC12.chunks[0U], 2);

  /* End of Gain: '<S1>/Gain2' */
}

/* Model initialize function */
void Model_initialize(void)
{
  /* Registration code */

  /* external inputs */
  CellVoltage = 5.0F;
}

/* Model terminate function */
void Model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
