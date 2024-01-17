#ifndef MINE_H
#define MINE_H
#include <stdio.h>
#include <stdlib.h>
/**
 * stack_linked - struct for linked list
 * @n: data type to be assigned to ne list
 * @next: used to navigate to next node
 */
typedef struct stack_linked
{
	int n;
	struct stack_linked *next;
}struct_l;
void push();
void pop();
#endif
