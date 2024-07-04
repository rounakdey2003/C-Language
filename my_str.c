
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char ch,str[50];
	int a,v_cnt=0,c_cnt=0,d_cnt=0,sp_cnt=0,bs=0,uc=0,lc=0,w=0;
	printf("Enter a sentence .... ");
	gets(str);
	fflush(stdin);
	for(a=0;str[a]!='\0';a++)
	   {
	     if((str[a]>=65 && str[a]<=90) || (str[a]>=97 && str[a]<=122))
	     {
	       if(str[a]=='A' || str[a]=='E' || str[a]=='I' || str[a]=='O' || str[a]=='U' || str[a]=='a' || str[a]=='e' || str[a]=='i' || str[a]=='o' || str[a]=='u')
		 v_cnt++;
	       else
		 c_cnt++;
	     }
	     if(str[a]>=48 && str[a]<=57)	 //str[a]>='0' && str[a]<='9'
	       d_cnt++;
	     if(str[a]>='A' && str[a]<='Z')
	       uc++;
	     if(str[a]>=97 && str[a]<=122)      //str[a]>='a' && str[a]<='z'
	       lc++;
	     if(str[a]==' ')                   //str[a]==32
	       bs++;
	     if(bs+lc==w || bs+uc==w || bs+d_cnt==w || bs+sp_cnt==w)
		w++;
	   }
	printf("\nNumber of vowels = %d",v_cnt);
	printf("\nNumber of consonants = %d",c_cnt);
	printf("\nNumber of digits = %d",d_cnt);
	printf("\nNumber of upper-case letters = %d",uc);
	printf("\nNumber of lower-case letters = %d",lc);
	printf("\nNumber of blank-spaces = %d",bs);
	printf("\nNumber of special characters = %d",strlen(str)-(bs+v_cnt+c_cnt+d_cnt));
	sp_cnt=strlen(str)-(bs+v_cnt+c_cnt+d_cnt);
	printf("\nNumber of words = %d",w);
	return 0;
}
