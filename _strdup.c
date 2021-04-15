#include "header.h"

/**
* *_strdup - entry point.
* @src: string to duplicate.
* Return: new.
*/

char *_strdup(const char *src)
{
	char *new;
	int i;
	int size;

	size = 0;

	while (src[size])
	{	size++;

		new = malloc(sizeof(char) * (size + 1));
		if (new == NULL)
			return (NULL);

		i = 0;
		while (src[i])
		{
			new[i] = src[i];
			i++;
		}
	}
	new[i] = '\0';
	return (new);
}
