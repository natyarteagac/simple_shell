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


char **super_array(char *buffer, char *deli);
int main(void);
int execute(char **comandos);
char *_strdup(const char *src);
int _strcmp(char *strg1, char *strg2, size_t number);
char *gpath(char *name);
void freetoken(char **ar_token);


#endif

