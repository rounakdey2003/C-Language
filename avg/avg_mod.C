#include<stdio.h>
#include "avg.h"
int main()
{
    int num1;
    float average1;
    printf("\nEnter how many numbers do you want? :  ");
    scanf("%d",&num1);
    printf("\nThe average of the numbers are %0.2f",avg(num1));
    getch();
    return 0;
}