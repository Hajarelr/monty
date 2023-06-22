#include "monty.h"
/**
 * run_instru - Function that runs the instructions
 * Return: Void
 */
void run_instru(void)
{
stack_t *stack = NULL;
if (arg->n_tok == 0)
return;
arg->instru->f(&stack, arg->line_number);
}
