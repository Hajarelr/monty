#include "monty.h"
/**
 * pall - Function that print all the values of the stack
 * @stack: 1st input
 * @n: 2nd input
 * Return: Void
 */
void pall(stack_t **stack, unsigned int n)
{
stack_t *m = NULL;
(void)n;
m = *stack;
while (m != NULL)
{
dprintf(STDOUT_FILENO, "%d\n", m->n);
m = m->next;
}
}
