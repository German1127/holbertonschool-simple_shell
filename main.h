#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
char *path(char *filename);
char *get_env(const char *name);
char *findexpath(const char *command, const char *path);
char *_getenv(const char *name);
int executeCommand(char *command, char **arraytok);
char **strtok_str(char *copy_line);
char *readinput();
void free_memory(char **args);
int freememory2(char *command, char *commandpath);
void print_environment(void);
#endif
