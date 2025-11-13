/* C program to demonstrate pointers */
#include <stdio.h>
// main function begins program execution
int main()
{
   // variables to be used in the code
   int num1 = 8;
   int *ptrNum1 = &num1; // Declare ptr1 as a pointer to num1
   int *ptr_var2 = ptrNum1; // Assign the memory location/address pointed to by ptrNum1 to ptr_var2



   int temp = *ptrNum1; // Assign the value pointed to by ptr1 to temp
   int num2 = *ptr_var2; // Assign the value pointed to by ptr_var2 to num2



   // Display the content of num1 & its pointer
   printf("\nNum1 contains %d and is stored in location %x.",num1,ptrNum1);
   printf("\nThe value in temp is %d",temp);
   printf("\nThe value in num2 is %d",num2);

   // change the value in num1 using one of its pointers
   *ptr_var2 = 10;
    printf("\nThe value in num1 after modification through its pointer is %d",num1);
return 0;
}


