//
// File: nc_pendulum_controller.cpp
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
#include "nc_pendulum_controller.h"
#include "nc_pendulum_controller_private.h"
#define nc_pendulum_con_MessageQueueLen (1)

const SL_Bus_nc_pendulum_controller_std_msgs_Float64
  nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64 = {
  0.0                                  // Data
} ;                                    // SL_Bus_nc_pendulum_controller_std_msgs_Float64 ground 

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T tmp;
  int32_T tmp_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u1 > 0.0) {
      tmp = 1;
    } else {
      tmp = -1;
    }

    if (u0 > 0.0) {
      tmp_0 = 1;
    } else {
      tmp_0 = -1;
    }

    y = atan2((real_T)tmp_0, (real_T)tmp);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

void nc_pendulum_controller_cModelClass::SystemProp_matlabCodegenSetA_oe
  (robotics_slros_internal_blo_o_T *obj, boolean_T value)
{
  // Start for MATLABSystem: '<S9>/SourceBlock'
  obj->matlabCodegenIsDeleted = value;
}

void nc_pendulum_controller_cModelClass::matlabCodegenHandle_matlabCo_oe
  (robotics_slros_internal_blo_o_T *obj)
{
  // Start for MATLABSystem: '<S9>/SourceBlock'
  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetA_oe(obj, true);
  }

  // End of Start for MATLABSystem: '<S9>/SourceBlock'
}

void nc_pendulum_controller_cModelClass::SystemProp_matlabCodegenSetAnyP
  (robotics_slros_internal_block_T *obj, boolean_T value)
{
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   MATLABSystem: '<S8>/SinkBlock'

  obj->matlabCodegenIsDeleted = value;
}

void nc_pendulum_controller_cModelClass::matlabCodegenHandle_matlabCodeg
  (robotics_slros_internal_block_T *obj)
{
  // Start for MATLABSystem: '<S7>/SinkBlock' incorporates:
  //   MATLABSystem: '<S8>/SinkBlock'

  if (!obj->matlabCodegenIsDeleted) {
    SystemProp_matlabCodegenSetAnyP(obj, true);
  }

  // End of Start for MATLABSystem: '<S7>/SinkBlock'
}

