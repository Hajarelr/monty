#include "monty.h"
/**
 * free_args - Function that frees the memory
 * Return: Void
 */
void free_args(void)
{
close_str();
free_tok();
free_arg();
}
