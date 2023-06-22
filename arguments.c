#include "monty.h"
/**
 * v_arg - Function that checks the number of arguments
 * @argc: 1st input
 * Return: Void
 */
void v_arg(int argc)
{
if (argc == 2)
return;
dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
