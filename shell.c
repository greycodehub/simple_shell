
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define INITIAL_ARRAY_SIZE 1024

void handle_input(void);
void execute_command(char **arr);

int main(void)
{
	handle_input();
	return (0);
}

void handle_input(void)
{
	char *buf = NULL;
	size_t bufsize = 0;
	char *tokenize;
	int i;
	int report = 0;
	char **arr;
	pid_t child_pid;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		if (getline(&buf, &bufsize, stdin) == -1)
			break;

		buf[strcspn(buf, "\n")] = '\0';

		tokenize = strtok(buf, "\t ");
		arr = malloc(sizeof(char *) * INITIAL_ARRAY_SIZE);
		if (!arr)
		{
			perror("malloc");
			free(buf);
			exit(EXIT_FAILURE);
		}

		i = 0;
		while (tokenize)
		{
			arr[i++] = tokenize;
			tokenize = strtok(NULL, "\t ");
		}
		arr[i] = NULL;

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("fork");
			free(arr);
			free(buf);
			exit(EXIT_FAILURE);
		}
		if (child_pid == 0)
		{
			execute_command(arr);
		}
		else
		{
			wait(&report);
		}
		free(arr);
	}

	free(buf);
}

void execute_command(char **arr)
{
	if (execve(arr[0], arr, NULL) == -1)
	{
		perror("execve");
		exit(EXIT_FAILURE);
	}
}
