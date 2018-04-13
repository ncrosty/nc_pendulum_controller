#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "nc_pendulum_controller";

// For Block nc_pendulum_controller/Subscribe
SimulinkSubscriber<gazebo_msgs::LinkStates, SL_Bus_nc_pendulum_controller_gazebo_msgs_LinkStates> Sub_nc_pendulum_controller_12;

// For Block nc_pendulum_controller/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_nc_pendulum_controller_std_msgs_Float64> Pub_nc_pendulum_controller_6;

// For Block nc_pendulum_controller/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_nc_pendulum_controller_std_msgs_Float64> Pub_nc_pendulum_controller_18;

// For Block nc_pendulum_controller/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_nc_pendulum_controller_std_msgs_Float64> Pub_nc_pendulum_controller_69;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

