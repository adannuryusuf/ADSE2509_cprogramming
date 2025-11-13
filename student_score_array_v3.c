// C that accepts student scores in an exam calculates and displays the mean score, the highest and the lowest score
#include <stdio.h>

int main()
{
    unsigned short score[5];
    unsigned short n;
    float meanScore;
    unsigned int total = 0;
    unsigned short highestScore = 0, lowestScore = 120;

    // Prompt
    for(n = 0; n < 5; n++)
    {
        printf("Please enter the score for student %d:\n", n + 1);
        scanf("%hu", &score[n]);
        total += score[n];
        if(score[n] > highestScore)
            highestScore = score[n];
        if(score < lowestScore)
            lowestScore = score[n];
    }
    meanScore = total/5.0;
    printf("The highest score is: %hu\n", &highestScore);
    printf("The lowest score is: %hu\n", &lowestScore);
    printf("The class average mean score is: %.2f", meanScore);

    return 0;
}
