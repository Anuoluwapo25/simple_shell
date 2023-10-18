#include "shell.h"

/**
 * _farr - function to free array of strings
 * @str: array of string.
 * Return: void
 */

void _farr(char **str)
{
	int i;

	for (i = 0; str[i] != NULL; i++)
		free(str[i]);
	free(str);
}
