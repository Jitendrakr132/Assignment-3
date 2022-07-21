#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if((n&1)==0)
        printf("Even number");
    else
        printf("Odd number");
}


