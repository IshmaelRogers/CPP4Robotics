#include <iostream> // allows the program to have an input and output 
using namespace std; // Specifies the standard name space

int my_array[11]={0,1,2,3,4,5,6,7,8,9,10}; // initialize an integer array 

void FindEven(int array[]) // initialize a function with a voif return type 
{
    for(int i=0; i<=10; i++) // a for loop that iterates through each element of the array
    {
        if(array[i] % 2 == 0) // an if statement that checks the remainder of each element after being divided by 2
            cout << array[i]<<endl; //outputs the element's value only if the above line evaluates to TRUE
    }
}

int main()  // start the main function
{
    FindEven(my_array); // Call the function using the previously declared variable "my_array"

    return 0;
}
