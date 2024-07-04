#include<stdio.h>
#include<conio.h>

void callval(int x, int y){
	int swap;
	swap = x;
	x = y;
	y = swap;
	printf("\nAfter swap(function), value in X: %d, Y: %d",x,y);
}
void main(){
	int x,y;
	clrscr();
	printf("Enter the first number: ");
	scanf("%d",&x);
	printf("Enter the second number: ");
	scanf("%d",&y);
	printf("\nBefore swap, value in X: %d, Y: %d",x,y);
	callval(x,y);
	printf("\nAfter swap, value in X: %d, Y: %d",x,y);
	getch();
}