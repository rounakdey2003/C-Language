#include "stdio.h"
int main()
{
	int i,j,l,u,a;
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
		if(a==2)
			printf("%5d",i);
	}
	return 0;
}
