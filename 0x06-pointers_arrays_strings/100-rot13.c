#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @s: pointer
 * Return: s
 */
char *rot13(char *s)
{
	int x, y;
	char dataa[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "KLMNOPQRSTUVWYZABCDEFGHIJklmnopqrstuvwxyzabcdefghij";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == dataa[y])
			{
				s[x] = datarot[y];
				break;
			}
		}
	}
	return (s);
}
