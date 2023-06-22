#include "main.h"
/**
 * Print_line - Drawing a straight line acording to parameter
 * @n: The number of drawn line
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
