#include "shell.h"

/**
 * prompt - function that prompts user
 * Return: void.
 */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "$ ", 2);
		fflush(stdout);
	}
}
