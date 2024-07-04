#include<stdio.h>
int main()
{
    int n,d,x,s=0,r=0,y,t,v,m;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    d=n;
    while(d>0) // for sum of digits
    {
        x=d%10;
        s=s+x;
        d=d/10;
    }
    t=s;
    printf("\nSum of digits = %d",t);
    while(t>0)
    {
        y=t%10;
        r=r*10+y;
        t=t/10;
    }
    v=r;
    printf("\nReverse of (Sum of digits) = %d",v);
    m=t*v;
    if(m==d)
        printf("\nIt's a magic number");
    else
        printf("\nIt's not a magic number");
    return 0;
}
