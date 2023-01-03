#include<stdio.h>
#include<stdlib.h>

int compare(const void *num1 , const void *num2)
{
    return *(int*)num1  - *(int*)num2 ;
}
    
int main()
{
    int num ;
    scanf("%d" , &num);
    int arr[num];
    for(int i =0 ; i<num ; i++)
        scanf("%d" , &arr[i]);
    
    qsort(arr , num , sizeof(int) , compare);

    for(int i =0 ; i<num ; i++)
        printf("%d " , arr[i]);
}