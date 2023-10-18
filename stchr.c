#include "shell.h"
#include <string.h>
#include <stdio.h>

/**
 * _stchr - a function that locates a character.
 * @a: pointer to a string.
 * @s: character to search.
 * Return: return the first occurrence of the character.
 */

char *_stchr(char *a, char s)
{
	while (*a != s)
	{
		if (*a == '\0')
		{
			return (NULL);
		}
		a++;
	}
	return (a);
}

