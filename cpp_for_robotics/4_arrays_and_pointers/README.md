# 4. Arrays and Pointers

## 4.1 Variables and addresses
[address.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/address.cpp)
```
$ g++ -std=c++11 address.cpp -o address_compiled
```
```
$ ./address_compiled
42
myvariable's address is 0x7ffdb55b58b4
```

## 4.2 Arrays
[array.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/array.cpp)
```
$ g++ -std=c++11 array.cpp -o array_compiled
```
```
$ ./array_compiled
4
8
15
16
23
42
```

### Exercise 4.1
1) First ask the rosbot to move forward as many seconds as you want (remember exercise 3.1)
2) Then call the get_laser(n) function, asking for the two readings that you think will delimite the wall from the left to the right. Remember that n is the index of a laser beam, as in the previous image
3) Put those two readings in an array of floats and print them

[unit4_exercise.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit4_exercise.cpp)
```
$ roscore &
$ rosrun c_scripts unit4_exercise
```

## 4.3 Pointers
[pointer.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/pointer.cpp)
```
$ g++ -std=c++11 pointer.cpp -o pointer_compiled
```
```
$ ./pointer_compiled
0x7ffee6603d0c
0x7ffee6603d0c
42
Now myvariable has changed to the value 23
```

## 4.4 Pointers and arrays
[pointer_array.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/pointer_array.cpp)
```
$ g++ -std=c++11 pointer_array.cpp -o pointer_array_compiled
```
```
$ ./pointer_array_compiled
15
10,20,30,40,50,42,
```

### Exercise 4.2
1) Modify the main function to initialize an array with the numbers we've been using: 4,8,15,16,23,42
2) Modify the main function to call for squared_array function, passing as a parameter the previous defined array
3) Modify the squared_array function to:
    - First declare a pointer
    - Assign the address of the first element of the array to the new pointer
    - Initialize a for loop of 6 iterations
    - Inside the loop substitute each value of the array for its squared value, using the pointer
    - Print the values of the array once modified, using the pointer
    - Inside the loop increment the position of the pointer, so it points to each value of the array

[array_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/array_function.cpp)
```
$ g++ -std=c++11 array_function.cpp -o array_function_compiled
```
```
$ ./array_function_compiled
16
64
225
256
529
1764
```

- while

[array_while.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/array_while.cpp)
```
$ g++ -std=c++11 array_while.cpp -o array_while_compiled
```
```
$ ./array_while_compiled
10
100
1000
10000
```

## 4.5 Pointers and Constants
[const_pointer.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/const_pointer.cpp)
```
$ g++ -std=c++11 const_pointer.cpp -o const_pointer_compiled
```
```
$ ./const_pointer_compiled
const_pointer.cpp: In function ‘int main()’:
const_pointer.cpp:8:16: error: assignment of read-only location ‘* pointer’
     *pointer = 20;
                ^~
```

## 4.6 Pointers in functions
[pointer_function.cpp](../catkin_ws/src/cpp_course_repo/utilities/4_arrays_and_pointers/pointer_function.cpp)
```
$ g++ -std=c++11 pointer_function.cpp -o pointer_function_compiled
```
```
$ ./pointer_function_compiled
The value of number is: 42 and the address is: 0x7ffce4ceb704
Thre address of number is: 0x7ffce4ceb704
Now the value of number is: 43
```

### Exercise 4.3
[unit4_exercise2.cpp](../catkin_ws/src/cpp_course_repo/c_scripts/src/unit4_exercise2.cpp)
```
$ roscore &
$ rosrun c_scripts unit4_exercise2
```