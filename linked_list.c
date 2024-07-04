#include "stdio.h"
#include "stdlib.h"

struct node{

    int data;
    struct node *address;
}*list;

void create(int n);
void display();

int main(){

    int n;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("----------------------------\n");

    create(n);

    printf("----------------------------\n");

    display();

    return 0;

}

void create(int n){

    struct node *new,*temp;
    int user,i;

    list = (struct node *) malloc(sizeof (struct node));

    if (list == NULL)
        printf("Memory allocation failed");

    printf("Enter node 1: ");
    scanf("%d",&user);

    list->data=user;
    list->address=NULL;

    temp=list;
    for(i=2;i<=n;i++){

        new = (struct node *) malloc(sizeof (struct node));

        if(new==NULL)
            printf("Memory allocation failed");

        printf("Enter node %d:",i);
        scanf("%d",&user);

        new->data=user;
        new->address=NULL;

        temp->address=new;
        temp=temp->address;
    }
}

void display(){

    struct node *temp;
    int i;

    if(list == NULL)
        printf("List is empty");

    temp=list;
    for(i=1;temp>NULL;i++){

        printf("Data %d: %d -> ",i,temp->data);
        printf("%x\n",temp->address);
        temp = temp->address;
    }
}