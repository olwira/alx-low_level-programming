#include "main.h"

/**
 * _sqrt_recursion - giver square root of a number using recursion
 * @n: parameter to be square rooted
 * @i: iterator
 * Return: a number
 */

int _sqrt_recursion(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
