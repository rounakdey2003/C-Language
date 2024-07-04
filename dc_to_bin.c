#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,r,b=0,j=1;
	printf("Enter number = ");
	scanf("%d",&n);
	d=n;
	while(d>0)
	{
		r=d%2;
		b=b+(r*j);
		d=d/2;
		j=j*10;
	}
	printf("Binary of the number : %d is = %d",n,b);
	getch();
}
