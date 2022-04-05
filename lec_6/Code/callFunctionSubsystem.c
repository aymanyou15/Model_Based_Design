/*
 * callFunctionSubsystem.c
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

#include "callFunctionSubsystem.h"
#include "callFunctionSubsystem_private.h"

/* Block states (default storage) */
DW_callFunctionSubsystem_T callFunctionSubsystem_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_callFunctionSubsystem_T callFunctionSubsystem_Y;

/* Real-time model */
RT_MODEL_callFunctionSubsyste_T callFunctionSubsystem_M_;
RT_MODEL_callFunctionSubsyste_T *const callFunctionSubsystem_M =
  &callFunctionSubsystem_M_;

/* Model step function */
void callFunctionSubsystem_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (callFunctionSubsystem_DW.temporalCounter_i1 < 3U) {
    callFunctionSubsystem_DW.temporalCounter_i1++;
  }

  if (callFunctionSubsystem_DW.is_active_c3_callFunctionSubsys == 0U) {
    callFunctionSubsystem_DW.is_active_c3_callFunctionSubsys = 1U;
    callFunctionSubsystem_DW.temporalCounter_i1 = 0U;
  } else {
    if (callFunctionSubsystem_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out1' incorporates:
       *  Chart: '<S2>/checkSwitchState'
       *  Chart: '<S2>/ledState'
       *  Constant: '<Root>/Constant'
       */
      /*  check_switch */
      /*  ledState */
      callFunctionSubsystem_Y.Out1 = (callFunctionSubsystem_P.Constant_Value ==
        1.0);

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      callFunctionSubsystem_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(callFunctionSubsystem_M->rtwLogInfo,
                      (&callFunctionSubsystem_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(callFunctionSubsystem_M)!=-1) &&
        !((rtmGetTFinal(callFunctionSubsystem_M)-
           callFunctionSubsystem_M->Timing.taskTime0) >
          callFunctionSubsystem_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(callFunctionSubsystem_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++callFunctionSubsystem_M->Timing.clockTick0)) {
    ++callFunctionSubsystem_M->Timing.clockTickH0;
  }

  callFunctionSubsystem_M->Timing.taskTime0 =
    callFunctionSubsystem_M->Timing.clockTick0 *
    callFunctionSubsystem_M->Timing.stepSize0 +
    callFunctionSubsystem_M->Timing.clockTickH0 *
    callFunctionSubsystem_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void callFunctionSubsystem_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)callFunctionSubsystem_M, 0,
                sizeof(RT_MODEL_callFunctionSubsyste_T));
  rtmSetTFinal(callFunctionSubsystem_M, -1);
  callFunctionSubsystem_M->Timing.stepSize0 = 0.2;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    callFunctionSubsystem_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(callFunctionSubsystem_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(callFunctionSubsystem_M->rtwLogInfo, (NULL));
    rtliSetLogT(callFunctionSubsystem_M->rtwLogInfo, "tout");
    rtliSetLogX(callFunctionSubsystem_M->rtwLogInfo, "");
    rtliSetLogXFinal(callFunctionSubsystem_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(callFunctionSubsystem_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(callFunctionSubsystem_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(callFunctionSubsystem_M->rtwLogInfo, 0);
    rtliSetLogDecimation(callFunctionSubsystem_M->rtwLogInfo, 1);
    rtliSetLogY(callFunctionSubsystem_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(callFunctionSubsystem_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(callFunctionSubsystem_M->rtwLogInfo, (NULL));
  }

  /* states (dwork) */
  (void) memset((void *)&callFunctionSubsystem_DW, 0,
                sizeof(DW_callFunctionSubsystem_T));

  /* external outputs */
  callFunctionSubsystem_Y.Out1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(callFunctionSubsystem_M->rtwLogInfo, 0.0,
    rtmGetTFinal(callFunctionSubsystem_M),
    callFunctionSubsystem_M->Timing.stepSize0, (&rtmGetErrorStatus
    (callFunctionSubsystem_M)));
  callFunctionSubsystem_DW.temporalCounter_i1 = 0U;
  callFunctionSubsystem_DW.is_active_c3_callFunctionSubsys = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* InitializeConditions for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<S2>/ledState'
   */
  callFunctionSubsystem_Y.Out1 = 0.0;
}

/* Model terminate function */
void callFunctionSubsystem_terminate(void)
{
  /* (no terminate code required) */
}
