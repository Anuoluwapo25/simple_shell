#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>
#include <stddef.h>

extern char **environ;

char **pathcpy(void);
char *_stdup(char *str);
void _end(char *cmd);
int _tokcount(char *command, const char *delim);
char *pathname(char *cmd, char **pathcpy);
char **_tokenise(char *command, const char *delim);
void _farr(char **token);
void cmdloop(void);
void _exepath(char **pathcp, char *fullpath, char **cmdtok);
void _ext(char *cmd, char **cmdtok);
int _exe_cute(char *cmd, char **cmdline);
int _singlep(char a);
char *_stcpy(char *dest, const char *src);
char *str_cat(char *s1, char *s2);
unsigned int _stlen(char *s);
void _signal(int sign);
char *_stchr(char *a, char s);
void prompt(void);

#endif

