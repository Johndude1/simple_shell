#include "shell.h"

/**
* read_prompt - main entry
* @text: user input
* @size: length of input
* return: 0 on success
*/

void read_prompt(char *prompt, size_t size)
{
if (fgets(prompt, size, stdin) == NULL)
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
prompt[strcspn(prompt, "\n")] = '\0';
}

