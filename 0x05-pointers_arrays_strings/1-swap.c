#include <stdio.h>
/**
 * swap_int - swaps th value of int
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 * Return: zero
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
