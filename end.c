#include "shell.h"

/**
 * _end - function for end of file
 * @cmd: command
 * Return: void
 */

void _end(char *cmd)
{
	free(cmd);
	exit(EXIT_SUCCESS);
}
