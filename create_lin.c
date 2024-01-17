#include "monty.h"
/**
 * createnode - creates a ne node
 * @n: value assigned to the ne node
 * Return: the ne node created
 */
stack_t createnode(int n)
{
	stack_t *pointer = (stack_t *)malloc(sizeof(stack_t));

	if (!pointer)
	{
	printf("Memory allocation failed\n");
	exit(EXIT_FAILURE);
	}
	else
	{
	pointer->n = n;
	pointer->next = NULL;
	}
	return (*pointer);
}
