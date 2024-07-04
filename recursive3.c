#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int isPalindromeRec(char str[],int i,int j)	//(char str[],i,j)
{                                                  //if(i>j) return 1;
						//else if(i<=j && str[i]!=str[j]) return 0;
						//else if(i<=j && str[i]==str[j]) return isPalindrome(str,i+1,j-1)
	if(i>j){
		return 1;
		}
	else {
		if(i<=j && str[i]!=str[j])
		{
			 return 0;
		}
		else if(i<=j && str[i]==str[j])
		{
			 return isPalindrome(str,i+1,j-1);
		}
		return 1;
	}
}
int isPalindrome(char st[]){
	int n = strlen(st);
	if(n==0)
		return 1;

		return isPalindromeRec(st,0,n-1);
}
int main()
{
	char st[10];
	clrscr();
	printf("Enter a string: ");
	scanf("%s",&st);
	if(isPalindrome(st)==1)
		printf("\nYes");

	else
		printf("\nNo");

	getch();

    return 0;

}