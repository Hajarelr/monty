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
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int n);
int _isdigit(char *n);
void exec_cmd(char *argv);
int get_opc(stack_t **stack, char *c, char *e, int a);
void free_dlistint(stack_t *stack);
void push_er(FILE *fd, char *b, stack_t *s, int c);
void ins_er(FILE *fd, char *b, stack_t *s, char *c, int a);
/**
 * struct buffer - Function that stores buffer
 * @fd: 1st input
 * @line: 2nd input
 */
typedef struct buffer
{
	FILE *fd;
	char *line;
} buffer_t;
extern buffer_t buffer;
extern int value;
#endif
