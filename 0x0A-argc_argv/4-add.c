#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int result = 0, num, i, j, k;

if (argc == 1)
printf("0\n");

for (i = 0; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("%s\n", "Error");
return (1);
}
}
}
for (k = 0; k < argc; k++)
{
num = atoi(argv[k]);
result += num;
}
printf("%d\n", result);
return (0);
}
