#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Greaderthan number %d",a);
    else if(b>a)
        printf("Greaderthan number %d",b);
    else if(a=b)
        printf("both number are same %d",a);
}
