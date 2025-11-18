/* C program that demonstrates reads 5 integers, returns the sum of all array elements,
the maximum value in the array and the index of the value if found or -1 if not. */
#include <stdio.h>

// Declare a function prototype/(function declaration)
int find_sum(int *arr, int size);
int find_max(int *arr, int size);
int search_value(int *arr, int size, int key);

//main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    int arr[5];
    int i, sum, max, key, index;

    // Read 5 integers
    for(i = 0; i < 5; i++)
    {
        printf("Please enter the %d number:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    //Calculate and search
    sum = find_sum(arr, 5);
    max = find_max(arr, 5);

    printf("\nPlease enter value to search: ");
    scanf("%d", &key);

    index = search_value(arr, 5, key);

    //Display output
    printf("\n----------------------------------------\n");
    printf("Sum of all elements   : %2d\n", sum);
    printf("Maximum value in array: %2d\n", max);
    printf("\n----------------------------------------\n");

    if(index == -1)
        printf("Value %d not found in array.\n", key);
    else
        printf("Value %d found at index   : %2d\n", key, index);

    printf("-------------------------------------------------\n");

    return 0;
}// End of function main

// calculte sum of array elements
int find_sum(int *arr, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}// End of function find_sum

// calculte maximum value
int find_max(int *arr, int size)
{
    int i, max = arr[0];
    for(i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}// End of function find_max

// Searches for index of key and displays -1 if not found
int search_value(int *arr, int size, int key)
{
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
            return i;
    }
    return -1;
}// End of function search_value
