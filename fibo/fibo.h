#include<stdio.h>
int isfibo(int n)
{
    int f,n1=0,n2=1;
    printf("%5d\t%5d",n1,n2);

    f=n1+n2;
    while(f<=n)
    {
        printf("\t%5d",f);
        n1=n2;
        n2=f;
        f=n1+n2;
    }
}

