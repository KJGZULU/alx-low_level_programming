#include <stdio.h>
/**
 * _puts - prints a string
 * @str: a string to print
 * Return: void
 */
void _puts(char *str)
{
for (; *str != '\n'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
