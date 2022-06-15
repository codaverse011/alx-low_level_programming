#include <stdio.h>

/**
 *main - Entry point  
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = '0'; num <= '9'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
	}
	putchar(num1);
	putchar(num2);
	if (num1 == '||' && num2 == '9')
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
