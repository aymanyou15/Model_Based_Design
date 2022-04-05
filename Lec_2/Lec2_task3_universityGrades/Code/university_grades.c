/*
 * File: university_grades.c
 *
 * Code generated for Simulink model 'university_grades'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Tue Apr  5 16:34:16 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "university_grades.h"
#include "university_grades_private.h"

/* External inputs (root inport signals with default storage) */
ExtU_university_grades_T university_grades_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_university_grades_T university_grades_Y;

/* Real-time model */
RT_MODEL_university_grades_T university_grades_M_;
RT_MODEL_university_grades_T *const university_grades_M = &university_grades_M_;

/* Model step function */
void university_grades_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Out1'
   *  Outport: '<Root>/Out2'
   *  Outport: '<Root>/Out3'
   *  Outport: '<Root>/Out4'
   *  Outport: '<Root>/Out5'
   *  StringConstant: '<S1>/String Constant'
   *  StringConstant: '<S2>/String Constant'
   *  StringConstant: '<S3>/String Constant'
   *  StringConstant: '<S4>/String Constant'
   *  StringConstant: '<S5>/String Constant'
   */
  if ((100.0 > university_grades_U.Input) && (university_grades_U.Input >= 85.0))
  {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    strncpy(&university_grades_Y.Out1[0],
            university_grades_ConstP.StringConstant_String, 255U);
    university_grades_Y.Out1[255] = '\x00';

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if ((85.0 > university_grades_U.Input) && (university_grades_U.Input >=
              75.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    strncpy(&university_grades_Y.Out2[0],
            university_grades_ConstP.StringConstant_String_o, 255U);
    university_grades_Y.Out2[255] = '\x00';

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else if ((75.0 > university_grades_U.Input) && (university_grades_U.Input >=
              65.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    strncpy(&university_grades_Y.Out3[0],
            university_grades_ConstP.StringConstant_String_n, 255U);
    university_grades_Y.Out3[255] = '\x00';

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if ((65.0 > university_grades_U.Input) && (university_grades_U.Input >=
              50.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    strncpy(&university_grades_Y.Out4[0],
            university_grades_ConstP.StringConstant_String_a, 255U);
    university_grades_Y.Out4[255] = '\x00';

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  } else {
    if (university_grades_U.Input < 50.0) {
      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S2>/Action Port'
       */
      strncpy(&university_grades_Y.Out5[0],
              university_grades_ConstP.StringConstant_String_i, 255U);
      university_grades_Y.Out5[255] = '\x00';

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    }
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void university_grades_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(university_grades_M, (NULL));

  /* external inputs */
  university_grades_U.Input = 0.0;

  /* external outputs */
  (void) memset((void *)&university_grades_Y, 0,
                sizeof(ExtY_university_grades_T));
}

/* Model terminate function */
void university_grades_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
