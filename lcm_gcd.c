#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,x,y,l,g,i;
	clrscr();
	printf("\nEnter first number : ");
	scanf("%d",&a);
	printf("\nEnter second number : ");
	scanf("%d",&b);
	x=a;
	y=b;
	while(y!=0)
	{
		i=y;
		y=x%y;
		x=i;
	}
	g=x;
	l=(a*b)/g;
	printf("\nGCD of the numbers %d and %d is = %d",a,b,g);
	printf("\nLCM of the numbers %d and %d is = %d",a,b,l);

	getch();
}