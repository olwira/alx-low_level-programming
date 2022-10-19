#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * int - the integer
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
