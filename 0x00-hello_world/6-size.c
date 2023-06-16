#include <stdio.h>
/**
* main - A program that print the size of various computer types
* Return 0 (success)
*/
int main(void)
{
printf("size of a char: %ld byte(s)\n", sizeof(char));
printf("size of an int: %ld byte(s)\n", sizeof(int));
printf("size of a long int: %ld byte(s)\n", sizeof(long int));
printf("size of long long int: %ld byte(s)\n", sizeof(long long int));
printf("size of a float: %ld byte(s)\n", sizeof(float));
printf("size of double: %ld byte(s)\n", sizeof(double));
printf("size of long double: %ld byte(s)\n", sizeof(long double));
return (0);
}
