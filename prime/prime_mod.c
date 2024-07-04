#include <stdio.h>
#include "prim.h"
int main()
{
    int l,u,i;
    printf("\nEnter the lower range and the upper range: ");
    scanf("%d %d",&l,&u);
    for(i=l;i<=u;i++)
    {
        if(isprime(i)==1)
        {
            printf("%5d",i);
        }
    }
    return 0;
}

