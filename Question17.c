#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b>b)&&(b+c>a)&&(c+a>b))
        printf("Triangle valid");
        else
            printf("triangle Not valid");


}

