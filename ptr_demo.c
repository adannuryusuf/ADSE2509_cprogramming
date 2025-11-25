#include<stdio.h>
#include<string.h>

void main()
{
    char mystring[100];

    //Prompt user for input
    puts("Please enter a brief message below: \n");
    //gets(mystring);
//    Read in the string using fgets and manually remove the \n using strcspn(string compliment span)function
    fgets(mystring,sizeof(mystring),stdin);

    //Remove the \n when the string is not null
    if(mystring != NULL)
     mystring[strcspn(mystring,"\n")] ='\0';
    // Display The users input
    printf("\nYou gave us: %s",mystring);

    //other strings
    char str1[] = "Goodyio";
    char str2[] = "Afternoon";
    char *str3 = strcat(str1," ");
    str3 = strcat(str3,str2);
    printf("\n---------------------------------");

    //Display
    printf("\n\'str3\' holds the value: \n%s",str3);
    strcpy(str1,"Hello");
    strcpy(str2,"World");
    str3 = strcat(str1," ");
    str3 = strcat(str3,str2);
    //Display
    printf("\n\'str3\' holds the value: \n%s",str3);
    printf("\n---------------------------------");
    //compare string1 and string2 using string compare function
    if(strcmp(str1,str2) == 0)
      printf("\n\'%s\' is the as \'%s\'", str1,str2);
    else if(strcmp(str1,str2) < 0)
      printf("\n\'%s\' is lexicographically less than \'%s\'", str1,str2);
    else
      printf("\n\'%s\' is lexicographically greater than \'%s\'", str2,str1);
    //Display the occurence of a character and string in a string using strchr and strstr
    char s4[] = "Coffee";
    printf("\n---------------------------------");
    printf("\nThe first \'f\' in \'%s\' is stored in memory location: %p",s4,strchr(s4,'f'));
    char s5[] = "Humburger";
    printf("\n---------------------------------");
    printf("\nThe first \'urge\' in \'%s\' is stored in memory location: %p",s5,strchr(s5,'urge'));
    printf("\n---------------------------------");
    // display the length of the string
    printf("\nThe length of the string \'%s\'is: %d characters ",str3,strlen(str3));
}
