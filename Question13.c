#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%3==0&&n%2==0)
        printf("Number is divisible");
    else
        printf("Not divisible number");
}
