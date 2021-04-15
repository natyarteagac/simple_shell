#include "header.h"

/**
* _strcmp - entry point.
* @strg1: string to compare.
* @strg2: string to compare.
* Return: 0 if the strings are equal other number if the strings are not equal.
*/

int _strcmp(char *strg1, char *strg2)
{
	while ((*strg1 != '\0' && *strg2 != '\0') && *strg1 == *strg2)
	{
		strg1++;
		strg2++;
	}

	if (*strg1 == *strg2)
	{
		return (0);
	}
	else
	{
		return (*strg1 - *strg2);
	}
}
