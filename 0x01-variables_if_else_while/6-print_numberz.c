#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (success)
 */
int manin(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
