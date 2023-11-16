#include "shell.h"

/**
*execute_command - entry point
*@fork: create a child process
*@execve: execute command
*return: return command
*/

void execute_text(const char *text) 
{
pid_t child_pid = fork();
if (child_pid == -1) {
perror("fork");
exit(EXIT_FAILURE);
} else if (child_pid == 0) 
{
execve(path, array[0], NULL == -1);
perror("execve");
exit(EXIT_FAILURE);
} else {
wait(NULL);
}
}
