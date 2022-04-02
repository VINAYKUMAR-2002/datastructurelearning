#include<stdio.h>
#include<stdlib.h>
	struct Node *f=NULL;
   struct Node *r=NULL; 
struct Node
{
	int data;
	struct Node * next;
};
void LinkedListTraversal(struct Node *ptr)
{
	printf("printing the element of this Linked List\n");
	while(ptr != NULL)
	{
    	printf("Element :%d\n",ptr->data);
	   ptr=ptr->next;
	}
}
void enqueue(int val)
{
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	if(n==NULL )
	{
		printf("Queue is full");
	}
	else
	{
		n->data=val;
		n->next=NULL;
		if(f==NULL)
		{
			f=r=n;
		}
		else
		{
		   r->next=n;	
		   r=n;
		}
	}
}
int dequeue()
{
	int val=-1;
	struct Node *ptr=f;
	//struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	if(f==NULL )
	{
		printf("Queue is Empty\n");
	}
	else
	{
	   f=f->next;
	   val=ptr->data;
	   free(ptr);
	}
	return val;
}
int main()
{
//   LinkedListTraversal(f);
//   enqueue(42);
//   enqueue(3);
//   enqueue(32);
//   enqueue(2);
//   LinkedListTraversal(f);
   
   LinkedListTraversal(f);
   printf("Dequeue element %d\n",dequeue());
   enqueue(42);
   enqueue(3);
   enqueue(32);
   enqueue(2);
   printf("Dequeue element %d\n",dequeue());
   printf("Dequeue element %d\n",dequeue());
   printf("Dequeue element %d\n",dequeue());
   printf("Dequeue element %d\n",dequeue());
   LinkedListTraversal(f);
   
  
   return 0;
}
