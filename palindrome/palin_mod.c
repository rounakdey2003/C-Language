#include<stdio.h>
#include "palin.h"
int main()
{
    int i, range;
    printf("Enter the max range: ");
    scanf("%d",&range);
    printf("Palindrome numbers are: \n");
    for(i=10;i<=range;i++)
        if(palin(i) == 0)
            printf("%d\t",i);
    return 0;
}
