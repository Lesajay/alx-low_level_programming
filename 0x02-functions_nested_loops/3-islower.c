#include "main.h"

/**
 * _islower - checks
 * @c: An input character
 * Description: prints using _putchar
 * Return: 1 is lowercase 0 otherwise
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

