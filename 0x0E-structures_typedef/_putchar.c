#include <stdio.h>

/**
 * _putchar - prints character c to stdout
 * Return: 1 on success, 0 otherwise
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
