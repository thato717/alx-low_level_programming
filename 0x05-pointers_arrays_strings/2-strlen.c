#include "main.h"
/**
 * _strein - returns length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longp = 0;

	while (*s != '\0')
	{
		longp++;
		s++;
	}

	return (longp);
}
