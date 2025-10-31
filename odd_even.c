/* C program that accepts a number from the user and tells them whether its odd or even*/
#include <stdio.h>
int main()
{
    int userNum;
    printf("Please enter a number\n");
    scanf("%d", &userNum);

    int remainder = userNum % 2;
    if(remainder == 1)
    {

        printf("\n%d is an odd number.", userNum);
    }
    else
    {

        printf("\n%d is an even number.", userNum);
    }
}
