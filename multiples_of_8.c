/*C program that displays the first ten multiples of 8 using a for loop*/
#include <stdio.h>

int main()
{
    int n = 1;
    for( ; n <= 8; n++)
    {
        if(n % 8 == 0)
        printf("01 * 8 = %02d\n", n);
    }
    for( ; n <= 16; n++)
    {
        if(n % 8 == 0)
        printf("02 * 8 = %02d\n", n);
    }
    for( ; n <= 24; n++)
    {
        if(n % 8 == 0)
        printf("03 * 8 = %02d\n", n);
    }
    for( ; n <= 32; n++)
    {
        if(n % 8 == 0)
        printf("04 * 8 = %02d\n", n);
    }
    for( ; n <= 40; n++)
    {
        if(n % 8 == 0)
        printf("05 * 8 = %02d\n", n);
    }
    for( ; n <= 48; n++)
    {
        if(n % 8 == 0)
        printf("06 * 8 = %02d\n", n);
    }
    for( ; n <= 56; n++)
    {
        if(n % 8 == 0)
        printf("07 * 8 = %02d\n", n);
    }
    for( ; n <= 64; n++)
    {
        if(n % 8 == 0)
        printf("08 * 8 = %02d\n", n);
    }
    for( ; n <= 72; n++)
    {
        if(n % 8 == 0)
        printf("09 * 8 = %02d\n", n);
    }
    for( ; n <= 80; n++)
    {
        if(n % 8 == 0)
        printf("10 * 8 = %02d\n", n);
    }
    return 0;
}
