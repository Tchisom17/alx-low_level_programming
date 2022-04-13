#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets ten times
*/
void print_alphabet_x10(void)
{
char alpha;
int a;
for (a = 1; a <= 10; a++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
