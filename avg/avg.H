#include <stdio.h>
#include <stdlib.h>
/* float avg(int num1)
{
    int num = num1 ,sum=0,i,arr[10];
    float average;
    for(i=0;i<num1;i++)
    {
	printf("\nEnter number %d: ",i+1);
	scanf("%d",&arr[i]);
	sum=sum+arr[i];
    }
    average=sum/(float)num;
    return average;
} */

 float avg(int num1)
{
    int num = num1 ,sum=0,i;
    int *arr;
    arr=(int *) malloc(num1*sizeof(int));
    float average;
    for(i=0;i<num1;i++)
    {
	printf("\nEnter number %d: ",i+1);
	scanf("%d",arr+i);
	sum=sum+*(arr+i);
    }
    average=sum/(float)num;
    return average;
}