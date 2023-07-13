#include <stdio.h>
#include <stdlib.h>

void insertsort(int a[], int n)
{
    for(int i =1; i<n; i++)
    {
        int select = a[i];
        int j = i-1;
        while(j>=0 && a[j]>select)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=select;
    } 
}

int main()
{
    int arr[] = {1,6,2,8,3,9,4};
    int n = sizeof(arr)/sizeof(int);
    insertsort(arr, n);
    for(int i = 0; i<n; i++)
        printf("%d ", arr[i]);
    return 0;
}