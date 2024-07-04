// s = 1^2 + 2^2 + 3^2 + 4^2 .... n^2
#include<stdio.h>
#include<math.h>
#include<conio.h>
int series1(int);
main()
{
	int n,i,s=0;

	printf("\nEnter any number : ");
	scanf("%d",&n);
	printf("\nSum = %d",series1(n));
	getch();
}
int series1(int x)
{
	if(x==1)
		return (pow(x,2));
	else
		return (pow(x,2)+series1(x-1));
}
