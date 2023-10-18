#include "shell.h"

/**
 * cmdloop - main function
 * Return: void
 */

void cmdloop()
{
	char *cmd, *fullpath = NULL, **cmdtok, **pathcp = NULL;
        size_t count = 0;
        ssize_t readline;

        signal(SIGINT, _signal);
        while (1)
        {
                cmd = NULL;
                cmdtok = NULL;
                if (isatty(STDIN_FILENO))
                        prompt();
                readline = getline(&cmd, &count, stdin);
                if (readline != -1)
                {
                        cmdtok = _tokenise(cmd, "\t\n ");
                        if (cmdtok[0] == NULL)
                        {
                                free(cmd);
                                free(cmdtok);
                                continue;
                        }
                        if (_stchr(cmdtok[0], '/') != NULL)
                                _exe_cute(cmdtok[0], cmdtok);
                        else if (strcmp(cmd, "exit") == 0)
                                _ext(cmd, cmdtok);
                        else
                                _exepath(pathcp, fullpath, cmdtok);
                        _farr(cmdtok);
                        free(cmd);
                }
                else
                {
                        free(cmd);
                        exit(0);
                }
        }
}
