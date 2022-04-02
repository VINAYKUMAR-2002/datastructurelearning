#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack * ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else
	{ 
		return 0; 
	}
}
int isFull(struct stack * ptr)
{
	if(ptr->top == ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	struct stack *s;
	s->size=80;
	s->top=-1;
	s->arr=(int *)malloc(s->size * sizeof(int));
	//push element
	s->arr[0]=5;
	s->top++;
	
	if(isEmpty(s))
	{
		printf("The stack is Empty");
	}
	else
	{
		printf("the stack is not Empty");
	}
	return 0;
}
