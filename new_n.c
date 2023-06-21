#include "monty.h"
/**
 * new_n - Function that creates a new node
 * @n: 1st input
 * Return: New node
 */
stack_t *new_n(int n)
{
stack_t *new = NULL;
new = malloc(sizeof(stack_t));
if (new == NULL)
{
dprintf(STDERR_FILENO, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
return (new);
}
