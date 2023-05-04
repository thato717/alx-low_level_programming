#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: input
 * return: print
 */
void puts2(char *str)
{
	int longp = 0;
	int m = 0;
	char *y = str;
	int t;

	while (*y != '\0')
	{
		y++;
		longp++;
	}
	m = longp - 1;
	for (t = 0; t <= m; t++)
	{
		if (t % 2 == 0)
		{
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
