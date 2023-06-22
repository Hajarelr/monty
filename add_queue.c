#include "monty.h"
/**
 * add_queue - add node to the tail stack
 * @head: head
 * @n: value
 * Return: void
 */
void add_queue(stack_t **head, int n)
{
	stack_t *node, *b;

	b = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (b)
	{
		while (b->next)
			b = b->next;
	}
	if (!b)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		b->next = node;
		node->prev = b;
	}
}
