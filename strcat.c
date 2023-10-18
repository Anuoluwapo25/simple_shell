#include "shell.h"

/**
 * str_cat - function that appends two strings
 * @s1: parameter dest
 * @s2: source string
 * Return: 0
 */

char *str_cat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[len1] != '\0'; i++)
		len1++;

	for (i = 0; s2[len2] != '\0'; i++)
		len2++;
	for (i = 0 ; i <= len2 ; i++)
		s1[len1 + i] = s2[i];
	s1[len1 + len2] = '\0';

	return (s1);
}
