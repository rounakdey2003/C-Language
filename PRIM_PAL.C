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
int rev(int r)
{
	int i,rev=0,rem;
	i = r;
	while(r!=0)
	{
		rem = r%10;
		rev = rev * 10 + rem;
		r = r/10;
	}
	if(i==rev)
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
		if((prime(i)==1)&&(rev(i)==1))
		{
			printf("\n%d",i);
		}
	}
	getch();
}



