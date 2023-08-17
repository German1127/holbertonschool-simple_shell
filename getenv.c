#include "main.h"
/**
 * _getenv - searchs for the PATH in the environ
 * @name : the name of the enviroment variable to find
 * Return: the PATH
 */
	char *_getenv(const char *name)
{
	extern char **environ;
	size_t length = strlen(name);
	int i = 0;

	for (; environ[i] != NULL; i++)
	{
	char *current_env = environ[i];

	if (strncmp(current_env, name, length) == 0 && current_env[length] == '=')
	{
	return (&current_env[length + 1]);
	}
	}
	return (NULL);
}
/**
* findexpath - find the excecutable path of the given command
*@command: the given command
*@path: the PATH variable
* Return: a char pointer with the exc path
*/
char *findexpath(const char *command, const char *path)
{
	char *pathcpy;
	char *token;
	char commandpath[1024];
	struct stat exist;

	if (stat(command, &exist) == 0)
		return ((char *)strdup(command));

	pathcpy = strdup(path);
	token = strtok(pathcpy, ":");

	while (token != NULL)
	{
	sprintf(commandpath, "%s/%s", token, command);
	if (access(commandpath, X_OK) == 0)
	{
	free(pathcpy);
	return (strdup(commandpath));
	}
	token = strtok(NULL, ":");
	}
	free(pathcpy);
	return (0);
}
