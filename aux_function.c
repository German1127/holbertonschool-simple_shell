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
		free(lineptr); /*se libera*/
		return (NULL);
	}

	return (lineptr);
}

/**
 * free_memory - frees alloced memory
 * @args: the array to be free
 * Return: nothing
*/
void free_memory(char **args)
{
	int i = 0;

while (args[i])
{
	free(args[i]);
	i++;
}
	free(args);
}
