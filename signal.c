#include "shell.h"

/**
 * _signal - handles SIGINT interruption.
 * @sign: interupt
 * Return: void.
 */

void _signal(int sign)
{
	(void)sign;
	write(STDIN_FILENO,  "\n$ ", 3);
}
