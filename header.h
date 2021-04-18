#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define _XOPEN_SOURCE 600


/*paths fun*/
extern char **environ;
char *getpath(void);
char **token_path(char *path_aux);

//funciones auxiliares str
int _strncmp(char *string1, char *string2, size_t number);
char *_strdup(const char *src);
char *_strcat(char *str1, char *str2);

//funciones exec
void execute(char **arraytoken);
int with_path(char **arraytoken);
int wiutpath(char **arraytoken);

char **super_array(char *buffer, char *deli);
int main(void);

char *gpath(char *name);
void freetoken(char **ar_token);


#endif

