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
int q;
for (n = 48; n <= 57; n++)
{
for (p = n + 1; p <= 57; p++)
{
for (q = p + 1; q <= 57; q++)
{
if (n == p + q - 1 || q == n + p - 1 || p == n + q - 1)
{
n++;
p++;
q++;
}
putchar(n);
putchar(p);
putchar(q);
if (n == 55)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
