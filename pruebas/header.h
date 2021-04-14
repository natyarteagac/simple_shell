#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>

#define _XOPEN_SOURCE 600


char **super_array(char *buffer, char *deli);
int main(void);
int execute(char **comandos);

#endif

