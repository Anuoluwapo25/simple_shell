#include "shell.h"

/**
 * _exepath - function that excute the path
 * @pathcp: variable with env variable
 * @fullpath: varaible to contain pathname
 * @cmdtok: tokenized command
 * Return: void
 */

void _exepath(char **pathcp, char *fullpath, char **cmdtok)
{
	pathcp = pathcpy();
	fullpath = pathname(cmdtok[0], pathcp);
	if (fullpath != NULL)
	{
		_exe_cute(fullpath, cmdtok);
		free(fullpath);
		_farr(pathcp);
	}
	else
	{
		free(fullpath);
		_farr(pathcp);
		perror("No such file or directory");
	}
}
