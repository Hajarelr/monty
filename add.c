#include "monty.h"
/**
 * add - Function that adds the top two elements of the stack
 * @st: 1st input
 * @c: 2nd input
 * Return: Void
 */
void add(stack_t **st, unsigned int c)
{
stack_t *p;
int m = 0, o;
p = *st;
while (p)
{
p = p->next;
m++;
}
if (m < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", c);
fclose(bus.fd);
free(bus.line);
free_dlistint(*st);
exit(EXIT_FAILURE);
}
p = *st;
o = p->n + p->next->n;
p->next->n = o;
*st = p->next;
free(p);
}
