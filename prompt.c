#include <stdio.h>
#include <stdlib.h>

/**
 * main - check code for review
 *
 * Description: prints out input to screen
 *
 * Return: Always Zero
 */
int main(void)
{
	size_t n = 0;
	char *buf = NULL;

	printf("$ ");
	getline(&buf, &n, stdin);
	printf("%s", buf);

	free(buf);

	return (0);
}
