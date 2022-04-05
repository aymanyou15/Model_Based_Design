/*
 * File: traffic_Light.c
 *
 * Code generated for Simulink model 'traffic_Light'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 18:17:31 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "traffic_Light.h"
#include "traffic_Light_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define traffic_Ligh_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define traffic_Light_IN_go            ((uint8_T)1U)
#define traffic_Light_IN_ready         ((uint8_T)2U)
#define traffic_Light_IN_stop          ((uint8_T)3U)

/* Block states (default storage) */
DW_traffic_Light_T traffic_Light_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_traffic_Light_T traffic_Light_Y;

/* Real-time model */
RT_MODEL_traffic_Light_T traffic_Light_M_;
RT_MODEL_traffic_Light_T *const traffic_Light_M = &traffic_Light_M_;

/* Model step function */
void traffic_Light_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (traffic_Light_DW.temporalCounter_i1 < 31U) {
    traffic_Light_DW.temporalCounter_i1++;
  }

  if (traffic_Light_DW.is_active_c3_traffic_Light == 0U) {
    traffic_Light_DW.is_active_c3_traffic_Light = 1U;
    traffic_Light_DW.is_c3_traffic_Light = traffic_Light_IN_ready;
    traffic_Light_DW.temporalCounter_i1 = 0U;
  } else {
    switch (traffic_Light_DW.is_c3_traffic_Light) {
     case traffic_Light_IN_go:
      if (traffic_Light_DW.temporalCounter_i1 >= 15U) {
        traffic_Light_DW.is_c3_traffic_Light = traffic_Light_IN_ready;
        traffic_Light_DW.temporalCounter_i1 = 0U;
      }
      break;

     case traffic_Light_IN_ready:
      if (traffic_Light_DW.temporalCounter_i1 >= 15U) {
        traffic_Light_DW.is_c3_traffic_Light = traffic_Light_IN_stop;
        traffic_Light_DW.temporalCounter_i1 = 0U;
      }
      break;

     default:
      if (traffic_Light_DW.temporalCounter_i1 >= 15U) {
        traffic_Light_DW.is_c3_traffic_Light = traffic_Light_IN_go;
        traffic_Light_DW.temporalCounter_i1 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void traffic_Light_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(traffic_Light_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&traffic_Light_DW, 0,
                sizeof(DW_traffic_Light_T));

  /* external outputs */
  (void) memset((void *)&traffic_Light_Y, 0,
                sizeof(ExtY_traffic_Light_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  traffic_Light_DW.temporalCounter_i1 = 0U;
  traffic_Light_DW.is_active_c3_traffic_Light = 0U;
  traffic_Light_DW.is_c3_traffic_Light = traffic_Ligh_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  traffic_Light_Y.Out1 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out2' incorporates:
   *  Chart: '<Root>/Chart'
   */
  traffic_Light_Y.Out2 = 0U;

  /* SystemInitialize for Outport: '<Root>/Out3' incorporates:
   *  Chart: '<Root>/Chart'
   */
  traffic_Light_Y.Out3 = 0U;
}

/* Model terminate function */
void traffic_Light_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
