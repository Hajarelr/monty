#include "monty.h"
/**
 * execute - execute opcode
 * @stack: head
 * @c: counter
 * @fd: montyfile
 * @line: line content
 * Return: void
 */
int f_execute(char *line, stack_t **stack, unsigned int c, FILE *fd)
{
instruction_t instruct[] = {
			{"push", f_push},
			{"pall", f_pall},
			{"pint", f_pint},
			{"pop", f_pop},
			{"swap", f_swap},
			{"add", add},
			{"nop", nop},
			{NULL, NULL}
		};
		unsigned int i = 0;
		char *o;

		o = strtok(line, " \n\t");
		if (o && o[0] == '#')
			return (0);
		bus.arg = strtok(NULL, " \n\t");
		while (instruct[i].opcode && o)
		{
			if (strcmp(o, instruct[i].opcode) == 0)
			{
				instruct[i].f(stack, c);
				return (0);
			}
			i++;
		}
		if (o && instruct[i].opcode == NULL)
		{
			 fprintf(stderr, "L%d: unknown instruction %s\n", c, o);
			 fclose(fd);
			 free(line);
			 free_dlistint(*stack);
			 exit(EXIT_FAILURE);
		}
		return (1);
}
