#include "header.h"

/**
 * main - simple shell.
 * Return: Always 0.
 */

int main(void)
{
	int j = 0;
	char **arraytoken = NULL;
	char *path_aux = NULL;
	char *buffer = NULL;
	size_t buffersize = 0;
	ssize_t readed = 0;

	while (readed != EOF)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 9);
		readed = getline(&buffer, &buffersize, stdin);

		j = 0;

		while (buffer[j] != 0)
		{
			if (buffer[j] == '\n')
			buffer[j] = 0;
			j++;
		}
	arraytoken = super_array(buffer, " ");
	path_aux = getpath();
	
	execute(arraytoken);
	}
	freetoken(arraytoken);
	return (0);
}

/**
* freetoken - entry point.
* @free_token: malloc to free.
* Return: void.
*/

void freetoken(char **ar_token)
{
	int i = 0;

	while (ar_token[i] != NULL)
	{
		free(ar_token[i++]);
		free(ar_token);
	}
}
