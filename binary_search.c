#include <stdio.h>
#include <stdlib.h>

int binsearch(int a[], int l, int r, int find)
{
    if (r >= l)
    {
        int mid = (l + r)/ 2;
        if (a[mid] == find)
            return mid;
        if (a[mid] < find)
            return binsearch(a, mid + 1, r, find);
        else
            return binsearch(a, l, mid - 1, find);
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 7, 9, 16, 25, 54, 76};
    int find = 25;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Element found at index %d\n", binsearch(arr, 0, size-1, find));
    return 0;
}