// Model step function
void nc_pendulum_controller_cModelClass::step()
{
  uint32_T b_varargout_2_Name_SL_Info_Curr;
  uint32_T b_varargout_2_Name_SL_Info_Rece;
  uint32_T b_varargout_2_Pose_SL_Info_Curr;
  uint32_T b_varargout_2_Pose_SL_Info_Rece;
  uint32_T b_varargout_2_Twist_SL_Info_Cur;
  uint32_T b_varargout_2_Twist_SL_Info_Rec;
  boolean_T b_varargout_1;
  int32_T i;
  SL_Bus_nc_pendulum_controller_std_msgs_String *b_varargout_2_Name;
  SL_Bus_nc_pendulum_controller_geometry_msgs_Pose *b_varargout_2_Pose;
  SL_Bus_nc_pendulum_controller_geometry_msgs_Twist *b_varargout_2_Twist;

  // Outputs for Atomic SubSystem: '<Root>/Subscribe'
  // Start for MATLABSystem: '<S9>/SourceBlock'
  b_varargout_1 = Sub_nc_pendulum_controller_12.getLatestMessage
    (&nc_pendulum_controller_B.b_varargout_2);
  b_varargout_2_Name_SL_Info_Curr =
    nc_pendulum_controller_B.b_varargout_2.Name_SL_Info.CurrentLength;
  b_varargout_2_Name_SL_Info_Rece =
    nc_pendulum_controller_B.b_varargout_2.Name_SL_Info.ReceivedLength;
  b_varargout_2_Pose_SL_Info_Curr =
    nc_pendulum_controller_B.b_varargout_2.Pose_SL_Info.CurrentLength;
  b_varargout_2_Pose_SL_Info_Rece =
    nc_pendulum_controller_B.b_varargout_2.Pose_SL_Info.ReceivedLength;
  b_varargout_2_Twist_SL_Info_Cur =
    nc_pendulum_controller_B.b_varargout_2.Twist_SL_Info.CurrentLength;
  b_varargout_2_Twist_SL_Info_Rec =
    nc_pendulum_controller_B.b_varargout_2.Twist_SL_Info.ReceivedLength;

  // MATLABSystem: '<S9>/SourceBlock'
  nc_pendulum_controller_B.SourceBlock_o1 = b_varargout_1;
  nc_pendulum_controller_B.SourceBlock_o2.Name_SL_Info.CurrentLength =
    b_varargout_2_Name_SL_Info_Curr;
  nc_pendulum_controller_B.SourceBlock_o2.Name_SL_Info.ReceivedLength =
    b_varargout_2_Name_SL_Info_Rece;
  nc_pendulum_controller_B.SourceBlock_o2.Pose_SL_Info.CurrentLength =
    b_varargout_2_Pose_SL_Info_Curr;
  nc_pendulum_controller_B.SourceBlock_o2.Pose_SL_Info.ReceivedLength =
    b_varargout_2_Pose_SL_Info_Rece;
  for (i = 0; i < 16; i++) {
    // Start for MATLABSystem: '<S9>/SourceBlock'
    b_varargout_2_Name = &nc_pendulum_controller_B.b_varargout_2.Name[i];
    b_varargout_2_Pose = &nc_pendulum_controller_B.b_varargout_2.Pose[i];
    b_varargout_2_Twist = &nc_pendulum_controller_B.b_varargout_2.Twist[i];

    // MATLABSystem: '<S9>/SourceBlock'
    nc_pendulum_controller_B.SourceBlock_o2.Name[i] = *b_varargout_2_Name;
    nc_pendulum_controller_B.SourceBlock_o2.Pose[i] = *b_varargout_2_Pose;
    nc_pendulum_controller_B.SourceBlock_o2.Twist[i] = *b_varargout_2_Twist;
  }

  // MATLABSystem: '<S9>/SourceBlock'
  nc_pendulum_controller_B.SourceBlock_o2.Twist_SL_Info.CurrentLength =
    b_varargout_2_Twist_SL_Info_Cur;
  nc_pendulum_controller_B.SourceBlock_o2.Twist_SL_Info.ReceivedLength =
    b_varargout_2_Twist_SL_Info_Rec;

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  if (nc_pendulum_controller_B.SourceBlock_o1) {
    // Inport: '<S10>/In1'
    nc_pendulum_controller_B.In1 = nc_pendulum_controller_B.SourceBlock_o2;
  }

  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/Subscribe'

  // MATLAB Function: '<Root>/MATLAB Function'
  nc_pendulum_controller_B.VectorConcatenate[0] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.W;
  nc_pendulum_controller_B.VectorConcatenate[1] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.X;
  nc_pendulum_controller_B.VectorConcatenate[2] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.Y;
  nc_pendulum_controller_B.VectorConcatenate[3] =
    nc_pendulum_controller_B.In1.Pose[1].Orientation.Z;

  // RelationalOperator: '<S3>/Compare'
  nc_pendulum_controller_B.Compare = nc_pendulum_controller_B.SourceBlock_o1;

  // Outputs for Enabled SubSystem: '<Root>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S4>/Enable'

  if (nc_pendulum_controller_B.Compare) {
    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[0];

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[0] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[0] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[1];

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.y;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[1] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[1] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[2];

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[2] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[2] = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.VectorConcatenate[3];

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.aSinInput *
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.b_z1[3] = nc_pendulum_controller_B.y;

    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.in[3] = nc_pendulum_controller_B.qw;

    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.b_z1[0];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[1];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[2];
    nc_pendulum_controller_B.y += nc_pendulum_controller_B.b_z1[3];
    nc_pendulum_controller_B.y = sqrt(nc_pendulum_controller_B.y);
    nc_pendulum_controller_B.aSinInput = 1.0 / nc_pendulum_controller_B.y;
    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.in[0];
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.in[1];
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.in[2];
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.in[3];
    for (i = 0; i < 4; i++) {
      nc_pendulum_controller_B.b_z1[0] = nc_pendulum_controller_B.qw;
      nc_pendulum_controller_B.b_z1[1] = nc_pendulum_controller_B.y;
      nc_pendulum_controller_B.b_z1[2] = nc_pendulum_controller_B.qx;
      nc_pendulum_controller_B.b_z1[3] = nc_pendulum_controller_B.qy;
      nc_pendulum_controller_B.in[i] = nc_pendulum_controller_B.b_z1[i] *
        nc_pendulum_controller_B.aSinInput;
    }

    nc_pendulum_controller_B.qw = nc_pendulum_controller_B.in[0];
    nc_pendulum_controller_B.qx = nc_pendulum_controller_B.in[1];
    nc_pendulum_controller_B.qy = nc_pendulum_controller_B.in[2];
    nc_pendulum_controller_B.qz = nc_pendulum_controller_B.in[3];
    nc_pendulum_controller_B.aSinInput = (nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qz - nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qy) * -2.0;
    nc_pendulum_controller_B.b = nc_pendulum_controller_B.aSinInput;
    if (nc_pendulum_controller_B.aSinInput > 1.0) {
      nc_pendulum_controller_B.b = 1.0;
    }

    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.b;
    nc_pendulum_controller_B.c = nc_pendulum_controller_B.aSinInput;
    if (nc_pendulum_controller_B.aSinInput < -1.0) {
      nc_pendulum_controller_B.c = -1.0;
    }

    nc_pendulum_controller_B.aSinInput = nc_pendulum_controller_B.c;
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y_c = nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y_k = nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y_cx = nc_pendulum_controller_B.qz *
      nc_pendulum_controller_B.qz;
    nc_pendulum_controller_B.y_b = (nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qy + nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qz) * 2.0;
    nc_pendulum_controller_B.y = ((nc_pendulum_controller_B.y +
      nc_pendulum_controller_B.y_c) - nc_pendulum_controller_B.y_k) -
      nc_pendulum_controller_B.y_cx;
    nc_pendulum_controller_B.out_idx_0 = rt_atan2d_snf
      (nc_pendulum_controller_B.y_b, nc_pendulum_controller_B.y);
    nc_pendulum_controller_B.aSinInput = asin(nc_pendulum_controller_B.aSinInput);
    nc_pendulum_controller_B.y = nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qw;
    nc_pendulum_controller_B.y_c = nc_pendulum_controller_B.qx *
      nc_pendulum_controller_B.qx;
    nc_pendulum_controller_B.y_k = nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qy;
    nc_pendulum_controller_B.y_cx = nc_pendulum_controller_B.qz *
      nc_pendulum_controller_B.qz;
    nc_pendulum_controller_B.y_b = (nc_pendulum_controller_B.qy *
      nc_pendulum_controller_B.qz + nc_pendulum_controller_B.qw *
      nc_pendulum_controller_B.qx) * 2.0;
    nc_pendulum_controller_B.y = ((nc_pendulum_controller_B.y -
      nc_pendulum_controller_B.y_c) - nc_pendulum_controller_B.y_k) +
      nc_pendulum_controller_B.y_cx;
    nc_pendulum_controller_B.qw = rt_atan2d_snf(nc_pendulum_controller_B.y_b,
      nc_pendulum_controller_B.y);

    // MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    nc_pendulum_controller_B.CoordinateTransformationConvers[0] =
      nc_pendulum_controller_B.out_idx_0;
    nc_pendulum_controller_B.CoordinateTransformationConvers[1] =
      nc_pendulum_controller_B.aSinInput;
    nc_pendulum_controller_B.CoordinateTransformationConvers[2] =
      nc_pendulum_controller_B.qw;
  }

  // End of Outputs for SubSystem: '<Root>/Enabled Subsystem'

  // Trigonometry: '<Root>/Cos'
  nc_pendulum_controller_B.Cos = sin
    (nc_pendulum_controller_B.CoordinateTransformationConvers[1]);

  // Gain: '<S6>/Proportional Gain'
  nc_pendulum_controller_B.ProportionalGain = 690.282636783837 *
    nc_pendulum_controller_B.CoordinateTransformationConvers[1];

  // Gain: '<S6>/Derivative Gain'
  nc_pendulum_controller_B.DerivativeGain = 130.113707941987 *
    nc_pendulum_controller_B.CoordinateTransformationConvers[1];

  // DiscreteIntegrator: '<S6>/Filter'
  nc_pendulum_controller_B.Filter = nc_pendulum_controller_DW.Filter_DSTATE;

  // Sum: '<S6>/SumD'
  nc_pendulum_controller_B.SumD = nc_pendulum_controller_B.DerivativeGain -
    nc_pendulum_controller_B.Filter;

  // Gain: '<S6>/Filter Coefficient'
  nc_pendulum_controller_B.FilterCoefficient = 182.319016505685 *
    nc_pendulum_controller_B.SumD;

  // Sum: '<S6>/Sum'
  nc_pendulum_controller_B.Sum = nc_pendulum_controller_B.ProportionalGain +
    nc_pendulum_controller_B.FilterCoefficient;

  // Product: '<Root>/Multiply'
  nc_pendulum_controller_B.Multiply = nc_pendulum_controller_B.Cos *
    nc_pendulum_controller_B.Sum;

  // Gain: '<Root>/Gain'
  nc_pendulum_controller_B.Gain = 0.5 * nc_pendulum_controller_B.Multiply;

  // BusAssignment: '<Root>/Bus Assignment1' incorporates:
  //   Constant: '<S1>/Constant'

  nc_pendulum_controller_B.BusAssignment1 =
    nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;
  nc_pendulum_controller_B.BusAssignment1.Data = nc_pendulum_controller_B.Gain;

  // Outputs for Atomic SubSystem: '<Root>/Publish'
  // MATLABSystem: '<S7>/SinkBlock'
  nc_pendulum_controller_B.aSinInput =
    nc_pendulum_controller_B.BusAssignment1.Data;

  // Start for MATLABSystem: '<S7>/SinkBlock'
  nc_pendulum_controller_B.busstruct.Data = nc_pendulum_controller_B.aSinInput;
  Pub_nc_pendulum_controller_6.publish(&nc_pendulum_controller_B.busstruct);

  // End of Outputs for SubSystem: '<Root>/Publish'

  // Gain: '<Root>/Gain1'
  nc_pendulum_controller_B.Gain1 = 0.5 * nc_pendulum_controller_B.Multiply;

  // BusAssignment: '<Root>/Bus Assignment2' incorporates:
  //   Constant: '<S2>/Constant'

  nc_pendulum_controller_B.BusAssignment2 =
    nc_pendulum_controller_rtZSL_Bus_nc_pendulum_controller_std_msgs_Float64;
  nc_pendulum_controller_B.BusAssignment2.Data = nc_pendulum_controller_B.Gain1;

  // Outputs for Atomic SubSystem: '<Root>/Publish1'
  // MATLABSystem: '<S8>/SinkBlock'
  nc_pendulum_controller_B.aSinInput =
    nc_pendulum_controller_B.BusAssignment2.Data;

  // Start for MATLABSystem: '<S8>/SinkBlock'
  nc_pendulum_controller_B.busstruct_p.Data = nc_pendulum_controller_B.aSinInput;
  Pub_nc_pendulum_controller_18.publish(&nc_pendulum_controller_B.busstruct_p);

  // End of Outputs for SubSystem: '<Root>/Publish1'

  // Update for DiscreteIntegrator: '<S6>/Filter'
  nc_pendulum_controller_DW.Filter_DSTATE += 0.01 *
    nc_pendulum_controller_B.FilterCoefficient;
}

