#include "shell.h"
/**
 * main - main function
 * Return: 0;
 */
int main(void)
{
	char *cmd;
	size_t count = 0;
	char **cmdtok;
	const char *delim = "\t\n ";
	ssize_t readline;

	signal(SIGINT, _signal);
	while (1)
	{
		cmd = NULL;
		cmdtok = NULL;
		if (isatty(STDIN_FILENO))
		{
			prompt();
		}
		readline = getline(&cmd, &count, stdin);
		if (readline != -1)
		{
			cmdtok = _tokenise(cmd, delim);
			if (strcmp(cmdtok[0], "exit") == 0)
			{
				free(cmd);
				_farr(cmdtok);
				break;
			}
			_execute(cmdtok);
			_farr(cmdtok);
			free(cmd);
		}
		else
		{
			free(cmd);
			exit(0);
		}
	}
	return (0);
}
