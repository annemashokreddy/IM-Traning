#include<stdio.h>
int main(){
    int n,m,i,j,A[100],B[100],*C[100];
    printf("enter the size of A array:\n");
    scanf("%d",&n);
    printf("Elements in the array A are:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",(A+i));
        *(C+i)=A+i;
        
    }
    printf("Enter the size of B array:\n");
    scanf("%d",&m);
    printf("enter the elements for B array :\n");
    for(j=0;j<m;j++)
    {
        scanf("%d",(B+j));
        *(C+i+j)=B+j;
    }
    for (i=0;i<(n+m);i++){
        printf("%d\t",*(C[i]));
    }
return 0;
}
