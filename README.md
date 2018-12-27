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

Functions 
---

Functions can be looked at simple machines that takes in an input, (manipulates it in some way) and then outputs a predictable value. 

Function definitions follow a common structure:

```c++
returnType FunctionName(input1, input2, ..., inputn)
{

code that does something to the input

}
```

Data Structure
---
Data can be represented in the following ways:

0. Float
1. integer
2. Char
3. Bool 
4. String 

Conditional statements
---
0. If 
1. If Else


Loops
---

0. While 
1. For 
2. Do-While 

Functions often simplify our code making it easier understand and even easier to compile. For example, if our goal is to build a program that finds the hypotenuse of right triangle, we could create a function that would handle the calculations for us whenever we "call" the function in main. 

Please see the EvenNumbers.cpp file in the repository for a detailed example of how this works.

Classes 
---

Classes - Offer abstraction, structure and function of object
Objects - Reduce the complexity of the code by allowing you to represent real world things inside of a program.  

Example: 

Class:  person

Pretend that the person class has been created for a particular program. This class can hold 3 different types of information for each person created in the program:

0. Name 
1. Age
2. Birthdate

Let's move into a more detailed example featuring real C++ code:

``` c++
#include <iostream> // gives the program the ability to have inputs and outputs
using namespace std; // uses the standard namespace

class Robot // Create a class called Robo
{
public:    // declare accessibility of atribute can be private, protected or public
int Speed() // 
{return 10
}
}; // ; is necessary to close class definitions 

int main()

{

Robot robot1:
cout << "Speed = " << robot1.Speed() << endl; // access the speed attribute using the "." operator 

return 0;
}
```

Inheritance 
---

Continuing from the example above, we will create a wheel class that inherits properties from the base class (Robot) but with it's own member functions and attributes

Pointers
---

Pointers are useful for many reason. 


``` c++
#include <iostream> // gives the program the ability to have inputs and outputs
using namespace std; // uses the standard namespace

class Robot // Create a class called Robo
{
public:    // declare accessibility of atribute can be private, protected or public
int Speed() // 
{return 10
}
}; // ; is necessary to close class definitions

class Wheel: public Robot {}; // Public memeber functions are now public in the Wheel class as well 

int main()

Wheel wheel1: //instantiate a wheel object

Wheel *wheel1_pt = &wheel1; // The memory location of the wheel1 object is assigned the the Wheel1 pointer object. 

cout << "Wheel Speed Accessed  by the object=" << wheel1.Speed()  << endl; // access the speed attribute using the "." operator 
cout << "Wheel Speed Accessed  by the pointer=" << wheel1_pt->Speed() << endl; // uses arrow selection operater
cout << "Address of wheel 1 object=" << wheel1_pt << endl; 

return 0;
}
```

Templates
---

Write functions and classes independent of data types

```c++
#include <iostream>
#include <string.h>
using namespace std;

template <class data_type>
class Robot {
    private:
        data_type speed;
    public:
        Robot(data_type sp):speed(sp){/*speed=sp*/}

          data_type GetSpeed()
          {
              return speed;
          }
};

int main() 
{
   Robot <int> robot1(100);
   Robot <float> robot2(50.5);
   Robot <string> robot3("ten");

   cout << "Robot1 speed : " << robot1.GetSpeed() <<endl;
   cout << "Robot2 speed : " << robot2.GetSpeed() <<endl;
   cout << "Robot2 speed : " << robot3.GetSpeed() <<endl;

   return 0;
}         

```
