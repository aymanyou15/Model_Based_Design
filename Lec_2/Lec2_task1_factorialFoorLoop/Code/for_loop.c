/*
 * File: for_loop.c
 *
 * Code generated for Simulink model 'for_loop'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 16:47:07 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "for_loop.h"
#include "for_loop_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_for_loop_T for_loop_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_for_loop_T for_loop_Y;

/* Real-time model */
RT_MODEL_for_loop_T for_loop_M_;
RT_MODEL_for_loop_T *const for_loop_M = &for_loop_M_;

/* Model step function */
void for_loop_step(void)
{
  int32_T s1_iter;
  int32_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* Inport: '<Root>/Input' */
  for (s1_iter = 1; s1_iter <= for_loop_U.Input; s1_iter++) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    for_loop_Y.Out1 = s1_iter * UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/Out1'
     */
    UnitDelay_DSTATE = for_loop_Y.Out1;
  }

  /* End of Inport: '<Root>/Input' */
  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */
}

/* Model initialize function */
void for_loop_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(for_loop_M, (NULL));

  /* external inputs */
  for_loop_U.Input = 0;

  /* external outputs */
  for_loop_Y.Out1 = 0;
}

/* Model terminate function */
void for_loop_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
