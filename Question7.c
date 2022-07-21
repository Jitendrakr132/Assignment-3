#include<stdio.h>
int main()
{
    int a,b,c;
    int d;
    printf("Enter the a, b and c numbers");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        printf("Real & Distinct");
    else if(d==0)
        printf("Real & equal");
    else if(d<0)
        printf("Imaginary roots");
}
