#include "main.h"

/**
 *_strncat - function that concatenates two numbers
 *@dest: parameter to append
 *@src: parameter to source
 *
 *Return: Always 0
 */
char *_strcat(char *dest, char *src,)
{
	int a = 0;
	int b = 0;
	
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
