#include<stdio.h>
struct queue
{
	int size;
	int r;
	int f;
	int *arr;
};
int isEmpty(struct queue *q)
{
	if(q->r==q->f)
	{
		return 1;
	}
		return 0;
}
int isFull(struct queue *q)
{
	if(q->r==q->size-1)
	{
		return 1;
   }
		return 0;
}
int enqueue(struct queue *q,int val)
{
	if(isFull(q))
	{
		printf("Queue is full");
	}
	else
	{
		q->r++;
		q->arr[q->r]=val;
	}
}
int Rdequeue(struct queue *q)
{
	int a=q->size;
	if(isEmpty(q))
	{
		printf("Queue is Empty");
	}
	else
	{
		q->r--;
	  a= q->arr[q->r];
	}
}
int Fenqueue(struct queue *q,int val)
{
	if(isFull(q))
	{
		printf("queue is full");
	}
	else
	{
		q->f--;
		q->arr[q->f]=val;
	}
}
int dequeue(struct queue *q)
{
	int a=-1;
	if(isEmpty(q))
	{
		printf("queue is Empty");
	}
	else
	{
		q->f++;
		a=q->arr[q->f];
	}
	return a;
}
int main()
{
	struct queue q;
    q.size=100 ;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    //Enqueue few elements
     Fenqueue(&q,34);
     Fenqueue(&q,8);
	 Fenqueue(&q,87);
    enqueue(&q,168);
    enqueue(&q,123);
    enqueue(&q,78);
	   printf("Dequeuing element %d\n",Rdequeue(&q));
      printf("Dequeuing element %d\n",dequeue(&q));
//    printf("Dequeuing element %d\n",dequeue(&q));
//    printf("Dequeuing element %d\n",dequeue(&q));
    if(isEmpty(&q))
    {
    	printf("Queue is Empty");
	 }
	  if(isFull(&q))
    {
    	printf("Queue is Full");
    }
   return 0;
}




