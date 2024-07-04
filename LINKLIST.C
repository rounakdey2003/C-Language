
	/************************************************
	* Program to implement a linked list performing *
	* Insert at the beginning of the list		*
	* Insert at the end of the list			*
	* Insert after a given node			*
	* Insert before a given node			*
	* Delete from the beginning of the list		*
	* Delete from the end of the list		*
	* Delete a given node				*
	* Invert					*
	* Display					*
	* Sort						*
	* Exit						*
	************************************************/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>

typedef struct node
{
	int item;
	struct node *link;
}list;
list * head;

void initialize()
{
	head=NULL;
}

void insert_end(int data)
{
	list *p,*q,*newnode;
	p=head;
	while(p != NULL)
	{
		q=p;
		p=p->link;
	}
	newnode = (list*)malloc(sizeof(list));
	newnode->item=data;
	newnode->link=NULL;
	if(p==head)
		head=newnode;
	else
		q->link=newnode;
	printf("Insertion successful.");
}

void insert_after(int data,int target)
{
	list *p,*newnode;
	p=head;
	while((p != NULL)&&(p->item !=target))
		p=p->link;
	if (p==NULL)
	{
		printf("Target not found.");
		return;
	}
	newnode = (list*)malloc(sizeof(list));
	newnode->item=data;
	newnode->link=p->link;
	p->link=newnode;
	printf("Insertion successful.");
}

void insert_before(int data,int target)
{
	list *p,*q,*newnode;
	p=head;
	while((p != NULL)&&(p->item !=target))
	{
		q=p;
		p=p->link;
	}
	if(p==NULL)
	{
		printf("Target not found.");
		return;
	}
	newnode = (list*)malloc(sizeof(list));
	newnode->item=data;
	newnode->link=p;
	if(p==head)
		head=newnode;
	else
		q->link=newnode;
	printf("Insertion successful.");
}

void delete_end()
{
	list *p,*q;
	if (head==NULL)
	{
		printf("\nList Empty.");
	}
	else
	{
		p=head;
		while(p->link != NULL)
		{
			q=p;
			p=p->link;
		}
		if (p==head)
			head=NULL;
		else
			q->link=NULL;
		free(p);
		printf("Deletion successful.");
	}
}

void delete_node(int target)
{
	list *p,*q;
	if (head==NULL)
	{
		printf("\nList Empty.");
	}
	else
	{
		p=head;
		while((p != NULL)&&(p->item != target))
		{
			q=p;
			p=p->link;
		}
		if (p==NULL)
		{
			printf("Target not found.");
			return;
		}
		if (p==head)
			head=p->link;
		else
			q->link=p->link;
		free(p);
		printf("Deletion successful.");
	}
}

void insert_begin(int data)
{
	list * newnode;
	newnode=(list*)malloc(sizeof(list));
	newnode->item=data;
	newnode->link=head;
	head=newnode;
	printf("Insertion successful.");
}

void delete_begin()
{
	list *p;
	if(head==NULL)
		printf("List empty.");
	else
	{
		p=head;
		head=head->link;
		free(p);
		printf("Deletion successful.");
	}
}

void display()
{
	list *p;
	int i,j,k;
	if (head==NULL)
		printf("\nList empty.");
	else
	{
		p=head;
		i=4;j=2;
		while(p !=NULL)
		{
			gotoxy(i,j);
			printf("|-------|-----|");
			gotoxy(i,j+1);
			printf("| %5d |  þ--|--->",p->item);
			gotoxy(i,j+2);
			printf("|-------|-----|");
			p=p->link;
			if(i>57)
			{
				i=i+19;
				gotoxy(i,j+1);
				printf("|");
				gotoxy(i,j+2);
				printf("|");
				gotoxy(i,j+3);
				printf("|");
				gotoxy(1,j+3);
				printf("|");
				gotoxy(2,j+3);
				for(k=2;k<80;k++)
					printf("-");
				gotoxy(1,j+4);
				printf("|");
				gotoxy(1,j+5);
				printf("|->");

				i=4;
				j=j+4;
				if(j>20)
				{
					gotoxy(10,25);
					printf("Press any key to see the next page ....");
					getch();
					i=4;j=2;
					clrscr();
				}
			}
			else
				i=i+19;
		}
		gotoxy(i,j+1);
		printf("NULL\n");
	}
}

