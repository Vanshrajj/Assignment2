#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("\n Enter three numbers:::");
    scanf("%d,%d,%d",&a,&b,&c);
    max= (a>b) ? (a>c?a:c) : (b>c?b:c);
    printf("\n Maximum number is :: %d",max);

}