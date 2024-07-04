#include<stdio.h>
#include<conio.h>
void sqr(int,int);
void main()
{
	int n,i,j;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	sqr(i,j);
	getch();
}
void sqr(int i,int j)
{
	if(i==0)
		return;
	else
	{
		printf("%5d",i*j);

	}
}