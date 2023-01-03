#include<stdio.h>  
int main()   
{   
    float P , R , T , SI ; 
    printf("enter principle,time and rate:");
    scanf("%d%d%d" , &P ,&T , &R);
    SI  = (P*T*R)/100;   
    printf("\n Simple Interest is : %f", SI);  
    return 0;  
}  