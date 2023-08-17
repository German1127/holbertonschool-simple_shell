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
	pid_t pid;
	struct stat exist;
	ssize_t checks = 0;

	if (commandpath == NULL)
	{
		printf("command not found\n");
		return;
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Fork failed");
	}
	else if (pid == 0)
	{
		checks = stat(command, &exist);

		if (checks == 0)
		{
			(execve(command, arraytok, NULL));
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
			free(command);
			free(commandpath);
			exit(EXIT_FAILURE);
			}
		}
		free(path);
	}
	else
	{
		wait(NULL);
	}
	free(commandpath);
}
