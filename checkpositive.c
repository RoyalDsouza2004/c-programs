// check number is positive or negative or zero
#include<stdio.h>
void main()
{
    int number ;
    printf("enter a number: ");
    scanf("%d", &number);
    printf(number > 0 ? "number is positive" : number < 0 ? "number is negative" : "number is zero") ;
}