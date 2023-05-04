#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int a, m, longp;

	longp = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		longp++;
	}

	m = (longp / 2);

	if ((longp % 2) == 1)
	{
		m = ((longp + 1) / 2);

		for (a = m; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
}
