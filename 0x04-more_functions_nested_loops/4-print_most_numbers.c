#include "main.h"
/**
 * print_most_numbers - Printing numbers
 * Desc: Prints the numbers except 2 and 4
 * Return: numbers
 */
void print_most_numbers(void)
{
int k = 0;
for (; k <= 9; k++)
{
if (k == 2 || k == 4)
{
continue;
}
else
{
_putchar(k + '0');
}
}
_putchar('\n');
}
