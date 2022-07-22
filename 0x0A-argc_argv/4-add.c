#include <stdio.h>
#include <stdlib.h>
/**
* main -  Prints number of arguements
* @argc: arguement count
* @argv: array of pointers to CLI arguement
* Return: 0
**/
int main(int argc, char *argv[])
{
int sum = 0;

if (argc == 1)
{
	printf("0\n");
	return (0);
}
while (--argc)
{
	if (*argv[argc] >= 'a' && *argv[argc] <= 'z')
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
		sum += (atoi(argv[argc]));
}
printf("%d\n", sum);
return (0);
}
