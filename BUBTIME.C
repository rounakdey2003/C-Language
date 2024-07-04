#include<stdio.h>
#include<conio.h>
#include<time.h>

void main(){
	int arr[50],num,i,j,sw;
	time_t t1,t2;
	long int t;
	clrscr();
	t1 = time(NULL);
	printf("Enter the total elements: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter %d element: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=num-1;i++){
		for(j=0;j<num-i-1;j++){
			if(arr[j]>arr[j+1]){
				sw=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=sw;
			}
		}
	}
      printf("\nElement after sort: ");
      for(i=0;i<num;i++){
	printf("%d, ",arr[i]);
      }
      t2 = time(NULL);
      printf("\nTime required: %ld seconds",t2-t1);
	getch();
}
