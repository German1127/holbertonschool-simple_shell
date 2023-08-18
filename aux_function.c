#include "main.h"
/**
*readinput - read the command written by the user
*Return: an array with the commnad
*/
char *readinput()
{
	char *lineptr = NULL;
	size_t n;
	ssize_t char_read;

	char_read = getline(&lineptr, &n, stdin);

	if (char_read == -1)
	{
		free(lineptr);
		return (NULL);
	}

	return (lineptr);
}
/**
* print_environment - function that prints the environmet.
*/
void print_environment(void)
{
	char **env_ptr;

	for (env_ptr = __environ; *env_ptr != NULL; env_ptr++)
	{
		printf("%s\n", *env_ptr);
	}
}

/**
 * free_memory - frees alloced memory
 * @args: the array to be free
 * Return: nothing
*/
void free_memory(char **args) /*free memory in strdup*/
{
	int i = 0;

while (args[i])
{
	free(args[i]);
	i++;
}
	free(args);
}

/**
 * freememory2- free memory
 * @command: the command given by the user
 * @commandpath: the full toknized path of the function
 * Return: int
*/

int freememory2(char *command, char *commandpath)
{ /*to avoid more than 40 lines*/
	free(command);
	free(commandpath);
	exit(EXIT_FAILURE);
}
