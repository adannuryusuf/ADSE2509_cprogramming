/* C Program that demonstrates the pointer comparison operations */
#include <stdio.h>

int main()
{
    float num1 = 10.5, num2 =20.7;

    float *ptr_num1 = &num1, *ptr_num2 = &num2;


    // Display the values
    printf("The original value in num1 is %.1f and is stored in location/address: %x\n", num1, ptr_num1);
    printf("The original value of num2 is %.1f and is stored in location/address: %x\n", num2, ptr_num2);

    if(ptr_num1 > ptr_num2)
        printf("\nptr_num1 is stored after ptr_num2");
    else
        printf("\nptr_num1 is stored before ptr_num2");

    // Check if num1 is stored after num2
    printf(ptr_num1 > ptr_num2 ? "\nptr_num1 is stored after ptr_num2":"\nptr_num1 is not stored after ptr_num2");
    printf(ptr_num1 > ptr_num2 ? "\nptr_num1 is stored before ptr_num2":"\nptr_num1 is not stored before ptr_num2");

    if(ptr_num1 == ptr_num2)
      printf("\nThe pointers are equal");
    else
      printf("\nThe pointers are not equal");

    printf(*ptr_num1 == *ptr_num2 ?"\nThe values pointed to by the pointers are equal":"\nThe values pointed to by the pointers are different");

    return 0;
}

