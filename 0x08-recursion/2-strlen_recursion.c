#include "main.h"

/**
 * _strlen_recursion - prints the length of a string in a recursion
 * @s: the string which length is to be calculated
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return(0);
	s++;
	return 1 + (_strlen_recursion(s));
}
