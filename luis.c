#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define _XOPEN_SOURCE 600
/**
 * main - simple shell
 *
 * Return: always 0
 */
int main(void)
{
	int j = 0;
	int i = 0;
	int status1;
	int userline;
	char **arraytoken = NULL;
	char *buffer = NULL;
	size_t buffersize = 0;
	pid_t my_pid;
	
	write(1, "#cisfun$ ", 9); 
	 
	while (userline = getline(&buffer, &buffersize, stdin) != EOF)
	{
		
		while (buffer[j] != 0)
		{
			if (buffer[j] == '\n')
			buffer[j] = 0;
			j++;
		}
		arraytoken = super_array(buffer, " ");
		i = 0;
		
		//status1 = status(1, *arraytoken);
		//execute(arraytoken);
		 
		execve(arraytoken[0], arraytoken, NULL);
		
	}
	
	return (0);

}
