#include<stdio.h>
struct Node
{
	int data;
	struct Node * next;
};

void LinkedListTraversal(struct Node *ptr)
{
	while(ptr != NULL)
	{
    	printf("Element :%d\n",ptr->data);
	   ptr=ptr->next;
	}
}

int main()
{
	struct Node * head;
   struct Node * second;
   struct Node * third;
   struct Node * fourth;
   
   //Allocate Memory for modes in the linked list in heap
   head=(struct Node *)malloc(sizeof(struct Node));
   second=(struct Node *)malloc(sizeof(struct Node));
   third=(struct Node *)malloc(sizeof(struct Node));
   fourth=(struct Node *)malloc(sizeof(struct Node));
   
   //link first and second node
   head->data=7;
   head->next=second;
   
   //link second and third nodes
   second->data=34;
   second->next=third;
   
   third->data=44;
   third->next=fourth;
   
   //terminate the list at the third node
    fourth->data=73;
    fourth->next=NULL;
    
    LinkedListTraversal(head);
    return 0;
}
