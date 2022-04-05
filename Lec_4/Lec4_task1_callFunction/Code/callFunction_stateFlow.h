/*
 * File: callFunction_stateFlow.h
 *
 * Code generated for Simulink model 'callFunction_stateFlow'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 22:38:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_callFunction_stateFlow_h_
#define RTW_HEADER_callFunction_stateFlow_h_
#include <stddef.h>
#include <string.h>
#ifndef callFunction_stateFlow_COMMON_INCLUDES_
# define callFunction_stateFlow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* callFunction_stateFlow_COMMON_INCLUDES_ */

#include "callFunction_stateFlow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_callFunction_state;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_callFunction_stateFlow_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_callFunction_stateFlow_T;

/* Real-time Model Data Structure */
struct tag_RTM_callFunction_stateFlo_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_callFunction_stateFlow_T callFunction_stateFlow_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_callFunction_stateFlow_T callFunction_stateFlow_Y;

/* Model entry point functions */
extern void callFunction_stateFlow_initialize(void);
extern void callFunction_stateFlow_step(void);
extern void callFunction_stateFlow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_callFunction_stateFl_T *const callFunction_stateFlow_M;

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
 * '<Root>' : 'callFunction_stateFlow'
 * '<S1>'   : 'callFunction_stateFlow/Chart'
 * '<S2>'   : 'callFunction_stateFlow/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_callFunction_stateFlow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
