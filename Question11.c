#include<stdio.h>
int main()
{
    int Eng,Hnd,mth,sc,c;
    printf("\nEnter the Candidate marks of Eng: ");
    scanf("%d",&Eng);
    printf("\n Enter the Candidate marks of Hnd: ");
    scanf("%d",&Hnd);
    printf("\n Enter the Candidate marks of mth: ");
    scanf("%d",&mth);
    printf("\n Enter the Candidate marks of sc: ");
    scanf("%d",&sc);
    printf("\n Enter the Candidate marks of c: ");
    scanf("%d",&c);
    if((Eng>=33)&&(Hnd>=33)&&(mth>=33)&&(sc>=33)&&(c>=33))
       printf("\nCandidate passed the Examination");
       else
        printf("\nCandidate faild the Examination");

}
