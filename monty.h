#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

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

stack_t *new_n(int c);
void f_push(stack_t **st, unsigned int c);
void add_node(stack_t **head, int a);
void add_queue(stack_t **head, int a);
void f_pall(stack_t **st, unsigned int c);
int _isdigit(char *n);
int execute(char *line, stack_t **stack, unsigned int c, FILE *fd);
void free_dlistint(stack_t *stack);
void push_er(FILE *fd, char *b, stack_t *s, int c);
void ins_er(FILE *fd, char *b, stack_t *s, char *c, int a);
void f_pint(stack_t **st, unsigned int l);
void f_pop(stack_t **st, unsigned int c);
void f_swap(stack_t **st, unsigned int c);
void f_add(stack_t **st, unsigned int c);
void f_nop(stack_t **st, unsigned int c);
/**
 * struct buffer - Function that stores buffer
 * @arg: value
 * @fd: monty file
 * @line: 2nd input
 * @lifi: flag change
 * @d: value through the program
 */
typedef struct bus_s
{
	char *arg;
        FILE *fd;
	char *line;
        int lifi;
} bus_t;
extern bus_t bus;
#endif
