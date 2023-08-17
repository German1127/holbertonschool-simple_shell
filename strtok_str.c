#include "main.h"
/**
 * strtok_str - tokenize the command given by the user
 * Return: a array of pointers with the tokens
 */
char **strtok_str(char *copy_line)
{
	const char *limit = " \n\t\"";
	size_t num_tokens = 0;
	char **arraytok = NULL;
	char *token;
	char *copy2 = strdup(copy_line);
	int i;

	if (!copy_line)
	{
	return (NULL);
	}
	token = strtok(copy_line, limit);
	while (token != NULL)
	{
	num_tokens++;
	token = strtok(NULL, limit);
	}
	arraytok = malloc(sizeof(char *) * (num_tokens + 1)); /*liberar luego*/
	if (!arraytok)
	{
	return (NULL);
	for (i = 0; i < num_tokens; i++)
	{
	free(arraytok[i]);
	}
	free(arraytok);
	exit(EXIT_FAILURE);
	}
	token = strtok(copy2, limit);
	for (size_t i = 0; i < num_tokens; i++)
	{
	arraytok[i] = strdup(token);
	token = strtok(NULL, limit);
	}
	free(copy2);
	arraytok[num_tokens] = NULL;
	return (arraytok);
}
