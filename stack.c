#include "stdio.h"
#include "stdlib.h"
#define MAX 10
int count = 0;

struct stack{
    int arr[MAX];
    int address;
};
typedef struct stack st;

void create(st *add){
    add->address = -1;
}
int full(st *add){
    if(add->address == MAX - 1)
        return 1;
    else
        return 0;
}
int empty(st *add){
    if(add->address == 1)
        return 1;
    else
        return 0;
}
void push(st *add, int new) {
    if (full(add))
        printf("Stack is full");
    else {
        add->address++;
        add->arr[add->address] = new;
    }
    count++;
}
void pop(st *add) {
    if (empty(add))
        printf("Stack is empty");
    else {
        printf("Item popped: %d", add->arr[add->address]);
        add->address--;
    }
    count--;
    printf("\n");
}
void print(st *add){
    printf("Stack: ");
    for(int i = 0;i<count;i++){
        printf("%d", add->arr[i]);
    }
    printf("\n");
}
int main(){
    st *add = (st *) malloc(sizeof (st));
    create(add);
    push(add,1);
    push(add,2);
    push(add,3);
    push(add,4);
    print(add);
    pop(add);
    printf("After popping!!\n");
    print(add);
    return 0;
}