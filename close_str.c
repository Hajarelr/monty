#include "monty.h"
/**
 * close_str - Function that close the stram
 * Return: Void
 */
void close_str(void)
{
if (arg->str == NULL)
return;
fclose(arg->str);
arg->str = NULL;
}
