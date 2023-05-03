#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed in reverse
 * return: 0
 */
void print_rev(char *s)
{
	int longp = 0;
	int m;

	while (*s != '\0')
	{
		longp++;
		s++;
	}
	s--;
	for (m = longp; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
