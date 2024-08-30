#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check code for review
 *
 * Description: function that prints a string and returns arrays of each
 *
 * Return: Always Zero
 */


int main(void)
{
	char *str = "These words are seperated by a space";
	char *stc = malloc(sizeof(char) * strlen(str));
	char delimit[5] = " ";
	char *piped;
	int i;

	strcpy(stc, str);
	piped = strtok(stc, delimit);
	while (piped != NULL)
	{
		printf("%s\n", piped);
		piped = strtok(NULL, delimit);
	}
	for (i = 0; i < 40; i++)
	{
		if (stc[i] == '\0')
			printf("\\0");
		else
			printf("%c", stc[i]);
	}
}
