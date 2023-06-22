#include "monty.h"

/**
 * pop - Function that removes the top element from the stack
 * @stack: 1st input
 * @line_number: 2nd input
 * Return: Void
 */
void pop(stack_t **stack, unsigned int line_number)
{
(void) stack;
if (arg->head == NULL)
{
dprintf(2, "L%d: can't pop an empty stack\n", line_number);
free_args();
exit(EXIT_FAILURE);
}
delete_stack_node();
arg->stack_length -= 1;
}
