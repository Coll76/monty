#include "monty.h"
/**
 * is_integer - used to see if a value is int type
 * @str: value to check
 * Return: 1 on success
 */
int is_integer(char *str)
{
	if (!str || *str == '\0')
	{
		return (0);
	}
	if (*str == '-')
	{
		str++;
	}
	while (*str)
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str++;
	}
	return (1);
}
