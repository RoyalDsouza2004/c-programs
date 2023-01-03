#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);

    for(int i=n ; i>=1 ; i--)
    {
        for(int c = 1 ; c<= n-i; c++)
            printf("  ");
        for(int j=i ; j>=1 ; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
enter a number: 5
5432154321
4321  4321
321    321
21      21
1        1
*/