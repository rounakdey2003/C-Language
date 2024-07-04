#include<stdio.h>
#include<conio.h>
int isprime(int i)
{
	int j,a=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
			a=a+1;
	}
	if(a==2)
		return 1;
	else
		return 0;
}
void main()
{
	int l,u,i;
	clrscr();
	printf("\nEnter the lower range and the upper range: ");
	scanf("%d %d",&l,&u);
	for(i=l;i<=u;i++)
	{
		if(isprime(i)==1)
		{
			printf("%5d",i);
		}
	}
	getch();
}

