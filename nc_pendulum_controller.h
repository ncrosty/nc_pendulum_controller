//
// File: nc_pendulum_controller.h
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.28
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed Apr 11 16:40:29 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_nc_pendulum_controller_h_
#define RTW_HEADER_nc_pendulum_controller_h_
#include <math.h>
#include <stddef.h>
#include <string.h>
#ifndef nc_pendulum_controller_COMMON_INCLUDES_
# define nc_pendulum_controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slros_initialize.h"
#endif                                 // nc_pendulum_controller_COMMON_INCLUDES_ 

#include "nc_pendulum_controller_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates In1;// '<S12>/In1'
  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates SourceBlock_o2;// '<S7>/SourceBlock' 
  SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates b_varargout_2;
  char_T zeroDelimTopic[28];
  char_T zeroDelimTopic_m[27];
  real_T Product;                      // '<S11>/Product'
  real_T Product1;                     // '<S11>/Product1'
  real_T Product2;                     // '<S11>/Product2'
  real_T Product3;                     // '<S11>/Product3'
  real_T Sum;                          // '<S11>/Sum'
  real_T sqrt_h;                       // '<S10>/sqrt'
  real_T Product_b;                    // '<S9>/Product'
  real_T Product1_l;                   // '<S9>/Product1'
  real_T Product2_b;                   // '<S9>/Product2'
  real_T Product3_k;                   // '<S9>/Product3'
  real_T fcn1;                         // '<S6>/fcn1'
  real_T fcn2;                         // '<S6>/fcn2'
  real_T fcn3;                         // '<S6>/fcn3'
  real_T fcn4;                         // '<S6>/fcn4'
  real_T fcn5;                         // '<S6>/fcn5'
  real_T VectorConcatenate[3];         // '<S8>/Vector Concatenate'
  real_T ProportionalGain;             // '<S3>/Proportional Gain'
  real_T Integrator;                   // '<S3>/Integrator'
  real_T DerivativeGain;               // '<S3>/Derivative Gain'
  real_T Filter;                       // '<S3>/Filter'
  real_T SumD;                         // '<S3>/SumD'
  real_T FilterCoefficient;            // '<S3>/Filter Coefficient'
  real_T Sum_f;                        // '<S3>/Sum'
  real_T Gain;                         // '<Root>/Gain'
  real_T IntegralGain;                 // '<S3>/Integral Gain'
  real_T u0;
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 BusAssignment1;// '<Root>/Bus Assignment1' 
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 BusAssignment2;// '<Root>/Bus Assignment2' 
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 busstruct;
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 busstruct_c;
  boolean_T SourceBlock_o1;            // '<S7>/SourceBlock'
} B_nc_pendulum_controller_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S5>/SinkBlock'
  robotics_slros_internal_block_T obj_e;// '<S4>/SinkBlock'
  robotics_slros_internal_blo_o_T obj_em;// '<S7>/SourceBlock'
  real_T Integrator_DSTATE;            // '<S3>/Integrator'
  real_T Filter_DSTATE;                // '<S3>/Filter'
  boolean_T objisempty;                // '<S7>/SourceBlock'
  boolean_T objisempty_d;              // '<S5>/SinkBlock'
  boolean_T objisempty_a;              // '<S4>/SinkBlock'
} DW_nc_pendulum_controller_T;

// Real-time Model Data Structure
struct tag_RTM_nc_pendulum_controlle_T {
  const char_T *errorStatus;
};

// External data declarations for dependent source files
extern const SL_Bus_nc_pendulum_controller_std_msgs_Float64
  nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;// SL_Bus_nc_pendulum_controller_std_msgs_Float64 ground 

// Class declaration for model nc_pendulum_controller
class nc_pendulum_controller_cModelClass {
  // public data and function members
 public:
  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  nc_pendulum_controller_cModelClass();

  // Destructor
  ~nc_pendulum_controller_cModelClass();

  // Real-Time Model get method
  RT_MODEL_nc_pendulum_controll_T * getRTM();

  // private data and function members
 private:
  // Block signals
  B_nc_pendulum_controller_T nc_pendulum_controller_B;

  // Block states
  DW_nc_pendulum_controller_T nc_pendulum_controller_DW;

  // Real-Time Model
  RT_MODEL_nc_pendulum_controll_T nc_pendulum_controller_M;

  // private member function(s) for subsystem '<Root>'
  void SystemProp_matlabCodegenSetA_oe(robotics_slros_internal_blo_o_T *obj,
    boolean_T value);
  void matlabCodegenHandle_matlabCo_oe(robotics_slros_internal_blo_o_T *obj);
  void SystemProp_matlabCodegenSetAnyP(robotics_slros_internal_block_T *obj,
    boolean_T value);
  void matlabCodegenHandle_matlabCodeg(robotics_slros_internal_block_T *obj);
};

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
//  '<Root>' : 'nc_pendulum_controller'
//  '<S1>'   : 'nc_pendulum_controller/Blank Message1'
//  '<S2>'   : 'nc_pendulum_controller/Blank Message2'
//  '<S3>'   : 'nc_pendulum_controller/PID Controller'
//  '<S4>'   : 'nc_pendulum_controller/Publish'
//  '<S5>'   : 'nc_pendulum_controller/Publish1'
//  '<S6>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles'
//  '<S7>'   : 'nc_pendulum_controller/Subscribe'
//  '<S8>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles/Angle Calculation'
//  '<S9>'   : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize'
//  '<S10>'  : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus'
//  '<S11>'  : 'nc_pendulum_controller/Quaternions to Rotation Angles/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S12>'  : 'nc_pendulum_controller/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_nc_pendulum_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
