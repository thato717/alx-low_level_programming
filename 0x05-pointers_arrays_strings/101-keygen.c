#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generates random number
 * passwords for program 101-crackme
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int pass[100];
	int i = 0;
	int sum = 0;
	int m = 0;

	srand(time(NULL));

	for (i = 0; 0 < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
