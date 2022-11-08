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
/* Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
