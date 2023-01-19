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

## 1.4 Data types
- Booleans
- Numbers (int, double, float)
- Texts (char, string)
- List
- Dictionaries
### Exercise 1.3
1) First, modify the script unit1_exercise.cpp of the previous exercise to get the x coordinate of the robot by calling the get_position() function, and also get the time of simulation by calling the get_time() function.
2) Then, make the robot move by calling the function move()
3) Repeat step 1: take the x position and the timestamp
4) Instead of printing them in the shell, you will initialize a dictionary and store the time obtained as a key, and the x position as a value. Do it for all the values you obtained of x, 1 time, 2 times, .. , as many as you want.
5) Print the dictionary with the code provided in the Dictionaries section.

[unit_1_exercise3.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit1_exercise3.cpp)

```
$ roscore &
$ rosrun c_scripts unit1_exercise3
```

## 1.5 I/O functions
- Print
    - [printf](../catkin_ws/src/cpp_course_repo/utilities/printf.cpp) 
    - [cout](../catkin_ws/src/cpp_course_repo/utilities/cout.cpp)
    - [endl](../catkin_ws/src/cpp_course_repo/utilities/endl.cpp)
- Input
    - [cin](../catkin_ws/src/cpp_course_repo/utilities/cin.cpp)
    - [getline](../catkin_ws/src/cpp_course_repo/utilities/cin_string.cpp)
- Namespace

## 1.6 Operators
- [Arithmetic Operators](../catkin_ws/src/cpp_course_repo/utilities/arithmetic.cpp)
- [Assignment Operators](../catkin_ws/src/cpp_course_repo/utilities/assignment.cpp)
- [Comparison Operators](../catkin_ws/src/cpp_course_repo/utilities/comparision.cpp)
- Logical Operators
### Exercise 1.4
1) First obtain the measure of time and position x with the functions get_time() and get_position(), and store them in variables. Then make the robot move, and obtain again the time and position x storing them in different variables.
2) Second, calculate the mean speed of the robot in that period
3) Third, print (using ROS_INFO_STREAM) a True value if the mean speed is lower than 1 m/s