// s=1^1 + 2^2 + 3^3 + 4^4 + 5^5 + .... + n^n
#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,j,s=0;
	printf("\nEnter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=i;
		s=s+pow(i,j);
		printf("%d^%d + ",i,i);
	}
	printf("\b\b= %d",s);
	getch();
}
