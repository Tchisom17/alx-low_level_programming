#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 * Return: 1 if character is a letter, uppercase or lowercase, 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
