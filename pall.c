#include "monty.h"
/**
 * f_pall - print stack
 * @st: head
 * @c: no used
 * Return: void
 */
void f_pall(stack_t **st, unsigned int c)
{
	stack_t *h;
	(void)c;

	h = *st;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
