#include "monty.h"
/**
 * swap - swaps the top to elements
 * @head: pointer that points to elements of a stack
 * @n: line_number
 */
void swap(stack_t **head, unsigned int n)
{
	stack_t *temp;
	(void)n;
	if (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp->next;
		temp->prev = (*head)->prev;
		(*head)->prev = temp;
		temp->next = *head;
		*head = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", n);
		exit(EXIT_FAILURE);
	}
}
