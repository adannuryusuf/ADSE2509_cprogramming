// C that accepts student scores in an exam calculates and displays the mean score
#include <stdio.h>

int main()
{
    unsigned short score[5];
    unsigned short n;
    float meanScore;
    unsigned int total = 0;

    // Prompt
    for(n = 0; n < 5; n++)
    {
        printf("Please enter the score for student %d:\n", n + 1);
        scanf("%ld", &score[n]);
    }
    for(n = 0; n < 5; n++)
    {
         total += score[n];
    }
    meanScore = total/5.0;

    printf("The class average mean score is: %.2f", meanScore);

    return 0;
}
