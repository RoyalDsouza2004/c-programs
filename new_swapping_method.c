//new swapping method

#include<stdio.h>
int main()
{
    int size ,temp , idx;
    scanf("%d" , &size);
    int arr[size];

    int s = size ;
    for(idx = 0 ; idx < size ; idx++)
        scanf("%d" , &arr[idx]);

    for(int l_idx = 0 , r_idx = size -1 ; l_idx < r_idx ; l_idx++ , r_idx-- )
        arr[l_idx] = (arr[l_idx]+arr[r_idx]) - (arr[r_idx] = arr[l_idx]);

    for(idx = 0 ; idx < size ; idx++)
        printf("%d\t" , arr[idx]);

    return 0;
}