#include<limits.h>
#include"main.h"

/**
 * choose_print - function to choose which print to call
 *
 * @ch: character that will determine which function to call
 *
 * Return: pointer to the print function
 */

int (*choose_print(char ch))(va_list)
{
	unsigned int k = 0;

	print_st list[] = {
		{P_string, 's'},
		{P_char, 'c'},
		{NULL, '\0'}
	};

	while (list[k].c != '\0')
	{
		if (ch == list[k].c)
		{
			return (list[k].p);
		}
		k++;
	}

	return (NULL);
}
