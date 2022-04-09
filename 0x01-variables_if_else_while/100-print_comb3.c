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
for (n = 48; n <= 57; n++)
{
for (p = n + 1; p <= 57; p++)
{
if (n == p + 1 || n == p)
{
n++;
p++;
}
putchar(n);
putchar(p);
putchar(',');
putchar(' ');
}
}
puthcar('\n');
return (0);
}
