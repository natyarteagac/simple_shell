#include "header.h"

/*
*_path
* Return : 
*/


char *getpath(void)
{
	
	int i = 0;
	char *path_aux = NULL;
	while (environ[i] != NULL) /* environ is a GLOBAL var */
	{
        
        /*econtrar  el path*/
		if (!strncmp(environ[i], "PATH=", 5))
		{
            /*guardamos el path en una var auxiliar*/
			path_aux = environ[i] + 5;
		}
		i++;
	}
	return (path_aux);
}


/**
 * token_path - tokenize the path
 * @path_aux: contains information on the path to tokenize
 * main - Return
 * Return: void
 */

char **token_path(char *path_aux)
{
	char **arraytokenpath = NULL;
	int i = 0;

arraytokenpath = super_array(path_aux, ":");


return (arraytokenpath);

}
