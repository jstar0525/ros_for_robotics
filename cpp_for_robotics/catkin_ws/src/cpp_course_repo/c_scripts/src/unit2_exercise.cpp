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
  
  float move_sec = 5.0;
  rosbot.move_forward(move_sec);

  float x_limit = 1;
//   float x_limit = 0.1;
  float x = rosbot.get_position(1);
  ROS_INFO_STREAM("X reached: " << x);

  if (x >= x_limit) {
    rosbot.stop_moving();
  } else {
    rosbot.move_backwards(move_sec);
    rosbot.stop_moving();
  }

  return 0;
}