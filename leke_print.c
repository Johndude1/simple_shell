#include "shell.h"

/**
* leke_print - a function that prints text to the standard output
* @text: input to be displayed
* return: return text
*/

void leke_print(const char *text)
{
write(STDOUT_FILENO, text, strlen(text));
}
