#include "stdio.h"
#define SIZE 5

int item[SIZE], rear = -1, front = -1;

void enqueue(int n){
    if(rear == SIZE-1)
        printf("Queue is full\n");
    else{
        if(front == -1)
            front=0;
        rear++;
        item[rear]=n;
        printf("Inserted -> %d\n",n);
    }
}
void dequeue() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Deleted %d\n", item[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}
void display(){
    if(rear== -1)
        printf("Queue is empty\n");
    else{
        for (int i = front; i <= rear; i++) {
            printf("  %d",item[i]);
        }
    }
    printf("\n");
}
int main(){
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    return 0;
}