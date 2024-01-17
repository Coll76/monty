#include "monty.h"
/**
 * print_stack - prints stack
 * @head: pointer to nodes ithin stack
 * @n: data to assign
 */
void print_stack(stack_t **head, unsigned int n)
{
	stack_t *current = *head;
	(void)n;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
