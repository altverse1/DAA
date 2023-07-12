#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectsort(int a[], int n)
{
    int i, j, min;
    for(i = 0; i<n-1; i++)
    {
        min = i;
        for(j = i+1; j<n; j++)
            if(a[j]<a[min])
                min = j;
        if(min!=i)
            swap(&a[i], &a[min]);
    }
}

int main()
{
    int arr[] = {1,6,2,8,3,9,4};
    int n = sizeof(arr)/sizeof(int);
    selectsort(arr,n);
    for(int i = 0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}