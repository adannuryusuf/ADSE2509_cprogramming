// C program to accept two numbers from the user, sum them and display the sum.

#include <stdio.h>

int main()

{

    // Variables to be used in our program

    int firstNum, secondNum, sum;

    // prompt user for the first number

    printf("Please enter the value of the first number to be added.\n");

    // Read in the first number from the user

    scanf("%d", &firstNum);

    // prompt user for the second number

    printf("Please enter the value of the second number to be added.\n");

    // Read in the second number from the user

    scanf("%d", &secondNum);

    // Add the two values

    sum = firstNum + secondNum;

    // Display the sum of the two numbers

    printf("%d + %d = %d\n",firstNum, secondNum, sum);

    return 0;

}
