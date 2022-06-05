#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101)
		{
			continue;
		}
		if (i == 113)
		{
			continue;
		}
	putchar(i);
	}
		putchar('\n');
	
	return (0);
}
	
