#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d" , &n);

    for(int i=n ; i>0 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d  ", j);
        }
        printf("\n");
    }
}

/* PATTERN

5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1 
        1

        */
