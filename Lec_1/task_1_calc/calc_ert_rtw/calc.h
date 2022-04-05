/*
 * File: calc.h
 *
 * Code generated for Simulink model 'calc'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Mon Apr  4 21:00:39 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calc_h_
#define RTW_HEADER_calc_h_
#include <string.h>
#include <stddef.h>
#ifndef calc_COMMON_INCLUDES_
# define calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calc_COMMON_INCLUDES_ */

#include "calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
} ExtU_calc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T divisionbyzero;               /* '<Root>/division by zero' */
} ExtY_calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_calc_T calc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calc_T calc_Y;

/* Model entry point functions */
extern void calc_initialize(void);
extern void calc_step(void);
extern void calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calc_T *const calc_M;

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
 * '<Root>' : 'calc'
 * '<S1>'   : 'calc/If Action Subsystem'
 * '<S2>'   : 'calc/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
