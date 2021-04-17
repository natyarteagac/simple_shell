#include "header.h"

/*
*_path
* Return : 
*/
extern char **environ;

char *getpath(void)
{
	int i = 0;
	char *path_aux = NULL;
    printf("%s", *environ);
	while (environ[i] != NULL) /* environ is a GLOBAL var */
	{
        
        /*econtrar  el path*/
		if (!strncmp(environ[i], "PATH=", 5))
		{
            /*guardamos el path en una var auxiliar*/
			path_aux = environ[i+ 5];
		}
		i++;
	}
    printf("%s", path_aux);
	return (path_aux);
}

