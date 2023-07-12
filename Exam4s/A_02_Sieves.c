#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sieves(int num)
{
    int a[(num-2)];
    for(int i=2; i<=num; i++)
        a[i-2] = i;
    
    for(int i = 2; i<=sqrt(num); i++)
        for(int j = 0; j<=num; j++){
            if(a[j]==1)
                continue;
            if(a[j]==i)
                continue;
            if(a[j]%i==0)
                a[j] = 0;
        }
    for(int i = 0; i<num; i++)
        if(a[i]!=0)
            printf("\n %d",a[i]);
}

int main()
{
    sieves(25);
    return 0;
}