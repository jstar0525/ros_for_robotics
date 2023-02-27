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
1) Open the IDE, and inside the folder /c_scripts/src/ open the file unit2_exercise.cpp. Take the unit1_exercise.cpp as an example for the structure of the code.
2) Use the function move_forward(s) to move the robot. Pass as a parameter s the number of seconds you want it to move.
3) Use the value X_limit that you desire in the if condition
4) Use the function stop_moving() to stop the robot
5) Use the function move_backwards(s) to move backwards, passing the number of seconds you want it to move. When it is finished, make the robot stop with stop_moving().    

[unit2_exercise.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit2_exercise.cpp)
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

## 2.3 Loops
### 2.3.1 While loops
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities
$ touch while_loop.cpp
```
[while_loop.cpp](../catkin_ws/src/cpp_course_repo/utilities/while_loop.cpp)
```
$ g++ -std=c++11 while_loop.cpp -o while_loop_compiled
```
```
$ ./while_loop_compiled
Count: 1
Count: 2
Count: 3
Count: 4
Count: 5
 Got out of the while loop!
```

### Exercise 2.2
[unit2_exercise2.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit2_exercise2.cpp)
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
$ rosrun c_scripts unit2_exercise2
```

### 2.3.2 For loops
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities
$ touch for_loop.cpp
```
[for_loop.cpp](../catkin_ws/src/cpp_course_repo/utilities/for_loop.cpp)
```
$ g++ -std=c++11 for_loop.cpp -o for_loop_compiled
```
```
$ ./for_loop_compiled
0
1
2
3
4
```
```
$ ./for_loop_compiled
H
e
l
l
o
```
```
$ ./for_loop_compiled
Lumos, Alohomora, Wingardium Leviosa, Crucio, Expecto Patronum,
```

### Exercise 2.3
1) Make the robot move with the function move() for as many seconds as you wish
2) Call the function get_position_full() to obtain a list with the coordinates
3) Use a for loop to print the coordinates

[unit2_exercise3.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit2_exercise3.cpp)
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
$ rosrun c_scripts unit2_exercise3
```

## 2.4 Interrupt of loop iterations
- break
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities
$ touch interrupt_loop.cpp
```
[interrupt_loop.cpp](../catkin_ws/src/cpp_course_repo/utilities/interrupt_loop.cpp)
```
$ g++ -std=c++11 interrupt_loop.cpp -o interrupt_loop_compiled
```
```
$ ./interrupt_loop_compiled
1
2
 Got out of the while loop!
```
- continue
```
$ cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/cpp_course_repo/utilities
$ touch continue_loop.cpp
```
[continue_loop.cpp](../catkin_ws/src/cpp_course_repo/utilities/continue_loop.cpp)
```
$ g++ -std=c++11 continue_loop.cpp -o continue_loop_compiled
```
```
$ ./continue_loop_compiled
1
2
4
5
 Got out of the while loop!
```