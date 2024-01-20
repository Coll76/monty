#include "monty.h"
void free_list(stack_t **head)
{
	stack_t *current;
	current = *head;
	while (current != NULL)
	{
		/*save the next node to temp*/
		stack_t *temp = current->next;
		/*free the current node*/
		free(current);
		/*move to the next node*/
		current = temp;
	}
	/*shos that the list is empty*/
	*head = NULL;
}
