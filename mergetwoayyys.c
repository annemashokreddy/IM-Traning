#include<stdio.h>
int main(){

    int n,m,i,A[20],B[20], *C;

    printf("Enter size of A Array: \n");

    scanf("%d",&n);

    printf("Enter elements for A array: \n");

    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        C++;
    }   
    C=&A[0];
    printf("\n Element in array are :\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",(*C));
        C++;
    }
    printf("Enter size of B Array: \n");

    scanf("%d",&m);

    printf("Enter elements for B array: \n");

    for (i=0;i<m;i++)

    {
        scanf("%d",&B[i]);
        C++;
    }   
    C=&B[0];
    printf("\n Element in array are :\n");
    for(i=0;i<m;i++)
    {
        printf("\t%d",(*C));
        C++;
    }
return 0;
}
