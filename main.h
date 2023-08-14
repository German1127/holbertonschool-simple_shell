#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>

char *path(char *filename);
char *_getenv(const char *name);
char *findexpath(const char *command, const char *path);
int main();

#endif
