#include "monty.h"
/**
 * pint - print the top
 * @stack: head
 * @l: number of line
 * Return: void
 */
void pint(stack_t **stack, unsigned int l)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", l);
		fclose(buffer.fd);
		free(buffer.line);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
