#include "main.h"

/**
 *_strlen -  length of a string
 *@s: A pointer to an int that will update
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
