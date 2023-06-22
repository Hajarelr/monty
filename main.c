#include "monty.h"
arg_t *arg = NULL;
/**
 * main - Function of the entry
 * @argc: 1st input
 * @argv: 2nd input
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
size_t m = 0;
v_arg(argc);
init_arg();
get_str(argv[1]);
while (getline(&arg->line, &m, arg->str) != -1)
{
arg->line_number += 1;
tok_line();
get_instru();
run_instru();
free_tok();
}
close_str();
free_arg();
return (0);
}
