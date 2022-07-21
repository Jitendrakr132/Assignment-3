#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the characater");
    scanf("%c",&ch);
    if(ch>=97&&ch<=122)
        printf("Lower case");
    else if(ch>=65&&ch<=90)
        printf("Upper case");
    else
        printf("digit");
}
