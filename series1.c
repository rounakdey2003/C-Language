// s = 1^2 + 2^2 + 3^2 + 4^2 .... n^2
#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int n,i,s=0;

	printf("\n Enter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s+pow(i,2);
		//printf("%d^2 + ",i);
	}
	printf("sum = %d",s);
	getch();
}
