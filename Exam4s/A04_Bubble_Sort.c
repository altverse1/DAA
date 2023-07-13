#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortbubble(int a[], int n)
{
    for(int i = 0; i<n-1; i++)
        for(int j = 0; j<n-1-i; j++)
            if(a[j]>a[j+1])
                swap(&a[j],&a[j+1]);
}

int main()
{
    int arr[] = {1,6,2,8,3,9,4};
    int n = sizeof(arr)/sizeof(int);
    sortbubble(arr, n);
    for(int i = 0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}