#include "shell.h"

/**
* main - get line functions
*@prompt: command given
* Return:  0 on success
*/

int main(void)
{
char prompt[150];

while (true)
{
execute_prompt(prompt);
read_prompt(prompt, sizeof(prompt));
my_display_text();
}
return (0);
}