// Model initialize function
void nc_pendulum_controller_cModelClass::initialize()
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  // initialize error status
  rtmSetErrorStatus(getRTM(), (NULL));

  // block I/O
  (void) memset(((void *) &nc_pendulum_controller_B), 0,
                sizeof(B_nc_pendulum_controller_T));

  // states (dwork)
  (void) memset((void *)&nc_pendulum_controller_DW, 0,
                sizeof(DW_nc_pendulum_controller_T));

  // external outputs
  nc_pendulum_controller_Y.Out1 = 0.0;

  {
    robotics_slros_internal_blo_o_T *b_obj;
    char_T zeroDelimTopic[20];
    robotics_slcore_internal_bloc_T *b_obj_0;
    robotics_slros_internal_block_T *b_obj_1;
    static const char_T tmp[19] = { '/', 'g', 'a', 'z', 'e', 'b', 'o', '/', 'l',
      'i', 'n', 'k', '_', 's', 't', 'a', 't', 'e', 's' };

    static const char_T tmp_0[26] = { '/', 't', 'e', 'e', 't', 'e', 'r', 'b',
      'o', 't', '/', 'l', 'e', 'f', 't', '_', 't', 'o', 'r', 'q', 'u', 'e', '_',
      'c', 'm', 'd' };

    static const char_T tmp_1[27] = { '/', 't', 'e', 'e', 't', 'e', 'r', 'b',
      'o', 't', '/', 'r', 'i', 'g', 'h', 't', '_', 't', 'o', 'r', 'q', 'u', 'e',
      '_', 'c', 'm', 'd' };

    int32_T i;

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    nc_pendulum_controller_DW.obj_em.matlabCodegenIsDeleted = true;
    b_obj = &nc_pendulum_controller_DW.obj_em;
    b_obj->isInitialized = 0;
    b_obj->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty = true;
    b_obj = &nc_pendulum_controller_DW.obj_em;
    b_obj->isSetupComplete = false;
    b_obj->isInitialized = 1;
    for (i = 0; i < 19; i++) {
      zeroDelimTopic[i] = tmp[i];
    }

    zeroDelimTopic[19] = '\x00';
    Sub_nc_pendulum_controller_12.createSubscriber(zeroDelimTopic,
      nc_pendulum_con_MessageQueueLen);
    b_obj->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for Enabled SubSystem: '<Root>/Enabled Subsystem'
    // Start for MATLABSystem: '<S4>/Coordinate Transformation Conversion'
    b_obj_0 = &nc_pendulum_controller_DW.obj_h;
    b_obj_0->isInitialized = 0;
    nc_pendulum_controller_DW.objisempty_f = true;
    b_obj_0 = &nc_pendulum_controller_DW.obj_h;
    b_obj_0->isInitialized = 1;

    // End of Start for SubSystem: '<Root>/Enabled Subsystem'

    // Start for Atomic SubSystem: '<Root>/Publish'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    nc_pendulum_controller_DW.obj_e.matlabCodegenIsDeleted = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_e;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty_a = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj_e;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 26; i++) {
      nc_pendulum_controller_B.zeroDelimTopic_m[i] = tmp_0[i];
    }

    nc_pendulum_controller_B.zeroDelimTopic_m[26] = '\x00';
    Pub_nc_pendulum_controller_6.createPublisher
      (nc_pendulum_controller_B.zeroDelimTopic_m,
       nc_pendulum_con_MessageQueueLen);
    b_obj_1->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish'

    // Start for Atomic SubSystem: '<Root>/Publish1'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    nc_pendulum_controller_DW.obj.matlabCodegenIsDeleted = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj;
    b_obj_1->isInitialized = 0;
    b_obj_1->matlabCodegenIsDeleted = false;
    nc_pendulum_controller_DW.objisempty_d = true;
    b_obj_1 = &nc_pendulum_controller_DW.obj;
    b_obj_1->isSetupComplete = false;
    b_obj_1->isInitialized = 1;
    for (i = 0; i < 27; i++) {
      nc_pendulum_controller_B.zeroDelimTopic[i] = tmp_1[i];
    }

    nc_pendulum_controller_B.zeroDelimTopic[27] = '\x00';
    Pub_nc_pendulum_controller_18.createPublisher
      (nc_pendulum_controller_B.zeroDelimTopic, nc_pendulum_con_MessageQueueLen);
    b_obj_1->isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<Root>/Publish1'

    // ConstCode for Outport: '<Root>/Out1'
    nc_pendulum_controller_Y.Out1 = 0.0;
  }
}

// Model terminate function
void nc_pendulum_controller_cModelClass::terminate()
{
  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matlabCo_oe(&nc_pendulum_controller_DW.obj_em);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Publish'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj_e);

  // End of Terminate for SubSystem: '<Root>/Publish'

  // Terminate for Atomic SubSystem: '<Root>/Publish1'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&nc_pendulum_controller_DW.obj);

  // End of Terminate for SubSystem: '<Root>/Publish1'
}

// Constructor
nc_pendulum_controller_cModelClass::nc_pendulum_controller_cModelClass()
{
}

// Destructor
nc_pendulum_controller_cModelClass::~nc_pendulum_controller_cModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL_nc_pendulum_controll_T * nc_pendulum_controller_cModelClass::getRTM()
{
  return (&nc_pendulum_controller_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
