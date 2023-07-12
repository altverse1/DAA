#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isunique(int *a, int n)
{
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
            if(a[i]==a[j])
                return false;
    return true;

}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    printf("\nEnter elements of array: ");
    for(int i = 0; i<n; i++)
        scanf("%d",&arr[i]);
    if(isunique(arr, n))
        printf("\nYes it is unique.");
    else
        printf("\nNo it is not unique");
    return 0;
}