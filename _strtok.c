#include <stdio.h>

void _strtok(const char *str, char delimit)
{
	int lent = strlen(str);
	char word[length +1];
	int i, j;

	for (i = 0; i <= lent; i++)
	{
		j = 0;
		if (str[i] == delimit || str[i] == '\0')
			word[j] = '\0';
		if (j > 0)
		{
			printf("%s\n" word);
			j =0;
			else
			{
				word[j++] = str[i];
			}

		}

	}
}
