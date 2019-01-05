#include <iostream> //Allows the program to feature input/output capabilities
  //Vo= initial velocity 
// Vf = Vo + at
// Vo = 9 
// a = 18 
// t = 15 
     // Imports 
    // declare variables
   // create main function
  // optional define other functions
 // define logic 
// 

// User inputs t 
//

using namespace std; // Designates the standard (std) namespace to be used throughout the program

int main() // The starting point for all C++ programs 
{          // Everything located inside the following curly braces will serve as out main code
  
  int Vo = 9;  //t = time 
  int a = 18; // a = acceleration
  int t; // t = time 
  int Vf; // Vf = final Velocity 
  
  cout << "Input a time t" << endl;
  
  
  cin >> t; 
   
  Vf = Vo + a * t
  
cout << "Your final velocity is: " << Vf << endl; // "cout" tells the complier that you would like to display everything after the "<<" on the screen

  
  //return 0;                 // Specifies that the return type. In this case, there isn't one

}                         // Closing curly braces that end the main program 
