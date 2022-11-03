#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - giver square root of a number using recursion
 * @n: parameter to be square rooted
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
