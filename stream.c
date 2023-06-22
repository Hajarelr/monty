#include "monty.h"
/**
 * get_str_fail - Function that handles the error
 * @i: 1st input
 * return: Void
 */
void get_str_fail(char *i)
{
dprintf(2, "Error: Can't open file %s\n", i);
free_arg();
exit(EXIT_FAILURE);
}
/**
 * get_str - Function that gets the stream
 * @i: 1st input
 * Return: Void
 */
void get_str(char *i)
{
int fd;
fd = open(i, O_RDONLY);
if (fd == -1)
get_str_fail(i);
arg->str = fdopen(fd, "r");
if (arg->str == NULL)
{
close(fd);
get_str_fail(i);
}
}
