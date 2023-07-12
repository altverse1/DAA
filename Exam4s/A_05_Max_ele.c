#include <stdio.h>
#include <stdlib.h>

int getmax(int *a, int n)
{
    int max = a[0];
    for(int i = 1; i<n; i++)
        if(max<a[i])
            max = a[i];

    return max;
}

int main()
{
    int arr[] = {1,5,3,7,4,21,43,2};
    int n = sizeof(arr)/sizeof(int);
    printf("The maximum number is: %d ",getmax(arr, n));
    return 0;
}