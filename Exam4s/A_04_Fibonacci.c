#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int num = 15;
    for(int i=0; i<num; i++)
        printf("%d ",fib(i));
    return 0;
}