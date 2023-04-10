#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: counts the number of arguments.
 * @argv: prints the string of arguments.
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
