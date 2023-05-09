#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: starting address
 * @b: any value
 * @n: interger input
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; x > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
