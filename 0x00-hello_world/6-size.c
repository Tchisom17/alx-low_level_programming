#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %c bytes(s)\nSize of an int: %d bytes(s)\nSize of a long int: %d bytes(s)\nSize of a long long int: %d bytes(s)\nSize of a float: %d bytes(s)\n",sizeof(char),sizeof(int),sizeof(long int),sizeof(long long int),sizeof(float));
	    return (0);
}
