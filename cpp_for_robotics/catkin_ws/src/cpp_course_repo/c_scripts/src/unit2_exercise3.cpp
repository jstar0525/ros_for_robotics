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

    list<float> list_coordinates;
    list_coordinates = rosbot.get_position_full();
    for (float coordinate : list_coordinates) {
        ROS_INFO_STREAM(coordinate << ", ");
    }

    return 0;
}