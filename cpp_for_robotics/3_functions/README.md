# 3. Functions

## 3.1 Definition of a function
 - void
 - function name
 - statements

 ## 3.2 Calling a function
 [call_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/call_function.cpp)
```
$ g++ -std=c++11 call_function.cpp -o call_function_compiled
```
```
$ ./call_function_compiled
The function myfunction() has been called
```

## 3.3 Fucntion parameters
 [param_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/param_function.cpp)
```
$ g++ -std=c++11 param_function.cpp -o param_function_compiled
```
```
$ ./param_function_compiled
Result: 5
Result: 7
```
- default parameter

```
$ g++ -std=c++11 param_function.cpp -o param_function_compiled
```
```
$ ./param_function_compiled
Result: 6
Result: 7
```

## 3.4 Return statement
 [return_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/return_function.cpp)
```
$ g++ -std=c++11 return_function.cpp -o return_function_compiled
```
```
$ ./return_function_compiled
Result: 6
```
- overload

 [overload_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/overload_function.cpp)
```
$ g++ -std=c++11 overload_function.cpp -o overload_function_compiled
```
```
$ ./overload_function_compiled
Int result: 5
Double result: 5.4
```

- return list or dictionary

 [list_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/list_function.cpp)
```
$ g++ -std=c++11 list_function.cpp -o list_function_compiled
```
```
$ ./list_function_compiled
5, 1, 6,
```

## 3.5 Structure of a function

### Exercise 3.1
[unit3_exercise.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit3_exercise.cpp)
```
$ roscore &
$ rosrun c_scripts unit3_exercise
```

## 3.6 Local and Global Variables in Functions
 [variable.cpp](../catkin_ws/src/cpp_course_repo/utilities/variable.cpp)
```
$ g++ -std=c++11 variable.cpp -o variable_compiled
```
```
$ ./variable_compiled
Global variable
```

### Exercise 3.2
- turn (clockwise,n_secs): This function allows you to turn the robot. You will need to pass two parameters to it.
    - clockwise: Specify here whether you want your robot to turn clockwise ("clockwise") or counter-clockwise ("counterclockwise").
    - n_secs: Specify here how long you want to robot to keep turning (in seconds).

[unit3_exercise2.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit3_exercise2.cpp)
```
$ roscore &
$ rosrun c_scripts unit3_exercise2
```
