#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int d, p;
for (d = 0; d < 10; d++)
for (p = d +1; p < 10; p++)
putchar(d + '0');
putchar(p + '0');
if(d != 8 || p != 9)
putchar(',');
putchar(' ');
return (0);
}
