#include "monty.h"
/**
 * pall - Function that print all the values of the stack
 * @stack: 1st input
 * @line_number: 2nd input
 * Return: Void
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *m;
if (arg->head == NULL)
return;
(void) line_number;
(void) stack;
m = arg->head;
while (m != NULL)
{
printf("%d\n", m->n);
m = m->next;
}
}
