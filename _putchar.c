#include"main.h"
#include<unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}

/**
* print_num - print int in digits
* @num: num
* Return: Nothing
*/

void print_num(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		print_num(num / 10);
	}

	_putchar(num % 10 + '0');
}
