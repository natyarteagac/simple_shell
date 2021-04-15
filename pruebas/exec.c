#include "header.h"

/**
* execute - entry point.
* @comandos: user commands line.
* Return: 1 Success.
*/

int execute(char **comandos)
{
	int status;
	
    pid_t my_pid;

	my_pid = fork();

    if (my_pid == 0)
	{
		
		if (execve(comandos[0], comandos, NULL) == -1)
		{
		    perror("Error:");
			//exit(0);
		}
	}
		else
		{
			wait(&status);
			
		}
		return (1);
}
