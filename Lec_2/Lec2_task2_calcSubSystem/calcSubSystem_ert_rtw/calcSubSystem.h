/*
 * File: calcSubSystem.h
 *
 * Code generated for Simulink model 'calcSubSystem'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 16:16:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_calcSubSystem_h_
#define RTW_HEADER_calcSubSystem_h_
#include <string.h>
#include <stddef.h>
#ifndef calcSubSystem_COMMON_INCLUDES_
# define calcSubSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* calcSubSystem_COMMON_INCLUDES_ */

#include "calcSubSystem_types.h"

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
} ExtU_calcSubSystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T divisionbyzero;               /* '<Root>/division by zero' */
} ExtY_calcSubSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_calcSubSystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_calcSubSystem_T calcSubSystem_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_calcSubSystem_T calcSubSystem_Y;

/* Model entry point functions */
extern void calcSubSystem_initialize(void);
extern void calcSubSystem_step(void);
extern void calcSubSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_calcSubSystem_T *const calcSubSystem_M;

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
 * '<Root>' : 'calcSubSystem'
 * '<S1>'   : 'calcSubSystem/Subsystem'
 * '<S2>'   : 'calcSubSystem/Subsystem/If Action Subsystem'
 * '<S3>'   : 'calcSubSystem/Subsystem/If Action Subsystem1'
 */
#endif                                 /* RTW_HEADER_calcSubSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
