#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <string>
#include <list>
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x = rosbot.get_position(1);
  float y = rosbot.get_position(2);
  double t = rosbot.get_time();

  rosbot.move();

  float new_x = rosbot.get_position(1);
  float new_y = rosbot.get_position(2);
  double new_t = rosbot.get_time();

  float v = (new_x - x)/(new_t - t);

  ROS_INFO_STREAM("The mean speed is lower than 1 m/s : " << (v < 1.0) << "\n");

  return 0;
}