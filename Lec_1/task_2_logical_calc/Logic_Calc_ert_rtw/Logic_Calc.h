/*
 * File: Logic_Calc.h
 *
 * Code generated for Simulink model 'Logic_Calc'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 16:02:47 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Logic_Calc_h_
#define RTW_HEADER_Logic_Calc_h_
#include <string.h>
#include <stddef.h>
#ifndef Logic_Calc_COMMON_INCLUDES_
# define Logic_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Logic_Calc_COMMON_INCLUDES_ */

#include "Logic_Calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T In1;                         /* '<Root>/In1' */
  uint8_T In2;                         /* '<Root>/In2' */
} ExtU_Logic_Calc_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Output;                      /* '<Root>/Output' */
  uint8_T Output1;                     /* '<Root>/Output1' */
  uint8_T Output2;                     /* '<Root>/Output2' */
  uint8_T Output3;                     /* '<Root>/Output3' */
  uint8_T Output4;                     /* '<Root>/Output4' */
  uint8_T Output5;                     /* '<Root>/Output5' */
} ExtY_Logic_Calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_Logic_Calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_Logic_Calc_T Logic_Calc_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Logic_Calc_T Logic_Calc_Y;

/* Model entry point functions */
extern void Logic_Calc_initialize(void);
extern void Logic_Calc_step(void);
extern void Logic_Calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Logic_Calc_T *const Logic_Calc_M;

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
 * '<Root>' : 'Logic_Calc'
 */
#endif                                 /* RTW_HEADER_Logic_Calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
