#include "monty.h"
/**
 * free_dlistint - Function that frees double linked list
 * @n: 1st input
 * Return: Void
 */
void free_dlistint(stack_t *n)
{
stack_t *m;
while (n)
{
m = n;
n = n->next;
free(m);
}
free(n);
}
