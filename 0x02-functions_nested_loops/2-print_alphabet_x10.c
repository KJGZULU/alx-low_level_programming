#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet x10
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
char k;
int i = 0;
while (i <= 9)
{
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
}
_putchar('\n');
i++;
}
}
