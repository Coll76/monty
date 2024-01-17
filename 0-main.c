#include "monty.h"
/**
 * main - Test functionality of functions
 * Return: Alays 0
 */
int main(void)
{
	stack_t *head = NULL;

	instruction_t push_ins = {"push", push};
	instruction_t pall_ins = {"pall", print_stack};

	push_ins.f(&head, 1);
	push_ins.f(&head, 2);
	push_ins.f(&head, 3);
	pall_ins.f(&head, 5);

	return (0);
}
