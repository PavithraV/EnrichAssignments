# EnrichAssignments
//
//  binarytree.c
//  
//
//  Created by R.M.D. Engineering College  on 19/03/16.
//
//

#include "binarytree.h"

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void insert(struct node **root,int data)
{
    struct node *temp=0;
    if(!(*root))
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->left =0;
        temp->right = 0;
        temp->data = data;
        *root = temp;
        return;
    }
    
    if(data < (*root)->data)
    {
        insert(&(*root)->left, data);
    }
    else if(data > (*root)->data)
    {
        insert(&(*root)->right, data);
    }

    
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void postorder(struct node * root)
{
    if (root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}
/*void delete(struct node* root)
{
    if (root)
    {
        delete(root->left);
        delete(root->right);
        
    }
}*/
int main()
{
    struct node *root=NULL;
    insert(&root,2);
    insert(&root,7);
    insert(&root,5);
    insert(&root,12);
    insert(&root,6);
    insert(&root,9);
    insert(&root,8);
    insert(&root,11);
    insert(&root,4);

    printf("\nInorder");
    inorder(root);
    printf("Postorder");
    postorder(root);
    printf("\ntree");
        return 0;
}
    
    

