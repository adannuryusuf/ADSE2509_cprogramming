// C program for demonstrating the calculation of an area of a circle, circumference and display with its radius
#include <stdio.h>

int main()
{
    // Variables declaration and initialization
    double area, circumf, radius;
    const double pi = 3.141592;

    // Prompting the user for radius and read it
    printf("Please enter the radius of the circle\n");
    scanf("%lf", &radius);

    // calculation
    area = pi * radius * radius;
    circumf = pi * radius * 2;

    // Display the output
    printf("\n-------------------------");
    printf("\nThe radius of the circle is: %.3lf", radius);
    printf("\nThe area of the circle is: %.3lf", area);
    printf("\nThe circumference of the circle is: %.3lf", circumf);

    return 0;
}
