/* C program that accepts student scores (with validation i.e 0-100)in an exam calculates and displays the mean grade*/
#include <stdio.h>

int main()
{
    unsigned short numOfStudents, numsOfSubject;
    unsigned short n, a; // looping variables
    printf("Please enter the number of students in the class:\n"); //prompt for student numbers
    scanf("%hu", &numOfStudents); // read
    printf("Please enter the number of subjects in the class:\n");
    scanf("%hu", &numsOfSubject);

    // Single dimensional array to hold each students total mean and grade
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];

    // Two dimensional array to hold the names of the students, subjects and score per subject
    char studentNames[numOfStudents][20], subjectNames[numsOfSubject][15];
    char comment[numOfStudents][12];
    unsigned short studentScore[numOfStudents][numsOfSubject];

    /// read in the student`s names and the subject`s names
    for(n=0; n < numOfStudents; n++)
    {
      printf("\nPlease enter the name of student %hu:\n", n + 1);
      scanf("%s", studentNames[n]);
    }
    for(n = 0;n < numsOfSubject; n++)
    {
      printf("\nPlease enter the name of the subject %hu:\n", n + 1);
      scanf("%s", subjectNames);
    }

    // initialise each students`s score to 0

    for(n = 0; n < numOfStudents; n++)
    {
      total[n] = 0;
      for(a=0;a<numsOfSubject;a++)
      {
        printf("\nPlease enter the score for %s in %s:\n", studentNames[n], subjectNames[a]);
        scanf("%hu", &studentScore[n][a]);
        total[n] += studentScore[n][a];
      }

    }
    mean[n]= total[n]/(float)numsOfSubject;


    if(mean[n] >= 70 && mean[n] <= 100)
    {
       printf("\n%.2f A.", mean[n]);
    }
    else
    {
        if(mean[n] >= 60 && mean[n] <= 69)

         printf("\n%.2f B.", mean[n]);


        else if(mean[n] >= 50 && mean[n] <= 59)

         printf("\n%.2f C .", mean[n]);

        else if(mean[n] >= 40 && mean[n] <= 49)

         printf("\n%.2f D.",mean[n]);

        else

         printf("\n%.2f E.", mean[n]);

      }
    // assignment switch case for comment


    // display results
    printf("\n%-12s", "Student Name");
    for(a = 0; a<numsOfSubject; a++)
    {
      printf("%-12s", subjectNames);
    }
    printf("%-8s %-8s %-8s", "Total", "Average", "Grade");
    for(n=0; n < numOfStudents; n++)
    {
       printf("\n%-12", studentNames);
        for(a=0; a<numsOfSubject; a++)
        {
           printf("%-8hu", studentScore[n][a]);
        }

    }

    printf("%-8u %-8.2f %-8c", total[n], mean[n],grade[n]);
    return 0;
}
