#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//int i=5;
int main(){
	static int i = 1;
	printf("%d\n",i++);
	if(i==6){
		return 0;

	}
		main();
		//return 0;
}