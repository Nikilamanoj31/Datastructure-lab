#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int op,i=0,x,n;
struct node*head,*newnode,*temp;
void addnode();
void display();
void count();
void search();
void main()
{
    printf("\n1:add node\n 2:dispaly linked list\n 3: count nodes\n 4:search\n 5:exit\n");
do
{
    printf("\n enter an option");
    scanf("%d",&op);
    switch(op)
    {
        case 1:addnode();
        break;
        case 2:display();
        break;
        case 3:count();
        break;
        case 4:search();
        break;
        default:printf("invalid\n");
    }
}
while(op!=5);
}
void addnode()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&x);
    newnode->data=x;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->link=newnode;
        temp=newnode;
    }
    printf("node added successfully\n");
}
void display()
{
    temp=head;
    printf("elements are:");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
temp=temp->link;
    }
}
void count()
{
    temp=head;
    while(temp!=NULL)
    {
        i=i+1;
        temp=temp->link;
    }
    printf("number of nodes in linked list:%d\n",i);
}
void search()
{
    int dat;
    temp=head;
    int count=1;
    int flag=0;
    printf("enter the data to search");
    scanf("%d",&dat);
  if(head == NULL){
		printf("\nList is Empty \n");
	}
	else{
	while(temp->link != NULL){
		if(dat == temp->data){
			flag=1;
			break;
		}
		temp=temp->link;
		count++;
	}
	if(temp->data == dat){
		flag=1;
	}
	if(flag==1){
	printf("\nFound\n");
	}
	else{
		printf("\nnot found\n");
	}
}
}
	

