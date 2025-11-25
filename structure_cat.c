//C program thata demonstrates declaring a structure
#include <stdio.h>
#include <string.h>
// Declare a category structure
struct cat
{
    char bk_name[25];
    char author[20];
    int edn;
    float price;
};
int main()
{
    // Declare variables of type cat
    struct cat book1, book2;

    // Assign details to book 1
    strcpy(book1.bk_name,"My First Book");
    strcpy(book1.author,"Author 1");
    book1.edn = 1;
    book1.price = 2500.5;

    //Read in the values of book 2 from the user
    //prompt
    printf("Enter the details of book 2 below:\n");
    printf("\nBook Name:");
    fgets(book2.bk_name,sizeof(book2.bk_name),stdin);
    book2.bk_name[strcspn(book2.bk_name,"\n")] = '0';
    printf("\nBook author: ",book2.author);
    fgets(book2.author,sizeof(book2.author),stdin);
    book2.author[strcspn(book2.author,"\n")] = '0';
    printf("\nBook Edition:",book2.edn);
    scanf("%d",&book2.edn);
    printf("\nBook Price:",book2.price);
    scanf("%f",&book2.price);

    // Display the details
    printf("\nBook 1 details are:");
    printf("\nBook Name: %s",book1.bk_name);
    printf("\nBook Author: %s",book1.author);
    printf("\nBook Edition: %d",book1.edn);
    printf("\nBook Price: %.2f\n",book1.price);
    printf("\nBook 2 details are:");
    printf("\nBook Name: %s",book2.bk_name);
    printf("\nBook Author: %s",book2.author);
    printf("\nBook Edition: %d",book2.edn);
    printf("\nBook Price: %.2f\n",book2.price);

    return 0;
}

