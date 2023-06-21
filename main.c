#include "monty.h"
buffer_t buffer = {NULL, NULL};
/**
 * main - Function of the entry
 * @argc: 1st input
 * @argv: 2nd input
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc == 2)
exec_cmd(argv[1]);
else
{
dprintf(STDERR_FILENO, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
return (0);
}
/**
 * exec_cmd - Function that executes commands
 * @argv: 1st input
 * Return: Void
 */
void exec_cmd(char *argv)
{
int a = 0, b = 0;
size_t c = 0;
char *d = NULL, *e = NULL;
stack_t *stack = NULL;
buffer.fd = fopen(argv, "r");
if (buffer.fd)
{
while (getline(&buffer.line, &c, buffer.fd) != -1)
{
a++;
d = strtok(buffer.line, " \n\t\r");
if (d == NULL)
{
free(d);
continue;
}
e = strtok(NULL, " \n\t\r");
b = get_opc(&stack, d, e, a);
if (b == 1)
push_er(buffer.fd, buffer.line, stack, a);
else if (b == 2)
ins_er(buffer.fd, buffer.line, stack, d, a);
}
free(buffer.line);
free_dlistint(stack);
fclose(buffer.fd);
}
else
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv);
exit(EXIT_FAILURE);
}
}
/**
 * get_opc - Functon that handles the OPCODE
 * @stack: 1st input
 * @arg: 2nd input
 * @e: 3th input
 * @a: 4th input
 * Return: Nothing
 */
int get_opc(stack_t **stack, char *c, char *e, int a)
{
int n = 0;

instruction_t op[] = {
{"push", push},
{"pall", pall},
{NULL, NULL}
};
while (op[n].opcode)
{
if (!strcmp(c, op[n].opcode))
{
if (!strcmp(c, "push"))
{
if (_isdigit(e) == 1)
value = atoi(e);
else
return (1);
}
op[n].f(stack, (unsigned int)a);
break;
}
n++;
}
if (!op[n].opcode)
return (2);
return (0);
}
