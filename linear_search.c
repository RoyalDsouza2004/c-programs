#include<stdio.h>
#include<stdlib.h>
void main()
{
    int array_size , search_element ;

    printf("enter the size of the array: ");
    scanf("%d" , &array_size);
    int array[array_size];

    //getting element for an array
    printf("enter elements one by one:\n");
    for (int i = 0; i < array_size ; i++)
        scanf("%d" , &array[i]);
    
    printf("element to be searched: ");
    scanf("%d" , &search_element);

    //implimenting linear search algorithm
    for (int i = 0; i < array_size ; i++)
    {
        if(array[i] == search_element)
        {
             printf("element found @ %d " , i+1);
             exit(0); //terminates the application
        }
    }
    printf("Element not found ");

}