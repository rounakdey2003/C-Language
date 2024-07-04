#include<stdio.h>
#include<conio.h>
#include<time.h>

void main(){
	int arr[50],num,i,j,pos,sw;
	time_t t1,t2;
	long int t;
	clrscr();
	t1 = time(NULL);
	printf("Enter the total number of elements: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("\nEnter %d element: ",i);
		scanf("%d",&arr[i]);
		}
		for(i=0;i<num-1;i++){
			pos=i;

			for(j=i+1;j<num;j++){
				if(arr[pos]>arr[j])
				pos=j;
				}
				if(pos!=i){
					sw=arr[i];
					arr[i]=arr[pos];
					arr[pos]=sw;
					}
			}
	printf("Element after sorting: ");
	for(i=0;i<num;i++){
		printf("%d, ",arr[i]);
		}
	t2 = time(NULL);
	printf("\nTime required: %ld seconds",t2-t1);
	getch();
}
