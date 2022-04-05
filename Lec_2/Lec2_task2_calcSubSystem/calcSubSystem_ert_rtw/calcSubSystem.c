/*
 * File: calcSubSystem.c
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

#include "calcSubSystem.h"
#include "calcSubSystem_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_calcSubSystem_T calcSubSystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_calcSubSystem_T calcSubSystem_Y;

/* Real-time model */
RT_MODEL_calcSubSystem_T calcSubSystem_M_;
RT_MODEL_calcSubSystem_T *const calcSubSystem_M = &calcSubSystem_M_;

/* Model step function */
void calcSubSystem_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Add'
   */
  calcSubSystem_Y.Out1 = calcSubSystem_U.In1 + calcSubSystem_U.In2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Sum: '<S1>/Subtract'
   */
  calcSubSystem_Y.Out2 = calcSubSystem_U.In1 - calcSubSystem_U.In2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Product: '<S1>/Multiply'
   */
  calcSubSystem_Y.Out3 = calcSubSystem_U.In1 * calcSubSystem_U.In2;

  /* If: '<S1>/If' incorporates:
   *  Inport: '<Root>/In2'
   */
  if (calcSubSystem_U.In2 > 0.0) {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  Inport: '<Root>/In1'
     *  Product: '<S2>/Divide'
     */
    calcSubSystem_Y.Out4 = calcSubSystem_U.In1 / calcSubSystem_U.In2;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S1>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/division by zero' incorporates:
     *  Constant: '<S1>/Constant'
     *  Inport: '<S3>/In1'
     */
    calcSubSystem_Y.divisionbyzero = 1.0;

    /* End of Outputs for SubSystem: '<S1>/If Action Subsystem1' */
  }

  /* End of If: '<S1>/If' */
}

/* Model initialize function */
void calcSubSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(calcSubSystem_M, (NULL));

  /* external inputs */
  (void)memset((void *)&calcSubSystem_U, 0, sizeof(ExtU_calcSubSystem_T));

  /* external outputs */
  (void) memset((void *)&calcSubSystem_Y, 0,
                sizeof(ExtY_calcSubSystem_T));
}

/* Model terminate function */
void calcSubSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
