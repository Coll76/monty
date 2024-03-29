#ifndef MONTY_H
#define MONTY_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
stack_t createnode(int n);
void pall(stack_t **head, unsigned int n);
void push(stack_t **head, unsigned int n);
int is_integer(char *str);
extern instruction_t instructions[];
void free_list(stack_t **head);
void pint(stack_t **head, unsigned int n);
#define MAX_LINE_LENGTH 1024
extern instruction_t instructions[];
void pop(stack_t **head, unsigned int n);
void add(stack_t **head, unsigned int n);
#define _POSIX_C_SOURCE 200809L
void swap(stack_t **head, unsigned int n);
#endif
