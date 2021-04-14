#include "header.h"

/**
 * main - simple shell.
 * Return: Always 0.
 */

int main(void)
{
	int j = 0;
	
	
    int userline;
	char **arraytoken = NULL;
	char *buffer = NULL;
	size_t buffersize = 0;
    pid_t my_pid;
    
	write(1, "#cisfun$ ", 9); 
	 
	while (getline(&buffer, &buffersize, stdin) != EOF)
	{
		
		while (buffer[j] != 0)
		{
			if (buffer[j] == '\n')
			buffer[j] = 0;
			j++;
		}
        arraytoken = super_array(buffer, " ");
		
		
		//status1 = status(1, *arraytoken);
		//execute(arraytoken);
		 
		execve(arraytoken[0], arraytoken, NULL);
		
	}
	
	return (0);

}

