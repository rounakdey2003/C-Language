#include<stdio.h>
#include<math.h>
int main()
{
	int s,i,d,n;
	//clrscr();
	printf("\nThe three digit armstrong numbers are ....\n\n");
	for(i=100;i<=999;i++)
	{
		s=0;
		n=i;
		while(n>0)
		{
			d=n%10;
			s=s+pow(d,3);
			n=n/10;
		}
		if(s==i)
		{
			printf("%5d",s);
		}
	}
	return 0;
}