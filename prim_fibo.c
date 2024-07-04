#include<stdio.h>
#include<conio.h>
int prime(int p)
{
	int i,sum=0;
	for(i=1;i<=p;i++)
	{
		if(p%i==0)
			sum = sum + 1;
	}
	if(sum==2)
		return 1;
	else
		return 0;
}
/*
int fibo(int f)
{
    int sum,n1=0,n2=1;
    sum=n1+n2;
    while(sum<=f)
    {
	n1=n2;
	n2=f;
	sum=n1+n2;
	return sum;
    }
}
*/

int fibo(int x)
{
	if(x==1)
		return 1;
	else if(x==2)
		return 1;
	else
		return fibo(x-2)+fibo(x-1);
}

void main()
{
	int l,u,j;
	clrscr();
	printf("Enter the lower and the upper range: ");
	scanf("%d%d",&l,&u);
	printf("\nThe fibonacci series which are primes are....\n\n");
	for(j=1;fibo(j)<=u;j++)
	{
		if(fibo(j)>=l && fibo(j)<=u && prime(fibo(j)))
		{
			printf("\t%d",fibo(j));
		}
	}
	getch();
}

