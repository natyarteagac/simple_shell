#include "header.h"

/**
* super_array: entry point.
* @buffer: buffer memory.
* @deli: delimitator.
* Return: pointer.
*/
char **super_array(char *buffer, char *deli)
{
	int i = 0;
	char *words2 = NULL;
	char **contwords = NULL;
	char *words_dup = NULL;
	char *words = NULL;
	char *words_dup2 = NULL;
	int wordscount = 0;

	words_dup = strdup(buffer);
	words = strtok(words_dup, deli);
	while (words)
	{
		words = strtok(NULL, deli);
		wordscount++;
	}
	contwords = malloc(sizeof(char *) * (wordscount + 1));
	words_dup2 = strdup(buffer);
	words2 = strtok(words_dup2, deli);
	while (words2 != NULL)
	{
		contwords[i] = words2;
		words2 = strtok(NULL, deli);
		i++;
	}
	contwords[i] = NULL;
	return (contwords);
}

