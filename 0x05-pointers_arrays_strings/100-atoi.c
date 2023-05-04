#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: input
 * Return: string
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int m = 0;
	int len = 0;
	int f = 0;
	int digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			m = m * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);

	return (m);
}

