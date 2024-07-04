//  0,1,1,2,3,5,8,13,21,34.....fibonacci(n)
//  1,2,3,4,5,6,7,8, 9, 10....n
#include<stdio.h>
#include<conio.h>
int fibonacci(int);
void main()
{
    int n,i;
    printf("\nEnter the nth term :");
    scanf("%d",&n);
    printf("\nThe fibonacci series is ....\n");
    for(i=1;i<=n;i++)
       printf("%5d\t",fibonacci(i));

}
int fibonacci(int n)
{
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return(fibonacci(n-1)+ fibonacci(n-2));
}
