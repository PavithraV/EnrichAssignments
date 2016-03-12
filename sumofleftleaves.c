# EnrichAssignments
#include <stdio.h>
#include<stdlib.h>
struct node* newNode(int data);
int isleaf(struct node *node);
int lsum(struct node *root,int* sum);
struct node
{
    int data;
    struct node* left, *right;
};
int main()
{
    int sum=0;
    struct node *root         = newNode(20);
    root->left     	      = newNode(10);
    root->right               = newNode(15);
    root->right->left         = newNode(10);
    root->left->left          = newNode(7);
    root->left->right         = newNode(13);
   
    lsum(root,&sum);
    printf("Sum of left leaves is %d",sum);
    return 0;
}

struct node* newNode(int data)
{
    struct node* node =(struct node*)malloc(sizeof(struct node)); 
    node->data = data;
    node->right = 0;
    node->left = 0;
    return (node);
}
int isleaf(struct node *node)
{
   if (node == NULL)
   {
       return 0;
   }
   if (node->left == NULL && node->right == NULL)
   {
       return 1;
   }
   return 0;
}
int lsum(struct node *root,int* sum)
{
 
   
    if (!root)
    {
  	   return;
    }
    if (isleaf(root->left))
    {
    	
    	*sum += root->left->data;
    }
    sum=sum+ lsum(root->left,sum);
    sum=sum+lsum(root->right,sum);
   return 0;
}
