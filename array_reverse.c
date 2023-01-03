#include<stdio.h>
int main()
{
    int size ,temp , idx;
    scanf("%d" , &size);
    int arr[size];

    int s = size ;
    for(idx = 0 ; idx < size ; idx++)
        scanf("%d" , &arr[idx]);
    for(idx = 0 ; idx < s ; idx++)
    {
        temp = arr[idx];
        arr[idx] = arr[s-1] ;
        arr[s-1] = temp;
        s--;
    }

    for(idx = 0 ; idx < size ; idx++)
        printf("%d\t" , arr[idx]);

    return 0;
}
