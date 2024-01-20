#include "monty.h"
/**
 * push - function to push node to stack
 * @head: pointer to nodes in stack
 * @n: line number
 */
void push(stack_t **head, unsigned int n)
{
	int value;
	stack_t *ne_node;
	char *ar = strtok(NULL, " \t\n");

	if (!ar || !is_integer(ar))
	{
		fprintf(stderr, "L%u: usage: push integer\n", n);
		exit(EXIT_FAILURE);
	}
	value = atoi(ar);
	ne_node = (stack_t *)malloc(sizeof(stack_t));
	if (!ne_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	ne_node->n = value;
	ne_node->next = *head;
	ne_node->prev = NULL;
	if ((*head) != NULL)
	{
	(*head)->prev = ne_node;
	}
	*head = ne_node;
}
