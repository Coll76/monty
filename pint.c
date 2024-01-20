#include "monty.h"
/**
 * pint - prints the element at top of stack
 * @head: pointer that points to stack elements
 * @n: line number
 */
void pint(stack_t **head, unsigned int n)
{
	stack_t *top = *head;
	(void)n;
	if (top != NULL)
	{
		printf("%d\n", top->n);
	}
}
