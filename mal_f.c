#include "monty.h"
/**
 * malloc_failed - Function thath handles the error
 * Return: Void
 */
void malloc_failed(void)
{
dprintf(2, "Error: malloc fail\n");
free_arg();
exit(EXIT_FAILURE);
}
