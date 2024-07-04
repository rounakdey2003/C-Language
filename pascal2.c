void pascal_triangle()
{
	int i,j,a[N+2][N+2];
	gotoxy(10,10);
	printf("The Pascal's Triangle is as follows....\n\n\t\t");
	for (i=0;i<N+2;i++)
	{
		for (j=0;j<=i;j++)
		{
			if (i==j || j==0)
			{
				a[i][j]=1;
				printf("%4d",a[i][j]);
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
				printf("%4d",a[i][j]);
			}
		}
		printf("\n\n\t\t");
	}