#include "monty.h"
/**
 * free_tok - Function that frees tokens
 * Return: Void
 */
void free_tok(void)
{
int n = 0;
if (arg->tok == NULL)
return;
while (arg->tok[n])
{
free(arg->tok[n]);
n++;
}
free(arg->tok);
arg->tok = NULL;

