#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *temp, *head, *newnode;

void push()
{
int value;

newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data:\n");
scanf("%d",&value);
if(head==0)
{
newnode->data=value;
newnode->next=0;
head=newnode;
}
else
{
newnode->data=value;
newnode->next=head;
head=newnode;
}
}
void pop()
{
if(head==0)
{
printf("stack is empty\n");
}
else
{
temp=head;
head=head->next;
printf("\nDeleted item is:%d\n",temp->data);
}
}
void display()
{
printf("The elements  are:\n");
temp=head;
while(temp->next!=0)
{
printf("%d\t",temp->data);
temp=temp->next;
}
printf("%d\t",temp->data);
}
void main()
{
int o,c=1;
while(c==1)
{
printf("MAIN MENU\n");
printf("\n 1.push\n");
printf("\n 2.pop\n");
printf("\n 3.display\n");

printf("\nEnter your option:\n");
scanf("%d",&o);
switch(o)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
}
printf("\nDo You want to continue (0/1) ?\n");
scanf("%d",&c);
}
}
