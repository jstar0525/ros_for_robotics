#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <string>
#include <list>
#include <iostream>
#include <map>

using namespace std;

list<float> move_and_inform(RosbotClass rosbot, int n_secs) {

    rosbot.move_forward(n_secs);
    float x = rosbot.get_position(1);
    float y = rosbot.get_position(2);

    list<float> pose({x,y});
    return pose;
}


int main(int argc, char **argv) {
    ros::init(argc, argv, "rosbot_node");

    RosbotClass rosbot;

    rosbot.move();

    list<float> list_coordinates = move_and_inform(rosbot, 5.0);
    for (float coordinate : list_coordinates) {
        ROS_INFO_STREAM(coordinate << ", ");
    }

    return 0;
}