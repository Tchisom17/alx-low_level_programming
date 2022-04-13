#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets ten times
*/
void print_alphabet_x10(void)
{
char alpha;
int a = 1;
while (a <= 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
