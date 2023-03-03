#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>


int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;

  rosbot.move_forward(3);

  // Get readings
  float right = rosbot.get_laser(121);
  float left = rosbot.get_laser(431);
  
  // Define and assign array values
  float array_laser[] = {left,right};
  // Print array
  ROS_INFO_STREAM("The wall is at " << array_laser[0] << " meters to the left, and at " << array_laser[1] << " meters to the right from the robot ");
  
  return 0;
}