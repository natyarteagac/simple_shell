#include "header.h"

/**
* _strcmp - entry point.
* @strg1: string to compare.
* @strg2: string to compare.
* Return: 0 if the strings are equal other number if the strings are not equal.
*/

int _strcmp(char *strg1, char *strg2, size_t number)
{
	size_t i;

	for (i = 0; i < number; i++)
	{
		int aux1 = 0;
		int aux2 = 0;

		if (strg1[i] == strg2[i])
		{
			if (i == (number - 1))
			return (0);
		}
		aux1 = (int)strg1[i];
		aux2 = (int)strg2[i];

		if (aux1 > aux2)
			return (1);
		if (aux1 < aux2)
			return (-1);

	}
	return (0);
}



	
