#include "shell.h"
/**
 * pathcpy - funtion that print path sepearated by delim
 *
 * Return: pathcpy
 */
#define NPATH 10000
char **pathcpy()
{
	char *path = NULL;
	char npath[NPATH];
	char **pathcpy;

	path = getenv("PATH");
	_stcpy(npath, path);
	pathcpy = _tokenise(npath, ":");
	return (pathcpy);
}

/**
 * pathname - funtion that print path sepearated by delim.
 * @cmd: command
 * @pathcpy: environmental variable
 * Return: NULL.
 */
char *pathname(char *cmd, char **pathcpy)
{
	int i;
	char *pathexe = NULL;

	for (i = 0; pathcpy[i] != NULL; i++)
	{
		pathexe = malloc(sizeof(char) * (_stlen(pathcpy[i]) + _stlen(cmd) + 2));
		if (pathexe == NULL)
		{
			perror("Error: failed");
			return (NULL);
		}
		_stcpy(pathexe, pathcpy[i]);
		str_cat(pathexe, "/");
		str_cat(pathexe, cmd);
		if (access(pathexe, F_OK) == 0)
		{
			return (pathexe);
		}
		free(pathexe);
	}
	return (NULL);
}
