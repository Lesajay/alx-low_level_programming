#include <stdio.h>

/**
 * main - prints both lower and uppercase aphabet
 * Return: always 0
 */

int main(void)
{
	char lj;

	for (lj = 'a'; lj <= 'z'; lj++)
		putchar(lj);
	for (lj = 'A'; lj <= 'Z'; lj++)
		putchar(lj);

	putchar('\n');
	return (0);
}
