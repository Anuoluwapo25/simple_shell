#include "shell.h"
/**
 * _ext - function that exit the shell program
 * @cmd: command passed
 * @cmdtok: command tokenized
 * Return: void
 */

void _ext(char *cmd, char **cmdtok)
{
	free(cmd);
	_farr(cmdtok);
	exit(0);
}
