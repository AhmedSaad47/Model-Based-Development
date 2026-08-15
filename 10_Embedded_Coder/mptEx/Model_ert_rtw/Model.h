/*
 * File: Model.h
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

#ifndef RTW_HEADER_Model_h_
#define RTW_HEADER_Model_h_
#ifndef Model_COMMON_INCLUDES_
#define Model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Model_COMMON_INCLUDES_ */

#include "Model_types.h"
#include "multiword_types.h"

/* Includes for objects with custom storage classes */
#include "Definition.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T CV2;                        /* '<Root>/CV2' */
  int16_T CT3;                         /* '<Root>/CT3' */
  uint64m_T CC12;                      /* '<Root>/CC12' */
} ExtY_Model_T;

/* Real-time Model Data Structure */
struct tag_RTM_Model_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Model_T Model_Y;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real32_T CellVoltage;           /* '<Root>/CellVoltage' */

/* Model entry point functions */
extern void Model_initialize(void);
extern void Model_step(void);
extern void Model_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Model_T *const Model_M;

/* Exported data declaration */

/* Declaration for custom storage class: Global */
extern uint32_T CellCurrent;           /* '<Root>/CellCurrent' */
extern int8_T CellTemp;                /* '<Root>/CellTemp' */

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
 * '<Root>' : 'Model'
 * '<S1>'   : 'Model/SWC'
 */
#endif                                 /* RTW_HEADER_Model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
