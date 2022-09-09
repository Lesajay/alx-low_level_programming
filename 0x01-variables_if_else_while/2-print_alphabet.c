#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	char lj;

	for (lj = 'a'; lj <= 'z'; lj++)
	{
		putchar(lj);
	}

	putchar('\n');
	return (0);
}
