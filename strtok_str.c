#include "main.h"
/**
 * strtok_str - tokenize the command given by the user
 * @copy_line: the line to get token
 * Return: a array of pointers with the tokens
 */
char **strtok_str(char *copy_line)
{
	const char *limit = " \n\t\"";
	size_t num_tokens = 0;
	char **arraytok = NULL;
	char *token;
	char *copy2 = strdup(copy_line);
	size_t i = 0;

	if (!copy_line) /*if no input*/
	{
	return (NULL);
	}
	token = strtok(copy_line, limit);
	while (token != NULL)
	{
	num_tokens++;
	token = strtok(NULL, limit);
	}
	arraytok = malloc(sizeof(char *) * (num_tokens + 1)); /*free later*/
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
	token = strtok(copy2, limit); /* tokenize the copy of command */
	for (; i < num_tokens; i++)
	{
	arraytok[i] = strdup(token); /*save each token in a array of pointer*/
	token = strtok(NULL, limit);
	}
	free(copy2);
	arraytok[num_tokens] = NULL;
	return (arraytok);
}
