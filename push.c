#include "monty.h"
int value;
/**
 * push - Function that creates a new node at the beginning of stack
 * @stack: 1st input (pointer)
 * @line_number: 2nd input
 * Return: Void
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *new = NULL;
(void)line_number;
new = new_n(value);
new->next = *stack;
if (*stack != NULL)
(*stack)->prev = new;
*stack = new;
}
