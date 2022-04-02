//In a Binary Treen of which left node of root is lesser than root and right node is greater than root
#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createNode(int data)
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void InOrder(struct node *root)
{
	if(root != NULL)
	{
		InOrder(root->left);
		printf("%d",root->data);
		InOrder(root->right);
	}
}
int isBST(struct node* root)
{
	static struct node *prev=NULL;
	if(root != NULL)
	{
		if(!isBST(root->left))
		{
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data)
		{
			return 0;
		}
		prev=root;
		return isBST(root->right);
	}
	else
	{
		return 1;
	}
}
struct node * search(struct node* root,int key)
{
	if(root==NULL)
	{
	  return NULL;
   }
   if(key==root->data)
   {
   	return root;
	}
	else if(key>root->data)
	{
		return search(root->right,key);
	}
	else if(key<root->data)
	{
		return search(root->left,key);
	}
}
int main()
{
	struct node *p=createNode(5);
	struct node *p1=createNode(3);
	struct node *p2=createNode(6);
	struct node *p3=createNode(1);
	struct node *p4=createNode(4);
//	

//   struct node *p=createNode(5);
//	struct node *p1=createNode(3);
//	struct node *p2=createNode(1);
//	struct node *p3=createNode(1);
//	struct node *p4=createNode(4);
	
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	
	InOrder(p);
   printf("\n");
//	printf("%d",isBST(p));

   struct node *n= search(p,51);
   if(n != NULL)
   {
     printf("found:%d",n->data);
   }
   else
   {
   	printf("Not found");
	}
	return 0;
}
