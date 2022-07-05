#include "main.h"

/**
 *_isdigit - Checks for a digit (0 through 9)
 *@c: The digit to be checked
 *
 *Return: 1 (Success) or 0 (Failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
