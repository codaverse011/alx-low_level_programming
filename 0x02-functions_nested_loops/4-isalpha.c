#include "main.h"

/**
 * main - Entry point
 *
 * Return: ALways 0 (success)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
