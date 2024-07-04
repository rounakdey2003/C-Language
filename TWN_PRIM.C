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
void main()
{
	int l,u,i;
	clrscr();
	printf("Enter the lower and the upper range: ");
	scanf("%d%d",&l,&u);
	for(i=l;i<=u;i++)
	{
		if((prime(i)==1)&&(prime(i-2)==1))
		{
			printf("\n%d\t%d",i-2,i);
		}
	}
	getch();
}



