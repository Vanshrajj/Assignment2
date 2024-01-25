#include<stdio.h>
void main()
{
    int m,tp1,tp2,mtc;
    printf("\n Enter Meal cost:::");
    scanf("%d",&m);
    tp1=(m*15)/100;
    tp2=(m*8)/100;
    mtc=m+tp1+tp2;
    printf("\n Meal's Total Cost is %d",mtc);

}
