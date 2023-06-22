#include "monty.h"
/**
 * is_digit - Function that checks if it's a digit
 * @str: 1st input
 * Return: 1 if it's a valid number 0 if it is not
 */
int is_digit(char *str)
{
int n = 0;
while (str[n])
{
if (n == 0 && str[n] == '-' && str[n + 1])
{
n++;
continue;
}
if (str[n] < '0' || str[n] > '9')
return (0);
n++;
}
return (1);
}
