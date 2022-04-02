#include<stdio.h>
struct Node
{
	int data;
	struct Node *pre;
	struct Node *next;
};
void Traversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
    	printf("Element :%d\n",ptr->data);
	   ptr=ptr->next;
	}
}
int main()
{
	struct Node *head;
	struct Node *n1;
	struct Node *n2;
	struct Node *n3;
   struct Node *n4;
   
  head=(struct Node *)malloc(sizeof(struct Node)); 
  n1=(struct Node *)malloc(sizeof(struct Node));
  n2=(struct Node *)malloc(sizeof(struct Node));
  n3=(struct Node *)malloc(sizeof(struct Node));
  n4=(struct Node *)malloc(sizeof(struct Node));
  
  head->data=21;
  head->next=n1;
  
  n1->data=67;
  n1->pre=head;
  n1->next=n2;
  
  n2->data=23;
  n2->pre=n1;
  n2->next=n3;
  
  n3->data=43;
  n3->pre=n2;
  n3->next=NULL;
  
   Traversal(head);
}
