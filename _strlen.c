#include "shell.h"

/**
 * _stlen - function that get the lenght of a string.
 * @s: pointer to string.
 * Return: return lenght of string.
 */

unsigned int _stlen(char *s)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
