// without while

#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    printf( num < 0 ?"number %d negative number" : num > 0 ? "number %d is positive number" : "number is zero" , num);
    return 0;
}

// using while statement

#include<stdio.h>
int main()
{
    int num;
    char choice ;
    do
    {
        printf("enter the number: ");
        scanf("%d", &num);
        printf( num < 0 ?"number %d negative number" : num > 0 ? "number %d is positive number" : "number is zero" , num);
        printf("\nWant to check more ?\n\ta)[Y]es \n\tb)[N]o \nenter the choice: ");
        choice = getc(stdin);
        choice = getc(stdin);
    }while(choice == 'Y' || choice == 'y');
    return 0;
}