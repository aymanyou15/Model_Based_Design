/*
 * File: university_grades.h
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

#ifndef RTW_HEADER_university_grades_h_
#define RTW_HEADER_university_grades_h_
#include <string.h>
#include <stddef.h>
#ifndef university_grades_COMMON_INCLUDES_
# define university_grades_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* university_grades_COMMON_INCLUDES_ */

#include "university_grades_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: StringConstant_String
   * Referenced by: '<S1>/String Constant'
   */
  char_T StringConstant_String[256];

  /* Computed Parameter: StringConstant_String_o
   * Referenced by: '<S4>/String Constant'
   */
  char_T StringConstant_String_o[256];

  /* Computed Parameter: StringConstant_String_n
   * Referenced by: '<S3>/String Constant'
   */
  char_T StringConstant_String_n[256];

  /* Computed Parameter: StringConstant_String_a
   * Referenced by: '<S5>/String Constant'
   */
  char_T StringConstant_String_a[256];

  /* Computed Parameter: StringConstant_String_i
   * Referenced by: '<S2>/String Constant'
   */
  char_T StringConstant_String_i[256];
} ConstP_university_grades_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_university_grades_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  char_T Out1[256];                    /* '<Root>/Out1' */
  char_T Out2[256];                    /* '<Root>/Out2' */
  char_T Out3[256];                    /* '<Root>/Out3' */
  char_T Out4[256];                    /* '<Root>/Out4' */
  char_T Out5[256];                    /* '<Root>/Out5' */
} ExtY_university_grades_T;

/* Real-time Model Data Structure */
struct tag_RTM_university_grades_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with default storage) */
extern ExtU_university_grades_T university_grades_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_university_grades_T university_grades_Y;

/* Constant parameters (default storage) */
extern const ConstP_university_grades_T university_grades_ConstP;

/* Model entry point functions */
extern void university_grades_initialize(void);
extern void university_grades_step(void);
extern void university_grades_terminate(void);

/* Real-time Model object */
extern RT_MODEL_university_grades_T *const university_grades_M;

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
 * '<Root>' : 'university_grades'
 * '<S1>'   : 'university_grades/If Action Subsystem'
 * '<S2>'   : 'university_grades/If Action Subsystem1'
 * '<S3>'   : 'university_grades/If Action Subsystem2'
 * '<S4>'   : 'university_grades/If Action Subsystem3'
 * '<S5>'   : 'university_grades/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_university_grades_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
