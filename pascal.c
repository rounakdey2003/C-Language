#include<stdio.h>
int main()
{
    int n;
    printf("Enter the maximum number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int s=1;s<=i;i--)
        printf(" ");
        for(int j=1;j<=i;i++)
        printf("%d",j);

    }
    return 0;
}