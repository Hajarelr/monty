#include "monty.h"
/**
 * init_arg - Functio nthat initializes arguments
 * Return: Void
 */
void init_arg()
{
arg = malloc(sizeof(arg_t));
if (arg == NULL)
malloc_failed();
arg->instru = malloc(sizeof(instruction_t));
if (arg->instru == NULL)
malloc_failed();
arg->str = NULL;
arg->line = NULL;
arg->head = NULL;
arg->stack_length = 0;
arg->line_number = 0;
arg->n_tok = 0;
arg->stack = 1;
}
