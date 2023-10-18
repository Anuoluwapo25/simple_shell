#include "shell.h"
/**
 * _execute - function that executes fullpath and without path.
 * @cmdtok: command line argument
 * Return: void
 */

void _execute(char **cmdtok)
{
	char *fullpath;
	char **pathcp;

	if (cmdtok[0] == NULL)
	{
		return;
	}
	if (_stchr(cmdtok[0], '/') != NULL)
		_exe_cute(cmdtok[0], cmdtok);
	else
	{
		pathcp = pathcpy();
		fullpath = pathname(cmdtok[0], pathcp);
		if (fullpath != NULL)
		{
			if (_exe_cute(fullpath, cmdtok) == -1)
				perror("Excecution failed");
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
}
