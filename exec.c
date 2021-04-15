#include "header.h"

/**
* execute - entry point.
* @comandos: user commands line.
* Return: 1 Success.
*/

int execute(char **comandos)
{
<<<<<<< HEAD
	int status;
	pid_t my_pid;

	my_pid = fork();
=======
	pid_t my_pid;

	my_pid = fork();
	wait(NULL);
>>>>>>> main

	if (my_pid == 0)
	{
		if (execve(comandos[0], comandos, NULL) == -1)
		{
<<<<<<< HEAD
			perror("Error:");
			exit(0);
		}

		else
		{
			wait(&status);
			write(1, "#cisfun$ ", 9);
		}
	}
		return (1);	
=======
			perror("./sshell");
			exit(98);
		}

	}
	return (1);
>>>>>>> main
}

