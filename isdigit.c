#include "monty.h"
/**
 * _isdigit - Function that checks if a digit is between 0 and 9
 * @n: 1st input
 * Return: 0 or 1
 **/
int _isdigit(char *n)
{
char *m = n;
if (n == NULL)
return (0);
if (*m == '-')
m++;
for (; *m != '\0'; m++)
{
if ((*m < '0' || *m > '9'))
{
return (0);
}
}
return (1);
}
