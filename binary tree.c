#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
};
struct node*createtree()
{
  int item;
  struct node*temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("\n Enter the data(enter 0 if no data is to be entered):\n");
  scanf("%d",&item);
  if(item==0)
    {
       return NULL;
    }
  temp->data=item;
  printf("\n Enter the data of the left child of %d\n",item);
  temp->left=createtree();
  printf("\n Enter the data of the right child of %d\n",item);
  temp->right=createtree();
  return temp;
}
void preorder(struct node*root)
{
  if(root==0)
    {
     return;
    }
      printf("%d\t",root->data);
      preorder(root->left);
      preorder(root->right);
}
void inorder(struct node*root)
{
  if(root==0)
    {
     return;
    }
      inorder(root->left);
      printf("%d\t",root->data);
      inorder(root->right);
}
void postorder(struct node*root)
{
  if(root==0)
   {
     return;
   }
     postorder(root->left);
     postorder(root->right);
     printf("%d\t",root->data);
}
void main()
{
struct node*root;
root=createtree();
printf("\n Preorder traversing:\n");
preorder(root);
printf("\n Inorder traversing:\n");
inorder(root);
printf("\n postorder traversing:\n");
postorder(root);
}