/*
 * callFunctionSubsystem.h
 *
 * Code generation for model "callFunctionSubsystem".
 *
 * Model version              : 1.7
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Tue Apr  5 23:06:47 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_callFunctionSubsystem_h_
#define RTW_HEADER_callFunctionSubsystem_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef callFunctionSubsystem_COMMON_INCLUDES_
# define callFunctionSubsystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* callFunctionSubsystem_COMMON_INCLUDES_ */

#include "callFunctionSubsystem_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_callFunctionSubsys;/* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
} DW_callFunctionSubsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_callFunctionSubsystem_T;

/* Parameters (default storage) */
struct P_callFunctionSubsystem_T_ {
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_callFunctionSubsystem_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_callFunctionSubsystem_T callFunctionSubsystem_P;

/* Block states (default storage) */
extern DW_callFunctionSubsystem_T callFunctionSubsystem_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_callFunctionSubsystem_T callFunctionSubsystem_Y;

/* Model entry point functions */
extern void callFunctionSubsystem_initialize(void);
extern void callFunctionSubsystem_step(void);
extern void callFunctionSubsystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_callFunctionSubsyste_T *const callFunctionSubsystem_M;

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
 * '<Root>' : 'callFunctionSubsystem'
 * '<S1>'   : 'callFunctionSubsystem/Chart'
 * '<S2>'   : 'callFunctionSubsystem/Function-Call Subsystem'
 * '<S3>'   : 'callFunctionSubsystem/Function-Call Subsystem/checkSwitchState'
 * '<S4>'   : 'callFunctionSubsystem/Function-Call Subsystem/ledState'
 */
#endif                                 /* RTW_HEADER_callFunctionSubsystem_h_ */
