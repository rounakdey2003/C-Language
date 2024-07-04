#include<stdio.h>
void getj(int i, int j);
void main()
{
    int i,n,x,j;
    printf("\nEnter the max limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	j=1;
	getj(i,j);
    }
    getch();
}
void getj(int i,int j)
{
    if(j<=i)                    // for(j=1;j<=i;j++)
    {                             // 	 printf("%5d",i);
	printf("%5d",i);
	getj(i,j+1);	     // printf("\n");

    }
    else
    {
	printf("\n");
	return;
    }
}
