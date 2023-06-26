#include <stdio.h>
/**
 * swap_in - swaps th value of int
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 * Return: zero
 */
void swap_int(int *a, int *b)
/* the function that swaps the value of two int */
{
int temp = *a;
*a = *b;
*b = temp;
}
