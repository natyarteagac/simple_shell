#include "header.h"

/**
 * main - simple shell.
 * Return: Always 0.
 */

int main(void)
{
	int j = 0;
	
	char **arraytoken = NULL;
	char *buffer = NULL;
	size_t buffersize = 0;
	

	write(1, "#cisfun$ ", 9);

	while (getline(&buffer, &buffersize, stdin) != EOF)
	{
		while (buffer[j] != 0)
		{
			if (buffer[j] == '\n')
			{
				buffer[j] = 0;
				j++;
			}
		}
		arraytoken = super_array(buffer, " ");
		

		/*status1 = status(1, *arraytoken);*/

		execve(arraytoken[0], arraytoken, NULL);
	}
	return (0);
}

