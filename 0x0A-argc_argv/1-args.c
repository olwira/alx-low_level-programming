#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%i\n", argc - 1);
return (0);
}
