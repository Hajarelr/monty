#include "monty.h"
/**
 * f_pint - print the top
 * @st: head
 * @l: number of line
 * Return: void
 */
void f_pint(stack_t **st, unsigned int l)
{
	if (*st == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l);
		fclose(bus.fd);
		free(bus.line);
		free_dlistint(*st);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*st)->n);
}
