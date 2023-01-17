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

  ROS_INFO_STREAM(x << "," << y << "|" << t);

  rosbot.move();

  float new_x = rosbot.get_position(1);
  float new_y = rosbot.get_position(2);
  double new_t = rosbot.get_time();

  map<double,int> t_x_dictionary;

  t_x_dictionary[t] = x;
  t_x_dictionary[new_t] = new_x;

  for (auto item : t_x_dictionary) {
    ROS_INFO_STREAM("Time :" << item.first << ", X :" << item.second << "\n");
  }

  return 0;
}