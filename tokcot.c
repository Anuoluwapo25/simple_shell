#include "shell.h"

/**
 * _tokcount - function to count number tokens
 * @command: command pass
 * @delim: delimeter
 * Return: count
 */

int _tokcount(char *command, const char *delim)
{
	char *cmd;
	int count = 0;
	char *token;

	cmd = _stdup(command);
	if (cmd == NULL)
		return (0);
	token = strtok(cmd, delim);
	while (token)
	{
		count++;
		token = strtok(NULL, delim);
	}
	free(cmd);
	return (count);
}
