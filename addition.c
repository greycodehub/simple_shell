#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	int add = 0;
	
	printf("argc or ac = %d\n", ac);
	printf("argv result is argv[]\n");

	for (i = 0; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		add += atoi(av[i]);
	}

	printf("addition is %d\n", add);
	return (0);
}
