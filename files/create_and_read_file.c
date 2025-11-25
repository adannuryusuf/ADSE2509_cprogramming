//C program to demonstrate how to create, write and read from a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    //Charcter array to hold the complete full path to the file well be working on
    char completePath[150] = "";
    // character array to hold the file name and extension of the file
    char fileName[20] = "";
    // character array to hold the text to be enetered by the user and then written to the file
    char userMessage[100] = "";
    // prompt
    printf("Please enter a message to be written to the file -> \n");
    fgets(userMessage,sizeof(userMessage),stdin);
    userMessage[strcspn(userMessage,"\n")] = '\0';

    // File pointer to the file t be written and read
    FILE *file2WriteRead;
    //Path to the location
    strcat(completePath,"C:\\Users\\a.yusuf\\Documents\\adan_adse2509\\sem1\\02_cprogramming\\files\\");

    printf("Please enter a name of the file to be created-> \n");
    fgets(fileName,sizeof(fileName),stdin);
    fileName[strcspn(fileName,"\n")] = '\0';

    // join the path and the naame
    strcat(completePath,fileName);

    //Add the extension
    strcat(completePath,".txt");
    // Display the complete path to the user
    printf("\nThe path to the file created is:\n%s\n",completePath);

    //Create the file and open it in append mode
    file2WriteRead = fopen(completePath, "a+");

    /* Create the fileif it doesn`t exist then write the users message to it and then finally display its content when the file pointer isn`t null */
    if(file2WriteRead != NULL)
    {
        printf("\nPlease wait...........\nCreating/locating file\n");

        //Inform the user that the file has been successfully created located
        printf("\nThe file \'%s\' has been successfully created or located.\n\n",fileName);
        // write the users messge to the file
        for(n=0; n < strlen(userMessage);n++)
        {
            fputc(userMessage[n],file2WriteRead);
        }
        fputc('\n',file2WriteRead);
        //Got to the beginning
        rewind(file2WriteRead);
        //Read and display the contents of the file
        printf("\nContents of the file\n");
        printf("\n------------------------\n");
        while(!feof(file2WriteRead))
        {
            printf("%c",fgetc(file2WriteRead));
        }
        printf("\n------------------------");
        //we`re through working with the file close it
        fclose(file2WriteRead);
        printf("\n\nSuccessfully completed writing and reading from the file.""\nExiting the program\n");
    }
    else
    {
        //inform failed operation
        printf("\n------------------------");
        printf("Sorry the files was not found.\nPlease check and confirm that the path you entered is correct and that you have permission to access it\n");
        printf("\n------------------------");
        //Terminate the application
        exit(1);
    }

    return 0;
}
