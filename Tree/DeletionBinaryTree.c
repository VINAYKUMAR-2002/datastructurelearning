#include<stdio.h>
#include<conio.h>
#include<malloc.h>
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
		printf("%d\t",root->data);
		InOrder(root->right);
	}
}

int main()
{
//	struct node *p=createNode(8);
//	struct node *p1=createNode(3);
//	struct node *p2=createNode(10);
//	struct node *p3=createNode(1);
//   struct node *p4=createNode(6);
//	struct node *p5=createNode(4);
//	struct node *p6=createNode(7);
//	struct node *p7=createNode(13);
//	struct node *p8=createNode(14);
//	
//	p->left=p1;
//	p->right=p2;
//	p1->left=p3;
//	p1->right=p4;
//	p4->left=p5;
//	p4->right=p6;
//	p2->right=p8;
//	p8->left=p7;

   struct node *p=createNode(5);
   struct node *p1=createNode(3);
   struct node *p2=createNode(6);
   struct node *p3=createNode(1);
   struct node *p4=createNode(4);
   
   p->left=p1;
   p->right=p2;
   p1->left=p3;
   p1->right=p4;
	
   InOrder(p);	
	printf("\n");	
	InOrder(p);						
	return 0;
}
