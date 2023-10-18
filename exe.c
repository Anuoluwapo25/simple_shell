#include "shell.h"

/**
 * _exe_cute - functon that execute command
 * @cmdline: command string passed
 * @cmd: command passed
 * Return: 0.
 */

int _exe_cute(char *cmd, char **cmdline)
{
	pid_t pid = fork();
	int status;

	if (pid == 0)
	{
		if (execve(cmd, cmdline, NULL) == -1)
		{
			perror("Error ");
			exit(1);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}

