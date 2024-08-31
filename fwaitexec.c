#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	int report;
	int i;
	char *args[] = {"ls", "-l", "/tmp", NULL};

	for (i = 1; i <= 5; i++)
	{
		child_pid == fork();
		if (child_pid == -1)
		{
			perror("Error: ");
			return (1);
		}
	}

	if (child_pid == 0)
	{
		execve("/usr/bin/ls", args, NULL);
		perror("An error occured");
		exit(1);
	}
	else
	{
		wait(&report);

	}
}
