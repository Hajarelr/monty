#include "monty.h"
/**
 * free_head - Function that frees the memory
 * Return: Void
 */
void free_head(void)
{
if (arg->head)
free_stack(arg->head);
arg->head = NULL;
}
/**
 * free_arg - Function that frees the memory
 * Return: Void
 */
void free_arg()
{
if (arg == NULL)
return;
if (arg->instru)
{
free(arg->instru);
arg->instru = NULL;
}
free_head();
if (arg->line)
{
free(arg->line);
arg->line = NULL;
}
free(arg);
}
