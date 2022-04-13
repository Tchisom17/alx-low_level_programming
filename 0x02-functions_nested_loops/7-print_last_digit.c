#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int b = n % 10;
if (b < 0)
b *= -1;
_putchar(b + '0');
return (b);
}
