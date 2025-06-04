/*
 * File: street_light_system.c
 *
 * Code generated for Simulink model 'street_light_system'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sat May 31 11:28:33 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: AMD->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "street_light_system.h"
#include "rtwtypes.h"
#include <math.h>

/* Named constants for Chart: '<Root>/Chart' */
#define IN_Daytime                     ((uint8_T)1U)
#define IN_Nighttime                   ((uint8_T)2U)

/* Block signals and states (default storage) */
DW rtDW;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void street_light_system_step(void)
{
  real_T rtb_SineWave;

  /* Sin: '<Root>/Sine Wave' */
  if (rtDW.systemEnable != 0) {
    rtb_SineWave = ((rtM->Timing.clockTick0) * 0.1);
    rtDW.lastSin = sin(0.1 * rtb_SineWave);
    rtDW.lastCos = cos(0.1 * rtb_SineWave);
    rtDW.systemEnable = 0;
  }

  rtb_SineWave = ((rtDW.lastSin * 0.99995000041666526 + rtDW.lastCos *
                   -0.0099998333341666662) * 0.99995000041666526 + (rtDW.lastCos
    * 0.99995000041666526 - rtDW.lastSin * -0.0099998333341666662) *
                  0.0099998333341666662) * 50.0 + 50.0;

  /* End of Sin: '<Root>/Sine Wave' */

  /* Chart: '<Root>/Chart' */
  if (rtDW.is_active_c3_street_light_syste == 0) {
    rtDW.is_active_c3_street_light_syste = 1U;
    rtDW.is_c3_street_light_system = IN_Daytime;
  } else if (rtDW.is_c3_street_light_system == IN_Daytime) {
    if (rtb_SineWave <= 30.0) {
      rtDW.is_c3_street_light_system = IN_Nighttime;
    }

    /* case IN_Nighttime: */
  } else if (rtb_SineWave > 30.0) {
    rtDW.is_c3_street_light_system = IN_Daytime;
  }

  /* End of Chart: '<Root>/Chart' */

  /* Update for Sin: '<Root>/Sine Wave' */
  rtb_SineWave = rtDW.lastSin;
  rtDW.lastSin = rtDW.lastSin * 0.99995000041666526 + rtDW.lastCos *
    0.0099998333341666662;
  rtDW.lastCos = rtDW.lastCos * 0.99995000041666526 - rtb_SineWave *
    0.0099998333341666662;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  rtM->Timing.clockTick0++;
}

/* Model initialize function */
void street_light_system_initialize(void)
{
  /* Enable for Sin: '<Root>/Sine Wave' */
  rtDW.systemEnable = 1;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
