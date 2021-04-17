#include "header.h"

/**
* _strcmp - entry point.
* @strg1: string to compare.
* @strg2: string to compare.
* Return: 0 if the strings are equal other number if the strings are not equal.
*/

int _strncmp(char *string1, char *string2, size_t number)
{
	size_t i;

	for (i = 0; i < number; i++)
	{
		int aux1 = 0;
		int aux2 = 0;

		if (string1[i] == string2[i])
		{
			if (count == (number - 1))
				return (0);
		}
		aux1 = (int)string1[i];
		aux2 = (int)string2[i];

		if (aux1 > aux2)
			return (1);
		if (aux2 > aux1)
			return (-1);
	}
	return (0);



	
