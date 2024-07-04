// s=1^1 + 2^2 + 3^3 + 4^4 + 5^5 + .... + n^n
#include<stdio.h>
#include<conio.h>
#include<math.h>
int series2(int);
main()
{
    int n,i;
    printf("\nEnter any number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
        printf("%d^%d + ",i,i);
    }
    printf("\b\b = %d",series2(n));
    getch();
}
int series2(int x)
{
    if(x==1)
        return(pow(x,x));
    else
        return(pow(x,x)+series2(x-1));
}
