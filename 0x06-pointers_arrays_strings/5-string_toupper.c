#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes  all lowercase letters
 * @s: string to return
 * Return: String
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
			i++;
		}
	}
	return (s);
}
