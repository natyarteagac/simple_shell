#include "header.h"

/**
* getpath - entry point.
* @name: char pointer.
* Return: pointer to path.
*/

char *getpath(char *name)
{
	int i = 0, len = 0;
	char *path = NULL;

	while (name[len])
	{
		len++;

		while (environ[i]) /* environ is a GLOBAL var */
		{	
			if (strncmp(environ[i], name, len) == 0)
			{
				path = environ[i] + (len + 1);
				break;
			}
			i++;
		}
	}
	printf("%s", path);
	return (path);
}
