#include "main.h"

/**
 * _isupper - Checksl if a letter uppercase
 * @c: Letter to be checked
 *
 * Return: 1 if uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
