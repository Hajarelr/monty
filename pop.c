#include "monty.h"
/**
 * f_pop - print top
 * @st: head stack
 * @c: counter
 * Return: void
 */
void f_pop(stack_t **st, unsigned int c)
{
	stack_t *a;

	if (*st == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", c);
		fclose(bus.fd);
		free(bus.line);
		free_dlistint(*st);
		exit(EXIT_FAILURE);
	}
	a = *st;
	*st = a->next;
	free(a);
}
