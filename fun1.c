#include<limits.h>
#include<unistd>
#include"main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	va_list p;
	int ch_counter = 0;

	if (format == NULL)
		return (-1);

	va_start(p, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				ch_counter++;
				i++;
			}
			else if (choose_print(format[i + 1]) != NULL)
			{
				ch_counter = ch_counter + (choose_print(format[i + 1])(p));
				i++;
			}
			else
			{
				_putchar(format[i]);
				ch_counter++;
			}
		}

		else
		{
			_putchar(format[i]);
			ch_counter++;
		}
		i++;
	}		
		
	return (ch_counter);
}



