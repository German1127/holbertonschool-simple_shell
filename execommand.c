#include "main.h"
/**
 * executeCommand - excecutes the commandpath
 * @command: the given command by the user
 * @arraytok: command path tokenized
 * Return: 0 if success
 */
int executeCommand(char *command, char **arraytok)
{
	char *path = _getenv("PATH");
	char *commandpath = findexpath(arraytok[0], path);
	pid_t pid;
	struct stat exist;
	ssize_t checks = 0;
	int status = 0;

	if (commandpath == NULL)
	{
		printf("command not found\n");
		return (-1);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("Fork failed");
	}
	else if (pid == 0)
	{
		checks = stat(command, &exist);  /* check if command is alrady a path*/
		if (checks == 0)
		{
			(execve(command, arraytok, NULL)); /* if true excecute it directly*/
		}
		else /*if false check for the complete path for the command*/
		{
			if (commandpath != NULL)
			{
				execve(commandpath, arraytok, __environ); /*excetue full path fuction*/
				free(commandpath);
			}
			else
			{
			free(command);
			free(commandpath);
			exit(EXIT_FAILURE);
			}
		}
		free(path);
	}
	else
	{
		wait(&status);
	}
	return (WEXITSTATUS(status));
}
