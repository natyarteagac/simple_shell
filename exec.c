#include "header.h"

/**
* execute - entry point.
* @comandos: user commands line.
* Return: 1 Success.
*/

int execute(char **comandos)
{
	pid_t my_pid;

	my_pid = fork();
	wait(NULL);

	if (my_pid == 0)
	{
		if (execve(comandos[0], comandos, NULL) == -1)
		{
			perror("./sshell");
			exit(98);
		}

	}
		return (1);	
}

