/* C Program that demonstrates the arithmetic operations of simple integer pointers */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25}, n;
    int *ptr_arr = arr;

    for(n = 0; n < sizeof(arr)/sizeof(arr[0]); n++)
        printf("\nNormal access: %2d\tPointer Access: %2d", arr[n],*(ptr_arr + n));

    for(n = 0; n < sizeof(arr)/sizeof(arr[0]); n++)
        printf("\nAddress of element: %2d: %p\tValue of element %d: %2d",n+1,ptr_arr + n,
                n+1, *(ptr_arr + n));

    // Subtraction
    printf("\n");
    printf("\nDifference between the 5th element(ptr_arr + 4) and the second element (ptr_arr + 1) is: %ld elements", (ptr_arr + 4)-(ptr_arr + 1));

    // Incrementing and decrementing pointers
    printf("\n");
    printf("\nOriginal value of first element in the arr[] array (ptr_arr + 0) is : %d", *ptr_arr);
    (*ptr_arr)++;
    printf("\nAfter incrementing the value of the first by 1 we get: %d", *ptr_arr);
    printf("\nOriginal value of second element in the arr[] array (ptr_arr + 1) is : %d", *ptr_arr + 1);
    (*(ptr_arr + 1))--;
    printf("\nAfter decrementing the value of the second element by 1 we get: %d", *(ptr_arr + 1));





    return 0;
}

