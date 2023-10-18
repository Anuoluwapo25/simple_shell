#include "shell.h"

/**
 * _stcpy - function that copies a string
 * @dest: destination
 * @src: source string
 * Return: 0
 */

char *_stcpy(char *dest, const char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + 1);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
