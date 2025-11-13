  // C program that accepts values between 1-4 for options in a menu
#include <stdio.h>

int main()
{
    // Variables declaration
    int menuItem;

    // Prompt the user for a number between 1-4
    printf("Enter a number (1-4) to get a menu item:\n ");
    scanf("%d", &menuItem);

    // Display the output
    switch (menuItem)
    {
        case 1:
            printf("\nAppetiser");
            break;
        case 2:
            printf("\nMain Dish");
            break;
        case 3:
            printf("\nDessert");
            break;
        case 4:
            printf("\nDrink");
            break;
         default:
            printf("\nInvalid option");
    }

    return 0;
}
