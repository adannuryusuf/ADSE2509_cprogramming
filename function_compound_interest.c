/* C program that demonstrates passing values to a function by reference to calculate the compound interest on a loan/deposit amount. */

#include <stdio.h> // Pre-processor directive/command
#include <math.h>  // Pre-processor directive/command

// Declare a function prototype/(function declaration) for calc_compound_interest.
void calc_compound_interest(float *ptrPrincipal, float rate, unsigned short years);


//main function begins program execution
int main()
{
    // Variable(s) to be used in the program
    float principal,iRate, initialAmount;
    unsigned short years;

    printf("Please enter the principal amount:\n");
    scanf("%f", &principal);
    initialAmount = principal;

    printf("\nPlease enter the rate of the compound interest:\n");
    scanf("%f", &iRate);


    printf("\nPlease enter the number of years the amount is to be compounded for:\n");
    scanf("%hu", &years);

    //Calculate
    calc_compound_interest(&principal,iRate,years);

    //Display output
    printf("\nLoan/Deposit Details:\n");
    printf("\n---------------------------------\n");
    printf("\nInitial Amount   : %7.2f",initialAmount);
    printf("\nInterest rate    : %7.2f",iRate);
    printf("\nTime in Years    : %4hu",years);
    printf("\nAmount to be paid: %7.2f",principal);
    printf("\nCompound interest: %7.2f",principal - initialAmount);
    printf("\n---------------------------------\n");
    return 0;
}// End of function main
void calc_compound_interest(float *ptrPrincipal, float rate, unsigned short years)
{
   //   calculte the compound interest
   *ptrPrincipal = *ptrPrincipal * pow(1 + (rate/100),years);
}  // End of function squarer
