#ifndef SHELL_H
#define SHELL_H

/* these are my header files*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>

/* these are my function prototypes*/

void my_display_text(void);
void read_text(char *text, size_t size);
void execute_text(const char *text);
void leke_print(const char *text);




#endif
