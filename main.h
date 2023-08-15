#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>

char *findexpath(const char *command, const char *path);
char *_getenv(const char *name);
void executeCommand(char *command, char **arraytok);
int main(void);
char **strtok_str(char *copy_line);
char *readinput();
void free_memory(char *lineptr, char *copy_line, char **args);

#endif
