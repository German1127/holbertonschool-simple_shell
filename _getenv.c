#include "main.h"
/**
*get_env - searchs for the PATH enviroment
*@name: what are we looking for
*Return: what it found
*/

char *get_env(const char *name)
{
	extern char **environ;
	size_t length = strlen(name);

	for (int i = 0; environ[i] != NULL; i++)
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
 *main - prints the PATH
 *Return: 0 if success
 */
int main(void)
{
char *env_var = "PATH";
char *value = get_env(env_var);

	if (value != NULL)
	{
	printf("%s\n", value);
	}
	else
	{
	printf("Variable de entorno no encontrada: %s\n", env_var);
	}
	return (0);
}
