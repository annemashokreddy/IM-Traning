#include <stdio.h>
int main()
{
    int n, flipNum;
    printf("Enter a number: ");
    scanf("%d", &n);
    flipNum =~n;
    printf("Actual number = %d", n);
    printf("Value after flipping the bits = %d ", flipNum);

    return 0;
}
