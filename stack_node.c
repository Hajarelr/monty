#include "monty.h"
/**
* delete_stack_node - Function that deletes the node
* Return: void
*/
void delete_stack_node(void)
{
stack_t *m;
m = arg->head;
arg->head = m->next;
free(m);
}
