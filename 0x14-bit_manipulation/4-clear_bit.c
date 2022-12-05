#include "main.h"

/**
 * clear_bit - sets value of a bit at a given index to 0
 * @n: pointer to the bit
 * @index: index to set the value at - indices start at 0
 * Return: 1 if successful, -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
