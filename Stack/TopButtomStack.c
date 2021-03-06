#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	int *arr;
};
int isEmpty(struct stack *ptr)
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
int isFull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop( struct stack *ptr)
{
	if(isEmpty(ptr))
	{
		printf("Stack UnderFlow! cannot pop from to the stack\n");
		return -1;
	}
	else
	{
		int val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
void push( struct stack *ptr,int val)
{
	if(isFull(ptr))
	{
		printf("Stack OverFlow! cannot push %d to the stack\n",val);
	}
	else
	{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
int peek(struct stack * sp,int i)
{
	int arrInd=sp->top-i+1;
	if(arrInd < 0)
	{
		printf("Not a valid position for the stack\n");
		return -1;
	}
	else
	{
		return sp->arr[arrInd];
	}
}
int stackTop(struct stack* sp)
{
	return sp->arr[sp->top];
}
int stackBottom(struct stack* sp)
{
	return sp->arr[0];
}
int main()
{
	int j;
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=10;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size * sizeof(int));
	printf("Stack has been Succesfully\n");
	printf("Before pushing Full:%d\n",isFull(sp));
	printf("Before pushing Empty:%d\n",isEmpty(sp)); 
	push(sp,51);
	push(sp,52);
	push(sp,53);
	push(sp,54);
	push(sp,55);
	push(sp,54);
	push(sp,54);
	push(sp,54);
	push(sp,4);
	push(sp,3);
	push(sp,33);
	printf("\n");
	printf("After pushing Full:%d\n",isFull(sp));
	printf("After pushing Empty:%d\n",isEmpty(sp)); 
	printf("Poped %d from the stack\n",pop(sp));
	printf("Poped %d from the stack\n",pop(sp));
//	for(j=1; j<sp->top+1 ;j++)
//	{
//	  	printf("The value at index %d is %d\n",j,peek(sp,j));  	
//	}
   printf("The topmost value of this stack is %d\n",stackTop(sp));
   printf("The buttommost value of this stack is %d\n",stackBottom(sp));
	return 0;
}
