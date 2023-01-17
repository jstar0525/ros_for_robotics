# 1. C++ for Basics
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/
```
```
$ git clone https://bitbucket.org/theconstructcore/cpp_course_repo.git
```

## 1.1 Compile and execute C++ scripts
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities/
```
```
$ touch name.cpp
```
[name.cpp](../catkin_ws/src/cpp_course_repo/utilities/name.cpp)
```
$ g++ -std=c++11 name.cpp -o name_compiled
```
```
$ ll
total 28
drwxr-xr-x 2 root root 4096 Jan 17 00:45 ./
drwxr-xr-x 6 root root 4096 Jan 17 00:40 ../
-rw-r--r-- 1 root root   18 Jan 17 00:40 README.md
-rw-r--r-- 1 root root   95 Jan 17 00:44 name.cpp
-rwxr-xr-x 1 root root 8672 Jan 17 00:45 name_compiled*
```
```
$ ./name_compiled
Hello, ROS developer!
```

## 1.2 Compile and execute C++ scripts in ROS

### Exercise 1.1
[unit_1_exercise.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit1_exercise.cpp)
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws
```
```
$ catkin_make
```
```
$ source ./devel/setup.bash
```
```
$ roscore &
$ rosrun c_scripts unit1_exercise
```

## 1.3 Variables

### Exercise 1.2
1) Get the x and y coordinates of the robot by calling twice at the function get_position() and print them together
2) Make the robot move by calling the function move(), which needs no parameters, and gives no results.
3) Get the new x and y coordinates of the robot.

[unit_1_exercise2.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit1_exercise2.cpp)

```
$ roscore &
$ rosrun c_scripts unit1_exercise2
```