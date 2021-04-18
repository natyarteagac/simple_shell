#include "header.h"

/**
* execute - entry point.
* @comandos: user commands line.
* Return: 1 Success.
*/

void execute(char **arraytoken,char **arraytokenpath)
{
	int mach = 0; /*checker*/
	

	/**mirar si el token en la posicion 0 (primera posicion) es diefernte de NULL*/
	/*que la pimera letra de la primera posicon no tenga "/" por que o si no seria una ruta*/
 	if (arraytoken[0] != NULL && *arraytoken[0] != "/")
	{
		mach = wiutpath(arraytoken); /** aqui se ingresa un camando que no es un path */
		if (mach == -1)
			perror("error1");
	}
	else /* aqui se incluye el path*/
	{
		mach = with_path(arraytoken); /** aqui se ingresa un camando que es un path */
		if (mach == -1)
			perror("error2");
	}

}

/**
 * with_path - 
 * @arraytoken: tokenized commands
 * Return: int file status
 */

int with_path(char **arraytoken)
{
	pid_t pid; /*proceso hijo*/
	/*analizar si es ejecutable o no con stat*/
	if (stat(arraytoken[0], &st) == 0)
	{
		/*create child process*/
		pid = fork();
		if (pid == 0) /*si es el proceso hijo que se ejecuta*/
			execve(arraytoken[0], arraytoken, environ);
		/*el proceso padre espera a que finalice el procesos hijo*/
		wait(NULL);
		return (0);
	}
	/*si no es ejecutable returns (-1)*/
	return (-1);
}




/*
* wiutpath - 
* @arraytoken: tokenized commands
* Return : int
*/

int wiutpath(char **arraytoken)
{
	int i = 0;
	int j = 0;
	pid_t pid; /*child process*/
	char *fullpath = NULL;
	char *aux = NULL;
	char **splitpath = NULL;
	char *copy_path = NULL;

	fullpath = getpath(); /*fullpath recive el path de la funcion*/
	copy_path = _strdup(fullpath); /*copy of fullpath*/
	splitpath = token_path(fullpath); /* splitpath recive  el paht dividido de copy_path*/

	while (splitpath[i] != NULL)
	{
		/*si el path es diferente de NULL, concatenate*/

		aux = strcat(splitpath[i], arraytoken[0]);
		/*analizar si es ejecutable o no con stat*/
		if (stat(aux, &st) == 0)
		{
			pid = fork(); /*create child process*/
			if (pid == 0) /*if it is the child process run*/
				execve(aux, arraytoken, NULL);
			/*the parent process waits for the child processes to finish*/
			wait(NULL);
			return (0); /*si funciona, return (0)*/
		}
		aux = NULL;
		i++;
	}
	for (i = 0; split_path[j] != NULL; j++) /*freeing  memory in case of error*/
		free(split_path[j]);
	free(split_path);
	
	return (-1); /*if it is not executable it returns (-1)*/
}


