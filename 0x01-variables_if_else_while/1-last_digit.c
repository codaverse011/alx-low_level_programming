#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand - RAND_MAX / 2;
	/*Code goes there*/
	int i;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %d is 0 and is zero\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, i);
	}
	return (0);
}
