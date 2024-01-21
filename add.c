#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 *@head: pointer that points to elements of stack
*@n: line_number
*/
void add(stack_t **head, unsigned int n)
{
	stack_t *temp;
	(void)n;
	if (*head != NULL)
	{
		temp = (*head)->next;
		temp->n += (*head)->n;
		/*remove the top element*/
		pop(head, n);
	}
	else
	{
		fprintf(stderr, "L%u: can't add, stack too short", n);
		exit(EXIT_FAILURE);
	}
}
