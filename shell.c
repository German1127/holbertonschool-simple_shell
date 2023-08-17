#include "main.h"
/**
 * main - excecute the basic functions of shell
 * Return: an int
*/
int main(void)
{
	char *lineptr = NULL, *copy_line = NULL;
	char *command = NULL;
	char **args = NULL;
	char *prompt = "$ ";
	const char *limit = " \n\t\"";
	int interactive = isatty(STDIN_FILENO); /*check if is an interactive mode*/

	while (1)
	{
	if (interactive == 1)
		{
		printf("%s", prompt);
		}
	lineptr = readinput();
	if (lineptr == NULL)
	break;
	copy_line = strdup(lineptr);
	command = strtok(copy_line, limit);
	if (command != NULL)
		{
		args = strtok_str(lineptr);
	if (strcmp(command, "exit") == 0)
	{
		free_memory(args);
		free(lineptr);
		free(copy_line);
		break;
	}
		{
			executeCommand(command, args);
		}
			free_memory(args);
		}
		free(lineptr);
		free(copy_line); /* no liberar command*/
	}
	return (0);
}
