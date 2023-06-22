#include "monty.h"
/**
 * add_node - add node
 * @head: head of stack
 * @n: value
 * Return: void
 */
void add_node(stack_t **head, int n)
{
	stack_t *node, *b;

	b = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (b)
		b->prev = node;
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
