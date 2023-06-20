#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "stack_arr.h"

void initList(STACK s)
{
	s.top = -1;
	printf("\nSUCCESSFULLY INITIALIZED");
}

bool push(STACK s, DATA x)
{
	bool inserted = false;
	if(!isFull(s))
		{	
			s.top++;	
			s.data[s.top] = x;
			inserted = true;
		}	
	return inserted;
}


bool pop(STACK s)
{
	bool deleted = false;
	if(!isEmpty(s))
		{
			s.top--;
			deleted = true;
		}
	return deleted;
}

bool isEmpty(STACK s)
{
	return s.top == -1; 
}

bool isFull(STACK s)
{
	return s.top == MAX - 1;
}

int peek(STACK s)
{
	int val;
	val = s.data[s.top];
	printf("%d ", val);
	return val;
}
