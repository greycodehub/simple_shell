#include <stdio.h>
#include <unistd.h>

/**
 * main - fork
 *
 * Return: Always 0.
 */

int main(void)
{
	fork();
	printf("%u This is a personal pid\n", getpid());

	return (0);
}
