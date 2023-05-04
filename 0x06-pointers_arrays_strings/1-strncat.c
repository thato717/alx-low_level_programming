#include "main.h"
/**
 * char *_strncat - concatenas two strings
 * @dest: input
 * @src: input
 * @n: int
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int m;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[p] = src[m];
		p++;
		m++;
	}
	dest[p] = '\0';
	return (dest);
}
