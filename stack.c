#include <stdio.h>
#include<stdlib.h>

typedef struct
{
	int top;
	int count;
	int arr_size;
	int *arr;

}Stack;

void stack_create(Stack* me ,int* arr,int arr_size)
{
	if(me!=NULL)
	{
		me->arr=arr;
		me->arr_size=arr_size;
		me->top=0;
		me->count=0;
	}
}

void stack_push(Stack *me,int value)
{
	if( ! stack_isFull(me) )
	{
	me->arr[me->top]=value;
	if(me->top < me->arr_size)
	{
	me->top++;
	}
	me->count++;
	}
	
}

int stack_pop(Stack *me)
{
	int value=-1;
	
	if( ! stack_isEmpty(me))
	{
		me->top--;
		me->count--;
	value=me->arr[me->top];
	
	
	}
	return value;
}

int stack_peek(Stack *me)
{
	int value=-1;
	if(! stack_isEmpty(me))
	{
		value=me->arr[me->top-1];
	}
	return value;
}

int stack_isFull(Stack* me)
{
	return ( me->top == me->arr_size );
}

int stack_isEmpty(Stack*me)
{
	return(me->top==0);
}

void stack_clear(Stack* me)
{
	me->top=0;
	me->count=0;
}

void stack_print(Stack* me)
{
	printf("top->");
	for(int i=me->top-1;i<=0;i--)
	{
		printf("%d",me->arr[i]);
	}
}
void main(void)
{
	Stack myStack;
	int s1[10];
	stack_create(&myStack,s1,10);
	stack_push(&myStack,50);
	stack_push(&myStack,40);
	stack_print(&myStack);
	
}