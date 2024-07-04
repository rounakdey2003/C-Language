// 0,1,1,2,3,5,8,
#include<stdio.h>
#include<conio.h>
void main()
{
    int f,n,n1=0,n2=1;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    printf("%5d\t%5d",n1,n2);

    f=n1+n2;
    while(f<=n)
    {
	printf("\t%5d",f);
	n1=n2;
	n2=f;
	f=n1+n2;
    }
    getch();
}
