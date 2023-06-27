#include "main.h"
/**
 * Print_line - Drawing a straight line acording to parameter
 * @n: The number of drawn line
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
