#include<stdio.h>
#include<string.h>
int main(void)
{
    char strg[25];
    int leng, i;

    printf("Program for reversing a given string \n ");
    scanf( "%s", strg );

    // This will find the length of your string with the help of strlen() function of string.h header file
    leng = strlen(strg);
    for(i = leng - 1; i >= 0; i--) 
    {
        printf("%c", strg[i]);        
    }
    return 0;
}
