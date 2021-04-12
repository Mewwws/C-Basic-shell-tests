#include <stdio.h>

/*
 * main - prints all args
 * Return:
 */
int main(int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
		printf("%s, ", av[i]);
	printf("\n");
	return (0);
}
