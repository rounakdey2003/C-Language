#include "stdio.h"

void sort(int arr[], int size) {

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void display(int arr[], int size){

    printf("Sorted array: \n");
    for(int k = 0; k < size; ++k){

        printf("%d = %d\n ",k, arr[k]);
    }
}
int main(){

    int size,i;
    printf("Enter the max size: ");
    scanf("%d",&size);

    printf("Enter the array: ");
    int arr[size];

    for(i = 0; i <= size; i++){

        scanf("%d",&arr[i]);
    }
    sort(arr,size);
    display(arr,size);

    return 0;
}