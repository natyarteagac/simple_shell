#include "header.h"


//funcion para covertir un string en tokens

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
    contwords = malloc(sizeof(char * ) * (wordscount + 1));
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

//funcion stat para comparar comandos y PATH

int status(int wordscount, char **contwords) 
{
while (wordscount) 
{
    struct stat st;
    if (-1 == stat(*contwords, &st))
      fprintf(stderr, "No se pudo abrir el archivo o directorio '%s'.\n", *contwords);
    else
      printf("'%s' es un archivo :).\n", *contwords);
}
return 0;
}