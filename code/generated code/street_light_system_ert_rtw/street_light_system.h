//
// File: street_light_system.h
//
// Code generated for Simulink model 'street_light_system'.
//
// Model version                  : 1.2
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Thu May 29 20:21:08 2025
//
// Target selection: ert.tlc
// Embedded hardware selection: AMD->x86-64 (Windows64)
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef street_light_system_h_
#define street_light_system_h_
#include <cmath>
#include "rtwtypes.h"

// Class declaration for model street_light_system
class street_light_system final
{
  // public data and function members
 public:
  // Copy Constructor
  street_light_system(street_light_system const&) = delete;

  // Assignment Operator
  street_light_system& operator= (street_light_system const&) & = delete;

  // Move Constructor
  street_light_system(street_light_system &&) = delete;

  // Move Assignment Operator
  street_light_system& operator= (street_light_system &&) = delete;

  // model initialize function
  static void initialize();

  // model step function
  static void step();

  // Constructor
  street_light_system();

  // Destructor
  ~street_light_system();
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Sine Wave' : Unused code path elimination
//  Block '<S2>/Compare' : Unused code path elimination
//  Block '<S2>/Constant' : Unused code path elimination
//  Block '<S1>/Constant1' : Unused code path elimination
//  Block '<S1>/Constant2' : Unused code path elimination
//  Block '<S1>/Switch' : Unused code path elimination


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'street_light_system'
//  '<S1>'   : 'street_light_system/Subsystem'
//  '<S2>'   : 'street_light_system/Subsystem/Compare To Constant'

#endif                                 // street_light_system_h_

//
// File trailer for generated code.
//
// [EOF]
//
