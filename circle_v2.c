// C program for demonstrating the calculation of an area of a circle, circumference and display with its radius
#include <stdio.h>
#include <math.h>

int main()
{
    // Variables declaration and initialization
    double area, circumf, radius;
//    const double pi = 3.141592;

    // Prompting the user for radius and read it
    printf("Please enter the radius of the circle in cm\n");
    scanf("%lf", &radius);

    // calculation
//    area = pi * radius * radius;
    area = M_PI * pow(radius,2);
    circumf = M_PI * (radius * 2);

    // Display the output
    printf("\n-------------------------");
    printf("\nThe radius of the circle is: %.3lf cm", radius);
    printf("\nThe area of the circle is: %.3lf cm", area);
    printf("\nThe circumference of the circle is: %.3lf cm", circumf);
    printf("\n-------------------------");

    return 0;
}