void recrev(list *p)
{
	list *r;
	r=p->link;
	if (r != NULL)
	{
		recrev(r);
		r->link=p;
	}
	else
		head=p;
}

void invert()
{
	list *p;
	if(head == NULL)
		printf("List empty.");
	else
	{
		printf("Original list : \n");
		display();
		p=head;
		recrev(p);
		p->link=NULL;
		printf("Reversed list : \n");
		display();
	}
}

void sort()
{
	list *p, *q,*r,*s;
	if(head == NULL)
	{
		printf("\nList empty.");
		return;
	}
	p=head;
	while(p->link != NULL)
	{
		q=p->link;
		s=head;
		while(q->item > s->item)
		{
			r=s;
			s=s->link;
		}
		if (s==q)
			p=q;
		else
		{
			p->link=q->link;
			q->link=s;
			if (s != head)
				r->link=q;
			else
				head=q;
		}
	}
	printf("Sorting successful.\n sorted list :\n");
	display();
}

void main()
{
	int data,ch,target;
	initialize();
	while(1)
	{
		clrscr();
		gotoxy(32,3);
		printf("MENU");
		gotoxy(12,4);
		printf("____________________________________________");
		gotoxy(14,6);
		printf("1. Insert at the beginning of the list.");
		gotoxy(14,7);
		printf("2. Insert at the end of the list.");
		gotoxy(14,8);
		printf("3. Insert after a given node.");
		gotoxy(14,9);
		printf("4. Insert before a given node.");
		gotoxy(14,10);
		printf("5. Delete from the beginning of the list.");
		gotoxy(14,11);
		printf("6. Delete from the end of the list.");
		gotoxy(14,12);
		printf("7. Delete a given node.");
		gotoxy(14,13);
		printf("8. Invert.");
		gotoxy(14,14);
		printf("9. Display.");
		gotoxy(13,15);
		printf("10. Sort.");
		gotoxy(13,16);
		printf("11. Exit.");
		gotoxy(11,18);
		printf("Enter your choice (1/2/3/4/5/6/7/8/9/10/11) : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : clrscr();
				 printf("Enter the item to be inserted : ");
				 scanf("%d",&data);
				 insert_begin(data);
				 getch();
				 break;
			case 2 : clrscr();
				 printf("Enter the item to be inserted : ");
				 scanf("%d",&data);
				 insert_end(data);
				 getch();
				 break;
			case 3 : clrscr();
				 printf("Enter the item to be inserted : ");
				 scanf("%d",&data);
				 printf ("Inserty after a node having item .... : ");
				 scanf("%d",&target);
				 insert_after(data,target);
				 getch();
				 break;
			case 4 : clrscr();
				 printf("Enter the item to be inserted : ");
				 scanf("%d",&data);
				 printf ("Insert bfore a node having item.... : ");
				 scanf("%d",&target);
				 insert_before(data,target);
				 getch();
				 break;
			case 5 : clrscr();
				 delete_begin();
				 getch();
				 break;
			case 6 : clrscr();
				 delete_end();
				 getch();
				 break;
			case 7 : clrscr();
				 printf("Enter the item of the target node: ");
				 scanf("%d",&target);
				 delete_node(target);
				 getch();
				 break;
			case 8 : clrscr();
				 invert();
				 getch();
				 break;
			case 9 : clrscr();
				 display();
				 getch();
				 break;
			case 10 : clrscr();
				 sort();
				 getch();
				 break;
			case 11 : exit(0);
			default: clrscr();
				 printf("Invalid choice !!!\nTry again ......");
				 getch();
		}
	}
}
