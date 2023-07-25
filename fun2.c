#include<limits.h>
#include"main.h"

/**
 * choose_print - function to choose which print to call
 *
 * @ch: character that will determine which function to call
 *
 * @Return: pointer to the print function
 */

int (*choose_print(char ch))(va_list)
{
	unsigned int k = 0;

	print_st list [] = {
		{'s', p_string},
		{'c', P_char},
		{'i', P_integer},
		{'d', P_integer},
		{'\0', NULL}
	};

	while (list[k].c != '\0')
	{
		if (ch == list.c)
		{
			return (list[k].p);
		}
	}

	return (NULL);
}
