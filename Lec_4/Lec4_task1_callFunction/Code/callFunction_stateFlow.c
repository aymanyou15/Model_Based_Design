/*
 * File: callFunction_stateFlow.c
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

#include "callFunction_stateFlow.h"
#include "callFunction_stateFlow_private.h"

/* Block states (default storage) */
DW_callFunction_stateFlow_T callFunction_stateFlow_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_callFunction_stateFlow_T callFunction_stateFlow_Y;

/* Real-time model */
RT_MODEL_callFunction_stateFl_T callFunction_stateFlow_M_;
RT_MODEL_callFunction_stateFl_T *const callFunction_stateFlow_M =
  &callFunction_stateFlow_M_;

/* Model step function */
void callFunction_stateFlow_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (callFunction_stateFlow_DW.temporalCounter_i1 < 3U) {
    callFunction_stateFlow_DW.temporalCounter_i1++;
  }

  if (callFunction_stateFlow_DW.is_active_c3_callFunction_state == 0U) {
    callFunction_stateFlow_DW.is_active_c3_callFunction_state = 1U;
    callFunction_stateFlow_DW.temporalCounter_i1 = 0U;
  } else {
    if (callFunction_stateFlow_DW.temporalCounter_i1 >= 1U) {
      /* Outputs for Function Call SubSystem: '<Root>/Function-Call Subsystem' */
      /* Outport: '<Root>/Out1' incorporates:
       *  Constant: '<Root>/Constant'
       *  Inport: '<S2>/In1'
       */
      callFunction_stateFlow_Y.Out1 = 0.0;

      /* End of Outputs for SubSystem: '<Root>/Function-Call Subsystem' */
      callFunction_stateFlow_DW.temporalCounter_i1 = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void callFunction_stateFlow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(callFunction_stateFlow_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&callFunction_stateFlow_DW, 0,
                sizeof(DW_callFunction_stateFlow_T));

  /* external outputs */
  callFunction_stateFlow_Y.Out1 = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  callFunction_stateFlow_DW.temporalCounter_i1 = 0U;
  callFunction_stateFlow_DW.is_active_c3_callFunction_state = 0U;
}

/* Model terminate function */
void callFunction_stateFlow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
