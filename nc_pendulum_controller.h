//
// File: nc_pendulum_controller.h
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.204
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Thu Apr 12 23:09:05 2018
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
  SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates In1;// '<S10>/In1'
  SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates SourceBlock_o2;// '<S9>/SourceBlock' 
  SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates b_varargout_2;
  real_T VectorConcatenate[4];         // '<Root>/Vector Concatenate'
  real_T in[4];
  real_T b_z1[4];
  char_T zeroDelimTopic[28];
  char_T zeroDelimTopic_m[27];
  real_T Cos;                          // '<Root>/Cos'
  real_T ProportionalGain;             // '<S6>/Proportional Gain'
  real_T DerivativeGain;               // '<S6>/Derivative Gain'
  real_T Filter;                       // '<S6>/Filter'
  real_T SumD;                         // '<S6>/SumD'
  real_T FilterCoefficient;            // '<S6>/Filter Coefficient'
  real_T Sum;                          // '<S6>/Sum'
  real_T Multiply;                     // '<Root>/Multiply'
  real_T Gain;                         // '<Root>/Gain'
  real_T Gain1;                        // '<Root>/Gain1'
  real_T CoordinateTransformationConvers[3];// '<S4>/Coordinate Transformation Conversion' 
  real_T qw;
  real_T qx;
  real_T qy;
  real_T qz;
  real_T aSinInput;
  real_T b;
  real_T c;
  real_T y;
  real_T y_c;
  real_T y_k;
  real_T y_cx;
  real_T y_b;
  real_T out_idx_0;
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 BusAssignment1;// '<Root>/Bus Assignment1' 
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 BusAssignment2;// '<Root>/Bus Assignment2' 
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 busstruct;
  SL_Bus_nc_pendulum_controller_std_msgs_Float64 busstruct_p;
  boolean_T Compare;                   // '<S3>/Compare'
  boolean_T SourceBlock_o1;            // '<S9>/SourceBlock'
} B_nc_pendulum_controller_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slros_internal_block_T obj; // '<S8>/SinkBlock'
  robotics_slros_internal_block_T obj_e;// '<S7>/SinkBlock'
  robotics_slros_internal_blo_o_T obj_em;// '<S9>/SourceBlock'
  real_T Filter_DSTATE;                // '<S6>/Filter'
  robotics_slcore_internal_bloc_T obj_h;// '<S4>/Coordinate Transformation Conversion' 
  boolean_T objisempty;                // '<S9>/SourceBlock'
  boolean_T objisempty_d;              // '<S8>/SinkBlock'
  boolean_T objisempty_a;              // '<S7>/SinkBlock'
  boolean_T objisempty_f;              // '<S4>/Coordinate Transformation Conversion' 
} DW_nc_pendulum_controller_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T Out1;                         // '<Root>/Out1'
} ExtY_nc_pendulum_controller_T;

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
  // External outputs
  ExtY_nc_pendulum_controller_T nc_pendulum_controller_Y;

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
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<Root>/Scope2' : Unused code path elimination


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
//  '<S3>'   : 'nc_pendulum_controller/Compare To Zero'
//  '<S4>'   : 'nc_pendulum_controller/Enabled Subsystem'
//  '<S5>'   : 'nc_pendulum_controller/MATLAB Function'
//  '<S6>'   : 'nc_pendulum_controller/PID Controller'
//  '<S7>'   : 'nc_pendulum_controller/Publish'
//  '<S8>'   : 'nc_pendulum_controller/Publish1'
//  '<S9>'   : 'nc_pendulum_controller/Subscribe'
//  '<S10>'  : 'nc_pendulum_controller/Subscribe/Enabled Subsystem'

#endif                                 // RTW_HEADER_nc_pendulum_controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
