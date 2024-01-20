#include "monty.h"
/**
 * pop - pops the top stack element
 * @head: pointer that points to stack elements
 * @n: line_number
 */
void pop(stack_t **head, unsigned int n)
{
	stack_t *temp = *head;
	/*stack_t *next;*/
	(void)n;
	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack", n);
		exit(EXIT_FAILURE);
	}
}
