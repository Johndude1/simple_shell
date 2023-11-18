#include "shell.h"

/**
*execute_prompt - a function to execute my programm
*@prompt: command given
*Return: 0 on success
*/

void execute_prompt(const char *prompt)
{
pid_t child_pid = fork();
if (child_pid == -1)
{
leke_print("error fork process.\n");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
char *args[150];
int arg_count = 0;

char *token = strtok((char *)prompt, " ");
while (token != NULL)
{
args[arg_count++] = token;
token = strtok(NULL, " ");
}
args[arg_count] = NULL;
execve(args[0], args, NULL);
leke_print("error executing text.\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}

