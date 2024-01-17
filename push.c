#include "monty.h"
/**
 * push - function to push node to stack
 * @head: pointer to nodes in stack
 * @n: remove its functionality
 */
void push(stack_t **head, unsigned int n)
{
	stack_t *ne_node;

	if (!n)
	{
		fprintf(stderr, "L<line_number>: usage: push integer\n");
		exit(EXIT_FAILURE);
	}
	ne_node = (stack_t *)malloc(sizeof(stack_t));
	if (!ne_node)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		ne_node->n = n;
		ne_node->next = *head;
		ne_node->prev = NULL;
		if ((*head) != NULL)
		{
			(*head)->prev = ne_node;
		}
	}
		*head = ne_node;
}
