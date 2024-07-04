#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,l,u,a;
	clrscr();
	printf("\nEnter the lower range and the upper range: ");
	scanf("%d %d",&l,&u);
	for(i=l;i<=u;i++)
	{
		a=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			a=a+1;
		}
		if(a>2)
			printf("%5d",i);
	}

	getch();
}
