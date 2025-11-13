/*C program that displays the first ten integers using a do while loop*/
#include <stdio.h>

int main()
{
    int n = 1;
    do
    {
        printf("Current value of n: %d\n", n);
        n++;
    }while(n <= 10);

    return 0;
}
