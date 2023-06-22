#include "monty.h"
/**
 * pint - Function that print the value at the top of the stack followed
 * by a new line
 * @stack: 1st input
 * @line_number: 2nd input
 * Return: Void
 */
void pint(stack_t **stack, unsigned int line_number)
{
(void) stack;
if (arg->head == NULL)
{
dprintf(2, "L%d: can't pint, stack empty\n", line_number);
free_args();
exit(EXIT_FAILURE);
}
printf("%d\n", arg->head->n);
}
