#include <stdio.h>

int main()
{
    long int num , reverse = 0 ;
    printf("enter a value : ");
    scanf("%ld", &num);
    while(reverse = reverse * 10 + num % 10 , num/=10);
    printf("the reversed value is %ld\n" , reverse );
    return 0;
}
