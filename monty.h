#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE

#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

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

/**
 * struct arg_s - Function that hold variables
 * @str: 1st input
 * @line: 2nd input
 * @line_number: 3th input
 * @tok: 4th input
 * @instru: 5th input
 * @n_tok: 6th input
 */
typedef struct arg_s
{
FILE *str;
char *line;
unsigned int line_number;
char **tok;
int n_tok;
instruction_t *instru;
stack_t *head;
int stack_length;
int stack;
} arg_t;
extern arg_t *arg;

void init_arg();
void malloc_failed(void);
void get_str(char *i);
void tok_line(void);
void get_instru(void);
void invalid_instru(void);
void free_tok(void);
void close_str(void);
void run_instru(void);
int is_digit(char *str);
void free_arg();
void free_head(void);
void free_stack(stack_t *head);
void free_args(void);
void v_arg(int argc);
void delete_stack_node(void);
int dprintf(int fd, const char *format, ...);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
FILE *fdopen(int fd, const char *mode);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);

#endif
