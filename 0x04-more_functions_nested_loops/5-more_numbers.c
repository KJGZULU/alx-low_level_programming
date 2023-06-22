#include "main.h"
/**
 * more_number - Printing numbers times ten
 * Return: multiplying numbers times ten
 */
void more_numbers(void)
{
int t, k;
for (t = 0; t < 10; t++)
{
for (k = 0; k <= 14; k++)
{if (k > 9)
{
_putchar((k / 10) + '0');
}
_putchar((k % 10) + '0');
}
_putchar('\n');
}	
}
