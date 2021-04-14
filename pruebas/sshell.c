#include "header.h"

/**
 * main - simple shell.
 * Return: Always 0.
 */

int main(void)
{
	//sshell var
	int j = 0;
	char **arraytoken = NULL;
	char *buffer = NULL;
	size_t buffersize = 0;
	int tamaño_getline = 0;

	//exec var
	int status;
    pid_t my_pid;




	
	 
	 
	while (tamaño_getline != EOF)
	{
		tamaño_getline = getline(&buffer, &buffersize, stdin);
		write(1, "#cisfun$ ", 9);

		while (buffer[j] != 0)
		{
			if (buffer[j] == '\n')
				continue;

				else
				{
					arraytoken = super_array(buffer, " ");
					my_pid = fork();
					if (my_pid == 0)
					{
						if (execve(arraytoken[0], arraytoken, NULL) == -1)
						{
							perror("Error:");
						}
					}
					
			buffer[j] = 0;
			j++;
		}

		write(1, "#cisfun$ ", 9);
	}
	buffer[j] = '\n';
	return (0);

}
