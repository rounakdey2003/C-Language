#include<stdio.h>
#include<conio.h>
int main()
{
    int num,num1,flag=0,r;
    printf("Enter any number: ");
    scanf("%d",&num);
    num1 = num;
    while(num!=0)
    {
        r=num%10;
        if(r==0)
        {
            flag=1;
            break;
        }
        num = num/10;
    }
    if(flag==0)
        printf("The number is not a duck number");
    else
        printf("The number is a duck number");
    return 0;
}
