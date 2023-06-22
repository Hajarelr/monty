
#include "monty.h"
/**
 * f_swap - add two elemnts top
 * @st : head stack
 * @c: counter
 * Return: void
 */
void f_swap(stack_t **st, unsigned int c)
{
	stack_t *a;
	int l = 0;
	int b;

	a = *st;
	while (a)
	{
		a = a->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", c);
		fclose(bus.fd);
		free(bus.line);
		free_dlistint(*st);
		exit(EXIT_FAILURE);
	}
	a = *st;
	b = a->n;
	a->n = a->next->n;
	a->next->n = b;
}
