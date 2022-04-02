#include<stdio.h>
struct node
{
   int data;
   struct node *left;
   struct  node *right;
};
struct node *createNode(int data)
{
	struct node *n;
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	printf("%d",data);
	return 0;
}
int main()
{
	/*
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=34;
	p->left=NULL;
	p->right=NULL;
	
	struct node *p1;
	p1=(struct node *)malloc(sizeof(struct node));
	p1->data=34;
	p1->left=NULL;
	p1->right=NULL;
	
	struct node *p2;
	p2=(struct node *)malloc(sizeof(struct node));
	p2->data=34;
	p2->left=NULL;
	p2->right=NULL;*/
	
	struct node *p=createNode(2);
   struct node *p1=createNode(1);
	struct node *p2=createNode(4);
	
	createNode(p);	
	
	p->left=p1;
	p->right=p2;
	
	createNode(p);
	return 0;
	
}
