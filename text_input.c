#include "shell.h"

/**
* read_text - main entry
* @text: user input
* @size: length of input
* return: text
*/

void read_text(char *text, size_t size)
{
if (fgets(text, size, stdin) == NULL)
{
if (feof(stdin))
{
leke_print("\n");
exit(EXIT_SUCCESS);
}
else
{
leke_print("Error while reading text input.\n");
exit(EXIT_FAILURE);
}
}
text[strcspn(text, "\n")] = '\0';
}

