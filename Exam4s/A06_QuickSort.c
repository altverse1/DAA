#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

int partition(int A[], int l, int r)
{
    int p, i, j; // pivot -> p
    p = A[l];
    i = l;
    j = r + 1;

    do
    {
        do
        {
            i++;
        } while (A[i] < p);

        do
        {
            j--;
        } while (A[j] > p);
        
        if (i < j)
            swap(&A[i], &A[j]);

    } while (i < j);

    swap(&A[l], &A[j]);
    return j;
}

void quick(int A[], int l, int r)
{
    int s; // split position
    if (l < r)
    {
        s = partition(A, l, r);
        quick(A, l, s - 1);
        quick(A, s + 1, r);
    }
}

int main()
{
    clock_t start, stop;
    double time;
    int arr[] = {9, 3, 6, 1, 8, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    start = clock();
    quick(arr, 0, n - 1);
    stop = clock();
    time = ((double)stop - (double)start) / CLOCKS_PER_SEC;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nThe time taken is: %.3lf seconds", time);
    return 0;
}
