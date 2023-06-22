#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char string[100], pattern[25];
    int i, j;
    bool found = false;
    printf("Enter the string: ");
    scanf("%s", string);
    printf("\nEnter the patter to match to: ");
    scanf("%s",pattern);
    
    for(i = 0; i<=strlen(string)-strlen(pattern); i++)
    {
        j=0;
        while(j<strlen(pattern)&&pattern[j]==string[i+j])
                j++;
        if(j==strlen(pattern)){
            found = true;
            break;
        }
    }

    if(found)
        printf("The index is %d",i);
    else
        printf("Not Found!");

    return 0;
}