#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float coordinate = rosbot.get_position(1);

  ROS_INFO_STREAM(coordinate);

  return 0;
}