// find the largest of 4 numbers

#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter 4 numbers :");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a>b && a>c && a>d ? a : b>c && b>d ? b : c>d ? c : d ;
    printf("%d is greater");
}