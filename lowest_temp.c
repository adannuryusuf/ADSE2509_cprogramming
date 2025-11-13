// C program that accepts temperatures from 3 days of the week and displays the coldest day
#include <stdio.h>

int main()
{
    // Variables declaration
    float temp1, temp2, temp3;

    // Prompting the user for temperatures of 3 days and read it
    printf("Please enter the temperature of day 1\n");
    scanf("%f", &temp1);
    printf("Please enter the temperature of day 2\n");
    scanf("%f", &temp2);
    printf("Please enter the temperature of day 3\n");
    scanf("%f", &temp3);

     // Display the output
    if(temp1 < temp2 && temp1 < temp3)
    {
        printf("\nDay 1 is the coldest day with a temperature of: %.2f", temp1);
    }
    else
    {
        if(temp2 < temp1 && temp2 < temp3)
            printf("\nDay 2 is the coldest day with a temperature of: %.2f", temp2);
        else if(temp3 < temp1 && temp3 < temp2)
            printf("\nDay 3 is the coldest day with a temperature of: %.2f", temp3);
        else
            printf("\nTwo or more days have the same temperature.");
    }

    return 0;
}
