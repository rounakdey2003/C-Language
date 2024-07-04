// scan a string from the user. Display the first character
// in the first line, first two characters in the second line,
// first three characters in the third line and so on.

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[30];
	int i,j;
	clrscr();
	printf("\nEnter a string : ");
	gets(str);

	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<=i;j++)
			printf("%c",str[j]);
		printf("\n");
	}

	getch();
}
