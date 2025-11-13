/* C program that accepts score from 0-100 and displays if its a valid score or invalid*/
#include <stdio.h>

int main()
{
    int score;

    printf("Please enter your score\n");
    scanf("%d", &score);

    if(score >= 70 && score <= 100)
    {
       printf("\n%d%% is an A score.", score);
    }
    else
    {
        if(score >= 60 && score <= 69)

         printf("\n%d%% is a B score.", score);


        else if(score >= 50 && score <= 59)

         printf("\n%d%% is a C score.", score);

        else if(score >= 40 && score <= 49)

         printf("\n%d%% is a D score.", score);

        else if(score >= 0 && score <= 39)

         printf("\n%d%% is an E score.", score);

        else

         printf("You have entered an invalid score.\nPlease enter a number between 0 and 100");
      }

    return 0;
}
