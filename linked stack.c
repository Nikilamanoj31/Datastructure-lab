#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*head;
void push();
void pop();
void display();
int main()
{
    int option;
    int n=1;
    while(n!=0)
    {
  printf("\n**MAIN MENU**\n");
  printf("\n1.Push\n");
  printf("\n2.Pop\n");
  printf("\n3.Display\n");
  printf("\n4.Exit\n");
  printf("\nEnter your option:");
  scanf("%d",&option);
  switch(option)
  {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:display();
      break;
      case 4:exit();
      break;
      default:printf("invalid option");
  }
  printf("Do you want to continue(0/1):");
  scanf("%d",&n);
    }
return 0;
}
void push()
{
    int val;
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data:");
   scanf("%d",&val);
   if(head==NULL)
   {
       ptr->data=val;
       ptr->next=NULL;
       head=ptr;
   }
   else
   {
       ptr->data=val;
       ptr->next=head;
       head=ptr;
   }
}   
   void pop()
   {
       int item;
       struct node*ptr;
       if(ptr==NULL)
       {
           printf("Stack is empty\n");
       }
      item=head->data;
      head=ptr;
      head=head->next;
      free(ptr);
      printf("The deleted element is:%d",item);
   }
   void display()
   {
       struct node*temp;
       temp=head;
       if(temp==NULL)
       {
           printf("The stack is empty\n");
       }
       else
       {
       while(temp!=NULL)
       {
           printf("%d\n",temp->data);
           temp=temp->next;
       }
       }
   }