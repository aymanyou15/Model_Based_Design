/*
 * File: Factorial_chart.c
 *
 * Code generated for Simulink model 'Factorial_chart'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 17:18:46 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Factorial_chart.h"
#include "Factorial_chart_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Factorial_chart_T Factorial_chart_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Factorial_chart_T Factorial_chart_Y;

/* Real-time model */
RT_MODEL_Factorial_chart_T Factorial_chart_M_;
RT_MODEL_Factorial_chart_T *const Factorial_chart_M = &Factorial_chart_M_;

/* Model step function */
void Factorial_chart_step(void)
{
  int32_T counter;
  real_T tmp;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  counter = Factorial_chart_U.In1;
  Factorial_chart_Y.Out1 = 1U;
  while (counter > 1) {
    /* NEW_PATTERN */
    tmp = (real_T)Factorial_chart_Y.Out1 * (real_T)counter;
    if (tmp < 4.294967296E+9) {
      Factorial_chart_Y.Out1 = (uint32_T)tmp;
    } else {
      Factorial_chart_Y.Out1 = MAX_uint32_T;
    }

    counter--;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Factorial_chart_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Factorial_chart_M, (NULL));

  /* external inputs */
  Factorial_chart_U.In1 = 0U;

  /* external outputs */
  Factorial_chart_Y.Out1 = 0U;
}

/* Model terminate function */
void Factorial_chart_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
