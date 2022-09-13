#include "main.h"

/**
 * main - check function
 * Return: always zero
 */

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}
