/*
Problem: you are given a number, and you have to extract the key by finding the difference between the sum of the even and odd numbers of the input.
Test Case :
Input : 24319587
Output :  11
Explanation : 
    odd terms : 3 + 1 + 9 + 5 + 7 = 25
    even terms : 2 + 4 + 8 = 14
    output : 11 (25-14)
 */

#include<stdio.h>
#include<math.h>
void main()
{
    long number ;
    int even=0 , odd=0;
    printf("Input: ");
    scanf("%ld" , &number);

    while(number != 0)
    {
        int value = number % 10 ;
        number = number / 10 ;

        value % 2 ? (even = even + value) : (odd = odd + value) ;
    }

    printf("Output: %d" , even - odd);
}