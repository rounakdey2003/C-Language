// 0,1,1,2,3,5,8,
#include<stdio.h>
#include<conio.h>
void main()
{
    int f,n,n1=0,n2=1,i=0;
    printf("\nEnter value of n : ");
    scanf("%d",&n);
    f=n1+n2;
    while(i<=n)
    {
	for(i=n1+1;i<n2;i++)
		if(i<=n)
			printf("\t%5d",i);
		else
			exit(0);
	n1=n2;
	n2=f;
	f=n1+n2;
    }
}
