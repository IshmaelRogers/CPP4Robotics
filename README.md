# C++ For Robotics Applications
# Ishmael Rogers
# Infinitely Deep Robotics Group
# idrg.io
# 2018 

[image1]: ./images/cppvspy.png

Introduction
---

C++ is used in a variety of industry robotics applications. It is an object oriented, compiler based programming language that allows developers to represent real world objects as classes in a program. 

One of the key advantages of C++ is its runtime speed. Being a compiler based programming language means that the program first evaluates every line in the code and then begins executing commands. 

Using C++ in ROS packages is convienent because most ROS nodes are written in C++ and only need minor modifications.

In order to use physical hardware such as sensors or actuators, device drivers are need and are often compiled in C++.
C++ is great for digging deep into the lower level controls when designing a robot. 

C++ vs Python
---
There are many differences in python and C++ (see figure below)

Typing refers to how variables are initialized. In C++ each variable MUST be assigned a data type (int, bool, float, etc.). In Python the interperter automatically assigns the variable a data type based on its value. The value can be used anywhere in the code without prior declaration.  

The entry point refers to the start of the program:

C++: The main function
Python: The start of the source code (i.e the first line)

Indentation in C++ is optional and is usually done as a style preference to enhance the readability of the code. In python, it is mandatory that each line is properly indented. 

![alt text][image1]

