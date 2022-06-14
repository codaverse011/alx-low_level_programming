#include "main.h"
#include <string.h>

/**
 *_strlen -  swaps the values of two integers.
 *@s: String input
 *
 *Return: Returns lenght of string
 */
int _strlen(char *s)
{
	int len;
	
	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
