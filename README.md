# C++ For Robotics Applications
# Ishmael Rogers
# Infinitely Deep Robotics Group
# idrg.io
# 2018 

[image1]: ./images/cppvspy.PNG
[image2]: ./images/relational_operators.png

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


Code Editor 
---

There are many choices on the type of environment that you develop in. You should consider the following options based on your needs.

0. Text editors
    i. GEDIT
   ii. Sublime Text
  iii. Notepad
1. Integrated Development Environment (IDE)
    i. Eclipse
   ii. Visual Studio
  iii. XCODE (MAC users)
2. Command Line Code Editor
    i. NANO
   ii. VIM
  iii. EMACS
 
Creating a C++ File in Ubuntu 
---

0. Navigate to the Desktop using $ cd Desktop
1. Open a new file using gedit $ getedit newfile.cpp
2. Save, close and confirm that the file has been created with $ ls

Creating the first program!: "Hello World"
---
NOTE: Please see "Hello_World.cpp" in the "Code" Folder in this repository.

Compile amd Execute
---
Using C++ in a Linux environment has 2 steps!

0. Compiling
1. Executing

Compiler
---
NOTE: We will be using g++ in ubuntu 

Steps 

0. Compile: g++ newfile.cpp -o Executable_filename 

NOTE: The -o flag tells the compiler that the file will be an output file

1. Run the program: $ ./Executable_filename

NOTE: Hello, World should be displayed in the terminal.

Relational Operators
--
Now is a good time to discuss the syntax used by C++ to compare values stored in variables. Below is a table that show how to implement common comparisons between values.

NOTE: The results of these operations should be in the form of TRUE or FALSE (1 or 0) 

![alt text][image2]
Functions and Data Structures
---






