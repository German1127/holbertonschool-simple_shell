#include "main.h"
/**
 * executeCommand - excecutes the commandpath
 * @command: the given command by the user
 * @arraytok: command path tokenized
 * Return: 0 if success
 */
void executeCommand(char *command, char **arraytok)
{
	char *path = _getenv("PATH");
	char *commandpath = findexpath(arraytok[0], path);
	pid_t pid = fork();

	if (pid < 0)
	{
		perror("Fork failed");
	}
	else if (pid == 0)
	{
		if (strchr(command, '/') != NULL)
		{
			if (execve(command, arraytok, NULL) == -1)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			if (commandpath != NULL)
			{
				execve(commandpath, arraytok, __environ);
				free(commandpath);
			}
			else
			{
			perror("Command not found");
			exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		wait(NULL);
	}
	free(commandpath);
}
