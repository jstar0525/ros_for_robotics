#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x = rosbot.get_position(1);
  float y = rosbot.get_position(2);

  ROS_INFO_STREAM(x << "," << y);

  rosbot.move();

  float new_x = rosbot.get_position(1);
  float new_y = rosbot.get_position(2);

  ROS_INFO_STREAM(new_x << "," << new_y);

  return 0;
}