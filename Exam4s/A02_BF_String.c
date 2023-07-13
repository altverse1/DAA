#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int searchstring(char string[], char pattern[], int s, int p)
{
    int j;
    for(int i = 0; i<s-p; i++)
    {
        j = 0;
        while(j<p && pattern[j]==string[j+i])
            j=j+1;
        if(j==p)
            return i;
    }
    return -1;
}

int main()
{
    char string[100] = "the_quick_brown_fox_jumps_over_the_lazy_dog";
    char pattern[25] = "cat";
    int s = strlen(string);
    int p = strlen(pattern);
    int status = searchstring(string,pattern,s,p);
    if(status==-1)
        printf("\nPattern not found");
    else
        printf("\nPattern found at: %d",status);

    return 0;
}