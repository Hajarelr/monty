#include "monty.h"
/**
 * push_er - Function that handles the error
 * @fd: 1st input
 * @b: 2nd input
 * @s: 3th input
 * @c: 4th input
 */
void push_er(FILE *fd, char *b, stack_t *s, int c)
{
dprintf(STDERR_FILENO, "L%u: usage: push integer\n", c);
fclose(fd);
free(b);
free_dlistint(s);
exit(EXIT_FAILURE);
}
/**
 * ins_er - Function that handles the error
 * @fd: 1st input
 * @b: 2nd input
 * @s: 3th input
 * @c: 4th input
 * @a: 5th input
 */
void ins_er(FILE *fd, char *b, stack_t *s, char *c, int a)
{
dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", a, c);
fclose(fd);
free(b);
free_dlistint(s);
exit(EXIT_FAILURE);
}
