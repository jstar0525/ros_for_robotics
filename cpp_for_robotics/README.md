# C++ for Robotics

## What you will learn
- How to compile C++ programs
- How to store data into Variables
- How to operate with the data in the Variables
- How to change behavior based on Conditions
- How to create Functions that can be called from other places of the code
- How to properly use arrays and pointers
- How to encapsulate the code into Classes so you can have clean and robust code

## [Env.](https://jstar0525.tistory.com/333)
```bat
$ docker run -it \
    --privileged \
    --gpus all \
    -e __GLX_VENDOR_LIBRARY_NAME=nvidia \
    -e DISPLAY=192.168.0.3:0.0 \
    -e QT_X11_NO_MITSHM=1 \
    -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
    -v /etc/localtime:/etc/localtime:ro \
    -e TZ=Asia/Seoul \
    -v /dev:/dev \
    -w /root \
    osrf/ros:melodic-desktop-full
```
```bat
# cd /root
# git clone https://github.com/jstar0525/ros_for_robotics.git
```
```bat
# cd /root/ros_for_robotics/cpp_for_robotics/catkin_ws/src/
# git clone https://bitbucket.org/theconstructcore/cpp_course_repo.git
```

## Contents
- [C++ for Robotics](./README.md)
    - [C++ for basics](./1_cpp_basics/README.md)
    - [Conditional Statements and Loops](./2_conditional_statements_and_loops/README.md)
    - [Functions](./3_functions/README.md)
    - [Arrays and Pointers](./4_arrays_and_pointers/README.md)
    - [C++ Classes](./5_cpp_clasees/README.md)
    - [Micro Project](./6_micor_project/README.md)