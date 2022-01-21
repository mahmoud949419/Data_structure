#include <stdio.h>
#include<stdlib.h>

typedef struct queue_t
{
	int front;
	int back;
	int size;
	int count;
	int*arr;
}Queue;


void queue_create(Queue *me ,int* arr,int arr_size)
{
	me->arr=arr;
	me->front=0;
	me->back=0;
	me->count=0;
	me->size=arr_size;
	
}
void queue_enqueue(Queue *me,int num)
{
	if(!queue_isFull(me))
	{
		me->arr[back]=num;
		if(me->back < me->size)
		{
		me->back++;
		}
		else
		{
			me->back=0;
		}
		//same above condition
		//me->back=(me->back+1)% me->size;
		me->count++;
	}
}
int queue_dequeue(Queue* me)
{
	int front_value;
	if(!queue_isEmpty)
	{
		front_value=me->arr[me->front];
		me->front=(me->front+1)% me->size;
		me->count--;
		
	}
	return front_value;
}
//peekFront();
//peekBack();
int queue_isFull(Queue* me)
{
	return(me->count == me->size);
}
int queue_isEmpty()
{
	return (me->count==0);
}
void queue_clear()
{
	me->count=0;
	me->front=0;
	me->back=0;
}
