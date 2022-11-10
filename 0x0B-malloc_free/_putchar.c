#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 * Return: On success 1, 0 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
