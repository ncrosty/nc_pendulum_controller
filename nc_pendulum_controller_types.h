//
// File: nc_pendulum_controller_types.h
//
// Code generated for Simulink model 'nc_pendulum_controller'.
//
// Model version                  : 1.65
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Thu Apr 12 08:08:32 2018
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_nc_pendulum_controller_types_h_
#define RTW_HEADER_nc_pendulum_controller_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_nc_pendulum_controller_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_std_msgs_String_

// MsgType=std_msgs/String
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn 
  uint8_T Data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_nc_pendulum_controller_std_msgs_String;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Point_

// MsgType=geometry_msgs/Point
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_nc_pendulum_controller_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion_

// MsgType=geometry_msgs/Quaternion
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Pose_

// MsgType=geometry_msgs/Pose
typedef struct {
  // MsgType=geometry_msgs/Point
  SL_Bus_nc_pendulum_controller_geometry_msgs_Point Position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_nc_pendulum_controller_geometry_msgs_Quaternion Orientation;
} SL_Bus_nc_pendulum_controller_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3_

// MsgType=geometry_msgs/Vector3
typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_geometry_msgs_Twist_

// MsgType=geometry_msgs/Twist
typedef struct {
  // MsgType=geometry_msgs/Vector3
  SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3 Linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_nc_pendulum_controller_geometry_msgs_Vector3 Angular;
} SL_Bus_nc_pendulum_controller_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates_

// MsgType=gazebo_msgs/ModelStates
typedef struct {
  // MsgType=std_msgs/String:PrimitiveROSType=string[]:IsVarLen=1:VarLenCategory=data:VarLenElem=Name_SL_Info:TruncateAction=warn 
  SL_Bus_nc_pendulum_controller_std_msgs_String Name[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Name
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;

  // MsgType=geometry_msgs/Pose:IsVarLen=1:VarLenCategory=data:VarLenElem=Pose_SL_Info:TruncateAction=warn 
  SL_Bus_nc_pendulum_controller_geometry_msgs_Pose Pose[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Pose
  SL_Bus_ROSVariableLengthArrayInfo Pose_SL_Info;

  // MsgType=geometry_msgs/Twist:IsVarLen=1:VarLenCategory=data:VarLenElem=Twist_SL_Info:TruncateAction=warn 
  SL_Bus_nc_pendulum_controller_geometry_msgs_Twist Twist[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Twist
  SL_Bus_ROSVariableLengthArrayInfo Twist_SL_Info;
} SL_Bus_nc_pendulum_controller_gazebo_msgs_ModelStates;

#endif

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct {
  int32_T isInitialized;
} robotics_slcore_internal_bloc_T;

#endif                                 //typedef_robotics_slcore_internal_bloc_T

#ifndef typedef_robotics_slros_internal_block_T
#define typedef_robotics_slros_internal_block_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_block_T;

#endif                                 //typedef_robotics_slros_internal_block_T

#ifndef typedef_robotics_slros_internal_blo_o_T
#define typedef_robotics_slros_internal_blo_o_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} robotics_slros_internal_blo_o_T;

#endif                                 //typedef_robotics_slros_internal_blo_o_T

// Forward declaration for rtModel
typedef struct tag_RTM_nc_pendulum_controlle_T RT_MODEL_nc_pendulum_controll_T;

#endif                                 // RTW_HEADER_nc_pendulum_controller_types_h_ 

//
// File trailer for generated code.
//
// [EOF]
//
