#include"main.h"
#include<limits.h>
#include<string.h>

/**
 * P_char - print character
 *
 * @p: pointer to va_list
 * Return: number of char that printed to the stdout
 */

int p_char(va_list p)
{
	return (_putchar(va_arg(p, int));
}

/**
 * P_string - print string
 *
 * @p: pointer to va_list
 * Return: length of the string
 */

int print_string(va_list p)
{
	char *str;

	str = va_arg(p, char*);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		write(1, str, strlen(str));
	}

	return (strlen(str));
}
