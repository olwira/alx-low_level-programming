#include <unistd.h>

/**
 * _putchar - prints character c to stdout
 * @c: character to be printed
 * Return: 1 on success, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
