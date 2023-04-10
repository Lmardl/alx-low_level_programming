#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: counts the number of arguments.
 * @argv: prints the string of arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
