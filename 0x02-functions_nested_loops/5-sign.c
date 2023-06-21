#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: checking the number
 * Return: 1 if number is + and 0 if number is 0 and -1 if number is negative
 */
int print_sign(int n)
{
if  (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
