, #include<stdio.h>
#include<conio.h>
void main()
{
	int n,d,r,j=1;
	int k=0,i,b[50];
	char s;
	clrscr();
	printf("Enter number = ");
	scanf("%d",&n);
	printf("Enter the operation : ");
	scanf(" %c",&s);
	switch(s)
	{
		case 'b':
				d=n;
				i=0;
				while(d>0)
				{
					r=d%2;
					b[i++]=r;			 //	b=b+(r*j);
					d=d/2;
					j=j*10;
				}
				printf("Binary of the number : %d is = ",n);
				for(k=i-1;k>=0;k--)
				{
					printf("%d",b[k]);
				}
				break;

		 case 'o':
				d=n;
				i=0;
				while(d>0)
				{
					r=d%8;
					b[i++]=r;			 //	b=b+(r*j);
					d=d/8;
					j=j*10;
				}
				printf("Octal of the number : %d is = ",n);
				for(k=i-1;k>=0;k--)
				{
					printf("%d",b[k]);
				}
				break;


		   case 'h':
				d=n;
				i=0;
				while(d>0)
				{
					r=d%16;
					b[i++]=r;			 //	b=b+(r*j);
					d=d/16;
					j=j*10;
				}
				printf("Hexadecimal of the number : %d is = ",n);
				for(k=i-1;k>=0;k--)
				{
					if(b[k]>9)
						printf("%c",b[k]+55);
					else
						printf("%d",b[k]);
				}
				break;
	}
	getch();
}
