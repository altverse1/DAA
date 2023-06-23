#include <stdio.h>
#include <stdlib.h>

#define MAXs 10

void merge(int l[], int r[], int a[], int l_size, int r_size)
{
    int i = 0, j = 0, k = 0;
    while(i<l_size && j<r_size)
    {
        if(l[i]<=r[j]){
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while(i<l_size)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while(j<r_size)
    {
        a[k] = r[j];
        j++;
        k++;
    }
}

void mergesort(int a[], int n)
{
    if(n<=1) return;

    int mid = n/2;
    int left[mid], right[n-mid];
    for (int i = 0; i<mid; i++)
        left[i] = a[i]; //copying a[0......mid-1] to left[]
    for(int i = mid; i<n; i++)
        right[i-mid] = a[i]; //copying a[mid......n-1] to right[]
    
    mergesort(left, mid); //calling mergesort recursively splitting left into even more subdivisions
    mergesort(right, n-mid); //doing the above, but for right.

    merge(left,right,a,mid,n-mid); //function calls to merge the array by comparing elements atomically
}

int main()
{
    int arr[] = {5, 2, 8, 12, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr,size);
    printf("[");
    for(int i = 0; i<size; i++)
        printf("%d ", arr[i]);
    printf("]");
    return 0;
}