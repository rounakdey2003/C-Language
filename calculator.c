#include<stdio.h>
int main()
{
	int a,b,n;
	char o,ch;
	ch='y';
	do

	{
		printf("\nEnter the operator from the box (+,-,*,/) : ");
		scanf(" %c",&o);
		printf("\nEnter the first input and second input resp. = ");
		scanf("%d%d",&a,&b);
		switch(o)
		{
			case '+':
				n=a+b;
				printf("\nThe sum of ( %d + %d ) = %d",a,b,n);
				break;
			case '-':
				n=a-b;
				printf("\nThe subtraction of ( %d - %d ) = %d",a,b,n);
				break;
			case '*':
				n=a*b;
				printf("\nThe multiplication of ( %d * %d ) = %d",a,b,n);
				break;
			case '/':
				n=a/b;
				printf("\nThe division of ( %d / %d ) = %d",a,b,n);
				break;
			default:
				printf("\nYou have chosen a wrong operator");
				break;
		}
		printf("\nDo you want to continue (y/n): ");
		scanf(" %c",&ch);
	} while(ch=='y'|| ch=='Y');
    return 0;
}