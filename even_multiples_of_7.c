/*C program that displays the first ten integers using a for loop*/
#include <stdio.h>

int main()
{
    int n = 10;
    for( ;n<=70;n++)
    {
        if(n % 7 == 0 && n % 2 == 0)
         printf("%d is evenly divisible\n", n);
    }
    return 0;
}
