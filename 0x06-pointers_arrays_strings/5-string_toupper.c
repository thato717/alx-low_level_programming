#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @n: input
 * Return: uppercase string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
