#include<stdio.h>
void main()
{
    int y;
    printf("\n Enter Year:::");
    scanf("%d",&y);
    ((y%4==0 && y%100!=0) || (y%400==0)) ? printf("\n It is a Leap Year") : printf("\n It is not a Leap Year");
}