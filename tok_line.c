#include "monty.h"
/**
 * tok_line - Function that tokenizes the line
 * Return: Void
 */
void tok_line(void)
{
int n = 0;
char *m = " \n", *o = NULL, *p = NULL;
p = malloc(sizeof(char) * (strlen(arg->line) + 1));
strcpy(p, arg->line);
arg->n_tok = 0;
o = strtok(p, m);
while (o)
{
arg->n_tok += 1;
o = strtok(NULL, m);
}
arg->tok = malloc(sizeof(char *) * (arg->n_tok + 1));
strcpy(p, arg->line);
o = strtok(p, m);
while (o)
{
arg->tok[n] = malloc(sizeof(char) * (strlen(o) + 1));
if (arg->tok[n] == NULL)
malloc_failed();
strcpy(arg->tok[n], o);
o = strtok(NULL, m);
n++;
}
arg->tok[n] = NULL;
free(p);
}
