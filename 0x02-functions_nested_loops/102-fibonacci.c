#include <stdio.h>

/**
 * main - main block
 * description: print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be comma and space separated
 * Return 0
 */
int main (void)
{
	int count = 2;
	long inti = 1, j = 2;
	long int k;

	printf("%ul ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%ul\n", j);
		}
		else
		{
			printf("%ul, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
