#include <stdio.h>

/**
 * main - prints the name of the program.
 * @argc: counts the number of arguments.
 * @argv: prints the string of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
