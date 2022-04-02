#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
};
void linkedListTraversal(struct Node *head)
{
   struct Node *ptr=head;
//   printf("Element is:%d\n",ptr->data);
//   ptr=ptr->next;
   do
	{
		printf("Element is:%d\n",ptr->data);
		ptr=ptr->next;
	}	while(ptr !=head);	
}

struct Node *insertAtFirst(struct Node *head,int data)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	
	struct Node *p=head->next;
	while(p->next != head)
	{
		p=p->next;
	}
	//At this point p points to the last node of this circular linked list
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
struct Node *InsertIndex(struct Node *head,int data,int index)
{
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	int i=0;
	while(i != index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
}
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head=(struct node *)malloc(sizeof(struct Node));
	second=(struct node *)malloc(sizeof(struct Node));
	third=(struct node *)malloc(sizeof(struct Node));
	
	head->data=45;
	head->next=second;
	
	second->data=32;
	second->next=third;
	
	third->data=12;
	third->next=head;
	
	 printf("Before Insertion:\n");
	 
	 linkedListTraversal(head);
	 printf("After Insertion:\n");
	// second=insertAtFirst(second,67);
	 InsertIndex(head,190,2);
	 linkedListTraversal(head);
	 return 0;
}
