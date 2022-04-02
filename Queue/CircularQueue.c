#include<stdio.h>
struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr
};
int isEmpty(struct circularqueue *q)
{
	if(q->r==q->f)
	{
		return 1;
	}
	return 0;
}
int isFull(struct circularqueue *q)
{
	if((q->r+1)%q->size==q->f)
	{
		return 1;
	}
	return 0;
}
void enqueue(struct circularqueue *q,int val)
{
	if(isFull(q))
	{
		printf("This Queue is Full");
	}
	else
	{
	   q->r=(q->r+1)%q->size;
		q->arr[q->r]=val;	
		printf("Enqueue elemnt:%d\n",val);
	}
}
int dequeue(struct circularqueue *q)
{
	int a=-1;
	if(isEmpty(q))
	{
		printf("This Queue is Full");
	}
	else
	{
	   q->f=(q->f+1)%q->size;
		a= q->arr[q->f];	
	}
	return a;
}
int main()
{
    struct circularqueue q;
    q.size=5;
    q.f=q.r=0;
    q.arr=(int*)malloc(q.size*sizeof(int));
    //Enqueue few elements
    enqueue(&q,168);
    enqueue(&q,18);
    enqueue(&q,123); 
    enqueue(&q,3);
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    printf("Dequeuing element %d\n",dequeue(&q));
    enqueue(&q,3);
    enqueue(&q,3);
    enqueue(&q,3);
    enqueue(&q,3);
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

