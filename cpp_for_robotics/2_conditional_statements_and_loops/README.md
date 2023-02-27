# 2. Conditional Statements and Loops

## 2.1 Conditional Statements

- if and else if
- if and else
- if

## 2.2 Blocks and indentations
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities
$ touch boring_movie.cpp
```
[boring_movie.cpp](../catkin_ws/src/cpp_course_repo/utilities/boring_movie.cpp)
```
$ g++ -std=c++11 boring_movie.cpp -o boring_movie_compiled
```
```
$ ./boring_movie_compiled
What's the most boring movie you have ever seen?
```
- if and else if and else if and else

### Exercise 2.1
[unit2_exercise.cpp](../catkin_ws/src//cpp_course_repo/c_scripts/src/unit2_exercise.cpp)
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
$ rosrun c_scripts unit2_exercise
```