#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int insertsort(int a[], int n)
{
    int i,j,v;
    for(int i=1; i<n-1; i++)
    {
        v = a[i];
        j = i-1;
        while(j>=0 && a[j]>v)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
    }
}


int main()
{
    int arr[] = {5,43,12,2,16,8,9,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertsort(arr, size+1);
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    return 0;
}