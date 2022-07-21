#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%5==0)
        printf("Divisible");
    else
        printf("Not Divisible");
}
