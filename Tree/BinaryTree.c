#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};
struct node* createNode(int data)
{
 struct node *n;//create a node
 n=(struct node*)malloc(sizeof(struct node));
 n->data=data;
 n->left=NULL;
 n->right=NULL;
 return n;
}
int main()
{
    /*struct node *p;
    p->data=2;
    p=(struct node*)malloc(sizeof(struct node));//Allocating Memory in the data
    p->left=NULL;
    p->right=NULL;

    struct node *p1;
    p1->data=4;
    p1=(struct node*)malloc(sizeof(struct node));
    p1->left=NULL;
    p1->right=NULL;

    struct node *p2;
    p2->data=6;
    p2=(struct node*)malloc(sizeof(struct node));
    p2->left=NULL;
    p2->right=NULL;

    p->left=p1;
    p->right=p2;*/

    struct node *p=createNode(2);
    struct node *p1=createNode(3);
    struct node *p2=createNode(5);

    p->left=p1;
    p->right=p2;
    return 0;
}
