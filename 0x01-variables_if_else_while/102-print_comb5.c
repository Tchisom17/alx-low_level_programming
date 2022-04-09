#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int n, p, q, r;
for (n = 48; n <= 57; n++)
{
for (p = 48; p <= 57; p++)
{
for (q = 48; q <= 57; q++)
{
for (r = 48; r <= 57; r++)
{
if (((q + j) > (n + p) && q >= n) || n < q)
{
putchar(n);
putchar(p);
putchar(' ');
putchar(q);
putchar(r);
if (n + p + q + r == 227 && n == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
