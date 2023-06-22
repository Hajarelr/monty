#include "monty.h"
/**
 * f_push - add node to stack
 * @st: stack head
 * @c: line number
 * Return: no return
 */
void f_push(stack_t **st, unsigned int c)
{
	int a, i = 0, f = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(bus.fd);
			free(bus.line);
			free_dlistint(*st);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(bus.fd);
		free(bus.line);
		free_dlistint(*st);
		exit(EXIT_FAILURE);
	}
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(st, a);
	else
		add_queue(st, a);
}
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
