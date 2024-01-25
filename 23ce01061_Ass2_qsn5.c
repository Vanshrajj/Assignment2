#include<stdio.h>
void main()
{
    int k;
    printf("\n Enter Number::");
    scanf("%d",&k);
    ((k & 1)==0) ? printf("\n Even") : printf("\n Odd");
}