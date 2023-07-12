#include <stdio.h>
#include <stdlib.h>

int seqsearch(int a[], int n, int search)
{
    int i;
    for(i = 0; i<n; i++)
        if(a[i]==search)
            return i;

    return -1;
}

int main()
{
    int arr[] = {1,6,2,8,3,9,4};
    int n = sizeof(arr)/sizeof(int);
    int response = seqsearch(arr, n, 3);
    if(response == -1)
        printf("Not there.");
    else
        printf("Element found at index %d", response);
    return 0;
}