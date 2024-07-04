#include<stdio.h>
int main()
{
	int a,j,i;
	printf("\nEnter the max limit : ");
	scanf("%d",&a);
	for(i=1;i<=a;)
	{
		for(j=1;j<=i;)
        {
			printf("%5d",j);
			j++;
        }
		printf("\n");
		i++;
	}
	return 0;
}
