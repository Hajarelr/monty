#include "monty.h"
/**
 * push - Function that creates a new node at the beginning of stack
 * @stack: 1st input (pointer)
 * @line_number: 2nd input
 * Return: Void
 */
void push(stack_t **stack, unsigned int line_number)
{
if (arg->n_tok <= 1 || !(is_digit(arg->tok[1])))
{
free_arg();
dprintf(2, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
*stack = malloc(sizeof(stack_t));
if (*stack == NULL)
malloc_failed();
(*stack)->next = (*stack)->prev = NULL;
(*stack)->n = (int) atoi(arg->tok[1]);
if (arg->head == NULL)
arg->head = *stack;
else
{
if (arg->stack)
{
(*stack)->next = arg->head;
arg->head->prev = *stack;
arg->head = *stack;
}
else
{
stack_t *m = arg->head;
while (m->next)
m = m->next;
m->next = *stack;
(*stack)->prev = m;
}
}
arg->stack_length += 1;
}
