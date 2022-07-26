#include "main.h"
/**
 * strtow - Concatenate all arguements
 * @str: String Input to split
 * Return: Pointer to new string
 **/
char **strtow(char *str)
{
	char **stray;
	int i = 0;
	int j = 0;
	int column = 0;
	int len = 0;
	int ch = 0;
	int row[10];

	while (str[len++])
	{
		if (str[len - 1] == ' ' && str[len] != ' ')
			column++;
	}
	column++;;
	stray = malloc(sizeof(char) * column);
	if (stray == NULL)
	{
		free(stray);
		return(NULL);
	}
	len = 0; 
	i = 0;
	while (str[len++])
	{
		if (str[len - 1] != ' ' && str[len] != ' ')
			ch++;
		if (str[len - 1] == ' ' && str[len] != ' ')
		{
			row[i] = ch;
			stray[i] = malloc(sizeof(char) * row[i] + 1);
			ch = 0;
			i++;
		}
	}
	len = 0;
	while (str[len])
	{
		if (str[len] == ' ' && str[len + 1] != ' ')
		{
			j = 0;
			for (i = 0; i < row[i]; i++)
				stray[i][j++] = str[len++];
		}	
	}
	return (stray);
}
