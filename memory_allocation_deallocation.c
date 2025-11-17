//c program to demonstrate memory allocation and deallocation using malloc(), calloc() and realloc() and the free() functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, *arr2, *arr3;
    int n;
    printf("==== Demonstration malloc(), calloc(), realloc() and free() functions ====\n");

    //1. Malloc() allocates memory but doesnt initialise it.
    printf("\n1. Using malloc() to allocate 5 integers:\n");
    arr = (int*)malloc(5 * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed.\nPlease close some programs and try again.");
        return 1;
    }
    //Display the uninitialised garbage
    printf("\nThe values in the uninistialised arr are:\n");
    for(n = 0;n < 5;n++)
        printf("\narr[%d] = %d\n", n,arr[n]);
//    //Prompt the user for the values to be stored in the array arr
//     for(n = 0;n < 5;n++)
//     {
//        printf("\nPlease enter the value to be stored in position %d:\n", n + 1);
//        scanf("%d", &arr[n]);
//     }
//
//    printf("\nThe values store in the array arr:\n");
//    for(n = 0;n < 5;n++)
//        printf("\narr[%d] = %2d\n", n,arr[n]);

    //2. Calloc() allocates memory and initialises it to 0.
    printf("\n2. Using calloc() to allocate 7 integers:\n");
    arr2 = (int*)calloc(7,sizeof(int));
    if(arr2 == NULL)
    {
        printf("Memory allocation failed.\nPlease close some programs and try again.");
        free(arr);//Deallocate memory allocated using malloc()
        return 1;
    }
    //Display the initialised values
    printf("\nThe values in the uninistialised arr2 are:\n");
    for(n = 0;n < 7;n++)
        printf("\narr2[%d] = %2d\n", n,arr2[n]);
    //Store the first 7 multiples of 5 in arr2.
     for(n = 0;n < 7;n++)
        arr2[n] = 5 * (n + 1);
     // Display the output
      printf("\nThe values stored at arr2 are:\n");
      for(n = 0;n < 7;n++)
        printf("\narr2[%d] = %2d\n", n,arr2[n]);

    //3. Realloc() used to resize previously allocated memory.
    printf("\n3. Using realloc() to resize arr2 from 7 integers to 10 integers:\n");
    arr3 = (int*)realloc(arr2,10 * sizeof(int));
    if(arr3 == NULL)
    {
        printf("Memory reallocation failed.\nPlease close some programs and try again.");
        free(arr);//Deallocate memory allocated using malloc()
        free(arr2);//Deallocate memory allocated using calloc()
        return 1;
    }
    //Assign back to the original pointer
    arr2 = arr3;

    //Display the new memory indeces(7,8,9)
    printf("\nThe values at index 7, 8 and 9 in arr3 are:\n");
    for(n = 7;n < 10;n++)
        printf("\narr2[%d] = %2d\n", n,arr2[n]);

    //Allocate values at indexes (7,8,9)
    arr2[7] = 8;
    arr2[8] = 6;
    arr2[9] = 5;

     // Display the output
      printf("\nThe values stored at arr2 after reallocation  are:\n");
      for(n = 0;n < 10;n++)
        printf("\narr2[%d] = %2d\n", n,arr2[n]);


    //4. Free() used to release previously allocated memory.
    printf("\n4. Using free() to release previously allocated memory:\n");
    free(arr);
    free(arr2);

    printf("\nMemory freed succesfully.\n");



    return 0;
}
