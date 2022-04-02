#include<stdio.h>
struct Node
{
	int data;
	struct Node *next;
};
void LinkedListTravars(struct Node *ptr)
{
	while(ptr != 0)
	{
		printf("Element =%d\n",ptr->data);
		ptr=ptr->next;
	}
}
//Case1:Deleting the first element from the lim=nkr=edlist
struct Node * deleteFirst(struct Node * head)
{
	struct Node * ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
//Case2:Deleting the element at the given index from the list
int i;
struct Node * deleteAtIndex(struct Node * head,int index)
{
  struct Node *p=head;
  struct  Node *q=head->next; 
  for(i=0; i<index-1; i++)
  {
  	 p=p->next;
  	 q=q->next;
  }
  p->next=q->next;
  free(q);
  return head;	
} 
int main()
{
	struct Node *head;
	struct Node *second;
	struct Node *third;
	
	head =(struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third= (struct Node *)malloc(sizeof(struct Node));
	
	head->data=45;
	head->next=second;
	
	second->data=89;
	second->next=third;
	
	third->data=98;
	third->next=NULL;
	
	printf("Linked List before deletion\n:");
	LinkedListTravars(head);
	
//	head=deleteFirst(head);//for deleting first element of the list
   head=deleteAtIndex(head,2);
	printf("Linked List After deletion\n:");
	LinkedListTravars(head);
	return 0;
}
