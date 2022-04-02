#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int size;
	int top;
	char *arr;
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
int parenthesisMatch(char *exp)
{
	//creat and innitialize the stack
	struct stack* sp;
	int i;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc(sp->size * sizeof(char));
	for(i=0 ; exp[i]!='\0' ;i++)
	{
		if(exp[i]=='(')
		{
			push(sp,'(');
		}
		else if(exp[i]==')')
		{
		  if(isEmpty(sp))
		  {
		  	return 0;
		  }
		  pop(sp);	
		}
	}
	if(isEmpty(sp))
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
		char val=ptr->arr[ptr->top];
		ptr->top--;
		return val;
	}
}
void push( struct stack *ptr,char val)
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
int main()
{
	char * exp="(6)*(6)/(";
	//check if stack is empty
	if(parenthesisMatch(exp))
	{
		printf("The parenthesis is Matching");
	}
	else
	{
	   printf("The parenthesis is not Matching");	
	}
}

