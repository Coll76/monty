#include "monty.h"
/**
 * pall - prints stack
 * @head: pointer to nodes ithin stack
 * @line_number: data to assign
 */
void pall(stack_t **head, unsigned int line_number __attribute__((unused)))
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
