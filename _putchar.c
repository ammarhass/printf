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

int print_num(long int num)
{
	int count1 = 1;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count1++;
	}

	if (num / 10)
	{
		count1 += print_num(num / 10);
	}
	_putchar(num % 10 + '0');
	return (count1);
}
