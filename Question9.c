#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&c<a)
        printf("A great than %d",a);
    else if(b>c&&b>a)
        printf("B great than %d",b);
    else if(c>b&&a<c)
        printf(" c great than %d",c);
    else if((a==b)>c||a<(b==c)||b<(a==c))
        printf("Both appears numbers same");
}
