#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;
int p;
for (n = 0; n <= 98; n++)
{
for (p = n + 1; p <= 99; p++)
{
putchar((n / 10) * '0');
putchar((n % 10) * '0');
putchar(' ');
putchar((p / 10) * '0');
putchar((p % 10) * '0');
if (n == 98 && p == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
