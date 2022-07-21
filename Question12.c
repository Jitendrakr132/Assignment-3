#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the characater");
    scanf("%c",&ch);

    if(ch>='a'&&ch<='z')
        printf("Lower case");
    else if(ch>='A'&&ch<='Z')
        printf("Upper case");
}
