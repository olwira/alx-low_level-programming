#include "main.h"

/**
 * get_bit - Gets value of a bit at a given index
 * @n: the bit in questionn
 * @index: Index to get the value at - indices start at 0
 * Return: value of bit at index if successful, -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
