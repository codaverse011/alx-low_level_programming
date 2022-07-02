#include <stdio.h>

/**
 * main - Prints the name of the program by a new line.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 *
 * Return: 0 - success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
