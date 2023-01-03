/* program to split a given number into two parts 
from the given position and add that two parts and print the result 

Example:
    if 3434 is given and the position to split that number is given as 2 
    from the user then it should print the result as 
    first = 34 
    second = 34 
    result = 68
*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    long long num , copy , first , second=0 ,res=0 , a[50] ;
    int i , n = 0 , div ;
    do
    {
        printf("Enter a valid number: " );
        scanf("%llu" , &num);
    }while(num==0); // check if number is 0 if so then tell user to re-enter the number

    printf("enter a number from which it has to be divided: ");
    scanf("%d",&div);
    copy = num ;

    // getting the value of n
    while (num != 0) 
    {
        num /= 10 ;
        n++ ;
    } 
    
    if (div > n )
    {
        printf("Results = %d\n",copy);
        exit(0);
    }   // if dividable number is more than length of number then print the same number and exit the program


    // storing all digits in array one by one
    for(i=n-1;i>=0;i--)
    {
        a[i] = copy % 10 ;
        copy = copy / 10 ;
    }

    // determination of first part 
    for(i=0;i<div-1;i++)
    {
        a[i+1] = ( a[i] * 10 ) + a[i+1] ;
        a[i] = 0 ; 
    }
    first = a[div-1] ;

    // determination of second part 
    if(div == n)
    {
        second = 0 ;
    }
    else
    {
        for(i=div;i<n-1;i++)
        {
            a[i+1] = ( a[i] * 10 ) + a[i+1] ;
            a[i] = 0 ;
        }
        second = a[n-1] ;
    }
    
    // results for the number
    res = first + second ;
    printf("Result of the given command is:-\n%llu + %llu = %llu " , first , second , res);
}