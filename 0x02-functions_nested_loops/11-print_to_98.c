#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - printa all natural numbers from a number to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d\n", n);
}
else
{
while (n < 98)
{
printf("%d\n", n);
putchar(',');
putchar(' ');
n++;
}
}
}
