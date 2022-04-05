/*
 * File: Logic_Calc.c
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

#include "Logic_Calc.h"
#include "Logic_Calc_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_Logic_Calc_T Logic_Calc_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Logic_Calc_T Logic_Calc_Y;

/* Real-time model */
RT_MODEL_Logic_Calc_T Logic_Calc_M_;
RT_MODEL_Logic_Calc_T *const Logic_Calc_M = &Logic_Calc_M_;

/* Model step function */
void Logic_Calc_step(void)
{
  /* Outport: '<Root>/Output' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator'
   */
  Logic_Calc_Y.Output = (uint8_T)(Logic_Calc_U.In1 & Logic_Calc_U.In2);

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator1'
   */
  Logic_Calc_Y.Output1 = (uint8_T)(Logic_Calc_U.In1 | Logic_Calc_U.In2);

  /* S-Function (sfix_bitop): '<Root>/Bitwise Operator6' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator2'
   */
  Logic_Calc_Y.Output2 = (uint8_T)(Logic_Calc_U.In1 ^ Logic_Calc_U.In2);

  /* Outport: '<Root>/Output3' incorporates:
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator3'
   */
  Logic_Calc_Y.Output3 = (uint8_T)~Logic_Calc_Y.Output2;

  /* Outport: '<Root>/Output4' incorporates:
   *  Inport: '<Root>/In1'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator7'
   */
  Logic_Calc_Y.Output4 = (uint8_T)~Logic_Calc_U.In1;

  /* Outport: '<Root>/Output5' incorporates:
   *  Inport: '<Root>/In2'
   *  S-Function (sfix_bitop): '<Root>/Bitwise Operator4'
   */
  Logic_Calc_Y.Output5 = (uint8_T)~Logic_Calc_U.In2;
}

/* Model initialize function */
void Logic_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Logic_Calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Logic_Calc_U, 0, sizeof(ExtU_Logic_Calc_T));

  /* external outputs */
  (void) memset((void *)&Logic_Calc_Y, 0,
                sizeof(ExtY_Logic_Calc_T));
}

/* Model terminate function */
void Logic_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
