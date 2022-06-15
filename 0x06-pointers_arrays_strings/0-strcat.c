#include "main.h"

/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, c2;
	/*find the size of the dest array*/

	while (dest[c])
		c++;
	/*iterate through each src array value without the null byte*/
	
	for (c2 = 0; src[c2]; c++)
	/*append src[c2] to dest[c] while overwritting the null byte in dest*/
	dest[c++] = src [c2];
	return (dest);
}
