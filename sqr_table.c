#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j;
	printf("\nEnter the value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%5d",i*j);
		}

		printf("\n");
	}
	return 0;
}

