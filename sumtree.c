# EnrichAssignments
#include <stdio.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
int sum(struct node *root)
{
	if(root == 0)
	{
		return 0;
	}
	return sum(root->left) + root->data + sum(root->right);
}
int isSumTree(struct node* node)
{
	int lefttree, righttree;
	if(node ==0 ||(node->left == 0 && node->right == 0))
	{
		return 1;
	}
	lefttree = sum(node->left);
    righttree = sum(node->right);
	if((node->data == lefttree + righttree)&&isSumTree(node->left) && isSumTree(node->right))
	{
		return 1;
	}

	return 0;
}

struct node* insert(int data)
{
	struct node* node =
		(struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = 0;
	node->right = 0;
	return(node);
}

int main()
{
	struct node *root = insert(26);
	root->left		 = insert(10);
	root->right	 = insert(3);
	root->left->left = insert(4);
	root->left->right = insert(6);
	root->right->right = insert(3);
	if(isSumTree(root))
	{
		printf("Binary tree is a sumtree");
	}
	else
	{
		printf("Binary tree is not a sumtree");
	}
	return 0;
}
