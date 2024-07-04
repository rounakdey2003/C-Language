// 0,1,1,2,3,5,8,
#include<stdio.h>
#include<conio.h>
void isfibo(int n)
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
void main()
{
    int n;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    isfibo(n);
    getch();
}
