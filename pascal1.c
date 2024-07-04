/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int r,i,j;
    int arr[10][20];
    printf("Enter numbers of rows: ");
    scanf("%d",&r); 
    for(i=0;i<r;i++)
    {
        for(j=0;j<(2*r)-1;j++)
        {
            if(j<r-i)
                arr[i][j]=32;
            else if(j>r+i)
                arr[i][j]=32;
            else if(j>=r-i && j<=r+i)
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }   
    }
    for(i=0;i<r;i++)
    

    return 0;
}
