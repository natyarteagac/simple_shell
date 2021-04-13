#include "header.h"

//funcion para ejecutar 

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
			exit(0);
		}
	}
		else
		{
			wait(&status);
			write(1, "#cisfun$ ", 9);
		}
		return (1);
}
