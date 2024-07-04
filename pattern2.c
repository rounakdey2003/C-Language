#include<stdio.h>
int main()
{
	int a,j,i;
	printf("\nEnter the max limit : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
			printf("%5d",i);
		printf("\n");
	}
	return 0;
}
