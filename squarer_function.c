/* C program that demonstrates a function to square a number passed to it. */

#include <stdio.h> // Pre-processor directive/command

// Declare a function prototype/(function declaration) for the squarer function
int squarer (int x);

//main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    int n = 1;
    for (; n <= 10; n++)
         printf("Square of %2d is %3d.\n",n ,squarer(n) );
    return 0;
}// End of function main

//Function definition of the squarer function
int squarer (int x)
{
   return x * x;
}// End of function squarer
