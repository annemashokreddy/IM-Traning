#include<stdio.h>
#include<string.h>
int main(void)
{
    char strg[25];
    int leng, i;

    printf("reversing a given string \n ");
    scanf( "%s", strg );

    leng = strlen(strg);
    for(i = leng - 1; i >= 0; i--) 
    {
        printf("%c", strg[i]);        
    }
    return 0;
}
