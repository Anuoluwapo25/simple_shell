#include "shell.h"
/**
 * _tokenise - function that tokenize a string
 * @command: string to be tokenized.
 * @delim: delimeter.
 * Return: return tok.
 */
char  **_tokenise(char *command, const char *delim)
{
	char **tok;
	char *token;
	int len;
	int i;

	len = _tokcount(command, delim);
	if (len == -1)
	{
		free(command);
		return (NULL);
	}
	tok = malloc(sizeof(char *) * (len + 1));
	if (tok == NULL)
	{
		perror("malloc");
		return (NULL);
	}
	token = strtok(command, delim);
	i = 0;
	while (token != NULL)
	{
		tok[i] = _stdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tok[i] = NULL;
	if (tok == NULL)
	{
		free(command);
		return (NULL);
	}
	return (tok);
}
