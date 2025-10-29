/* C program to demonstrate the various C arithmetic operators. */
#include <stdio.h>

int main()
{
    // Variables to be used in the program
    int firstNum, secondNum;
    // Input two numbers
    printf("Please enter 2 numbers\n");
    scanf("%d %d", &firstNum, &secondNum);
    // Display the result of the various arithmetic operations
    printf("\nC Arithmetic OPerations");
    printf("\n----------------------------");
    printf("\nAddition : %d + %d = %d", firstNum, secondNum, firstNum + secondNum);
    printf("\nSubtraction : %d - %d = %d", firstNum, secondNum, firstNum - secondNum);
    printf("\nMultiplication : %d * %d = %d", firstNum, secondNum, firstNum * secondNum);
    printf("\nDivision : %d / %d = %d", firstNum, secondNum, firstNum / secondNum);

    // Increment and decrement
    printf("\nC increment and decrement");
    printf("\n--------------------------");
    printf("\nPre-increment ++firstNum = %d", ++firstNum);
    printf("\nPost-increment firstNum++ = %d", firstNum++);

    printf("\nPre-decrement --secondNum = %d", --secondNum);
    printf("\nPost-decrement secondNum-- = %d", secondNum--);

    printf("\nValue of firstNum & secondNum after post increment and decrement respectively: %d and %d.",firstNum, secondNum);
    return 0;
}
