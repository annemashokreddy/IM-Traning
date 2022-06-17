#include<stdio.h>

int main()
{
    int i,j,n;
    printf("enter the row:");
    scanf("%d",&n);
    if(n>0)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }
    }
    printf("row is less than 0 ");
    return 0;
}
