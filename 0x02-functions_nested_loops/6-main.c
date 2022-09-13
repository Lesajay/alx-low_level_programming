#include "main.h"
#include <stdio.h>

/**
 * main - checks code
 *
 * Return: always 0
 *
 */

int main(void)
{
	int r;


	r =  _abs(-1);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);

	return (0);
}
