#include "stdio.h"

void callref(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int x,y;
    printf("Enter the first number : ");
    scanf("%d",&x);
    printf("Enter the second number : ");
    scanf("%d",&y);
    printf("Before swap, value in X: %d, Y: %d\n",x,y);
    callref(x,y);
    printf("After swap, value in X: %d, Y: %d\n",x,y);
    return 0;
}
