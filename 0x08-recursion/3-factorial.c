#include "main.h"

/**
 * factorial - gives the factorial of a given number
 * @n: number in question
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
