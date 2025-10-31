#include <stdio.h>
#include <ctype.h>  // to include tolower function in the program
int main()
{
   char userLetter;

   printf("Please enter a character");
   scanf("%c", &userLetter);

   //convert the useer`s input to lowercase
   userLetter = tolower(userLetter);

   //check whether the user`s letter is a vowel
   if(userLetter == 'a' || userLetter == 'e' || userLetter == 'i' || userLetter == 'o' userLetter == 'u');
     printf("\n%c is a vowel.", userLetter);

    return 0;
}
