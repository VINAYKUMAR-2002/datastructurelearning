#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
    	printf("Element :%d\n",ptr->data);
	   ptr=ptr->next;
	}
}
struct Node * insertAtFirst(struct Node *head,int data)
{
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}

struct Node * insertAtEnd(struct Node *head,int data)
{
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node * p=head;
	while(p->next != NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}

struct Node * insertAtIndex(struct Node *head,int data,int index)
{
		struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
		struct Node * p=head;
		int i=0;
		while(i!= index-1)
		{
			p=p->next;
			i++;
		}
		ptr->data=data;
		ptr->next=p->next;
		p->next=ptr;
		return head;
}
int main()
{
	struct Node * head;
	struct Node * second;
	struct Node * third;
	
	head=(struct node*)malloc(sizeof(struct Node));
	second=(struct node*)malloc(sizeof(struct Node));
	third=(struct node*)malloc(sizeof(struct Node));
	
	head->data=33;
	head->next=second;
	
	second->data=45;
	second->next=third;
	
	third->data=43;
	third->next= NULL;
	

//	head=insertAtFirst(head,89);
   //head=insertAtIndex(head,78,3);
   head=insertAtEnd(head,39);
   printf("Linked List After Insertion");
	LinkedListTraversal(head);
	return 0;
}
