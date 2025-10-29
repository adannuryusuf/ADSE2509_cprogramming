//cproogram that caclulates and displays cirle radius ,area and circumfrence

#include <stdio.h>

#define PI 3.141592

int main()

{

  double radius;

  double area;

  double circumference;

  //the user should input the radius

  printf("please enter the radius of circle:\n");

  scanf("%lf", &radius);

//calculate the area and circumference

area = PI * radius * radius;

circumference = 2 * PI * radius;

//display results

printf("\nradius:%.3lf", radius);

printf("\narea:%.3lf", area);

printf("\ncircumference:%.3lf", circumference);

    return 0;

}
