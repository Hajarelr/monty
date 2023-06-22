#include "monty.h"
/**
 * get_instru - Function that sets the instructions
 * Return: Void
 */
void get_instru(void)
{
int n = 0;
instruction_t instru[] = {
{"push", &push}, {"pall", &pall},
{"pint", &pint}, {"pop", &pop},
{NULL, NULL}
};
if (arg->n_tok == 0)
return;
for (; instru[n].opcode != NULL; n++)
{
if (strcmp(instru[n].opcode, arg->tok[0]) == 0)
{
arg->instru->opcode = instru[n].opcode;
arg->instru->f = instru[n].f;
return;
}
}
invalid_instru();
}
/**
 * invalid_instru - Function that handles error instru
 * Return: Void
 */
void invalid_instru(void)
{
dprintf(2, "L%d: unknow instrunction %s\n",
		arg->line_number, arg->tok[0]);
free_args();
exit(EXIT_FAILURE);
}
