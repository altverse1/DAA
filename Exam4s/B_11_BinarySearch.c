#include <stdio.h>
#include <stdlib.h>

int binserch(int a[], int l, int r, int search)
{
    if(r>=l){
        int mid = (l+r)/2;
        if(a[mid]==search)
            return mid;
        if(a[mid]>search)
            return binserch(a, l, mid-1, search);
        else
        return binserch(a, mid+1, r , search);
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,6,8,9,12,15}; //Arrange in ascending Order
    int n = sizeof(arr)/sizeof(int);
    int response = binserch(arr, 0, n-1, 9);
    if(response == -1)
        printf("Not there.");
    else
        printf("Element found at index %d", response);
    return 0;
}