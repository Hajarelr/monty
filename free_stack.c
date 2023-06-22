#include "monty.h"
/**
 * free_stack - Function that frees the stack
 * @head: 1st input
 * Return: Void
 */
void free_stack(stack_t *head)
{
if (head == NULL)
return;
if (head->next != NULL)
{
free_stack(head->next);
}
free(head);
}
