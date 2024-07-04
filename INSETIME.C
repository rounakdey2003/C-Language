#include<stdio.h>
#include<conio.h>
#include<time.h>

void main(){
	int arr[50],i,j,num,sw;
	time_t t1,t2;
	clrscr();
	t1 = time(NULL);
	printf("Enter the total elements: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter %d element: ",i);
		scanf("%d",&arr[i]);
	}
		for(i=1;i<num;i++){
			sw=arr[i];
			j=j-1;
			while((sw<arr[j])&&(j>=0)){
				arr[j+1]=arr[j];
				j=j-1;
			}
			arr[j+1]=sw;
		}
	printf("\nAfter sorting: ");
	for(i=0;i<num;i++){
		printf(" %d",arr[i]);
	}
	t2 = time(NULL);
	printf("\nTime required: %d seconds",t2-t1);
	getch();

}