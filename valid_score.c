/* C program that accepts score from 0-100 and displays if its a valid score or invalid*/
#include <stdio.h>

int main()
{
    int score;

    printf("Please enter your score\n");
    scanf("%d", &score);

    if(score >= 0 && score <= 100)
    {
       printf("\n%d%% is a valid score.", score);
    }
    else
    {
         printf("\n%d%% is an invalid score.", score);

    }

    return 0;
}
