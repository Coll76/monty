#include "instructions.h"
#include <unistd.h>
#include <stdio.h>
#define MAX_LINE_LENGTH 1024
/**
 * main - Test functionality of functions
 * Return: Alays 0
 */
/*Array of instruction*/
instruction_t instructions[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{NULL, NULL}};
int main(int argc, char *argv[])
{
	size_t line_length;
	int i;
	int found = 0;
	FILE *stack;
	unsigned int line_number = 0;
	stack_t *gstack = NULL;
	/*size_t len = 0;*/
	char *line = NULL;
	/*ssize_t read;*/
	char *opcode;
	/*line = (char *)malloc(sizeof(char));*/
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	stack = fopen(argv[1], "r");
	if (!stack)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line = (char *)malloc(MAX_LINE_LENGTH);
	while ((fgets(line, MAX_LINE_LENGTH, stack)) != NULL)
	{
		/*read = strlen(line);*/
		line_length = strlen(line);
		if (line_length > 0 && line[line_length - 1] == '\n')
			line[line_length - 1] = '\0';

		opcode = strtok(line, " \t\n");
		found = 0;
		if (opcode == NULL || opcode[0] == '#')
			continue;
		for (i = 0; instructions[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				instructions[i].f(&gstack, line_number);
				found = 1;
				break;
			}
		}
		if (!found)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			free(line);
			fclose(stack);
			exit(EXIT_FAILURE);
	}
		line_number++;
	}
	/*free_list(&gstack);*/
	free(line);
	fclose(stack);
	return (0);
}
