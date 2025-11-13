/* C Program that demonstrates the arithmetic operations of simple integer pointers */
#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 7;
    int *ptr_num1;
    int num3;
    int *ptr_num3;

    ptr_num1 = &num1;
    num3 = *ptr_num1;
    ptr_num3 = &num3;

    // Display the values
    printf("The original value in num1 is %d and is stored in location/address: %x\n", num1, ptr_num1);
    printf("The original value of num3 is %d and is stored in in location: %x\n", num3, ptr_num3);

    num1 = 8;

    printf("The modified value in num1 is %d and is stored in location/address: %x\n", num1, ptr_num1);

    *ptr_num3 = 4;
    printf("The modified value of num3 is %d and is stored in in location: %x\n", num3, ptr_num3);

    return 0;
}

