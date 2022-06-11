#include<stdio.h>
#include<string.h>
int main(void)
{
    char mystrg[10];
    int leng, i;

    // Printing the program name and what the program will do
    printf("Program in C for reversing a given string \n ");

    // fetch the input string from the user
    scanf( "%s", mystrg );

    // This will find the length of your string with the help of strlen() function of string.h header file
    leng = strlen(mystrg);
    for(i = leng - 1; i >= 0; i--) 
    {
        printf("%c", mystrg[i]);        
    }
    return 0;
}
