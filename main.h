#ifndef MAIN
#define MAIN

#include<stdio.h>
#include<unistd.h>
#include<stdarg.h>
#include<string.h>

/**
 * struct print - structure contains pointer to function
 * that takes a va_list and return int and a char
 * this structure used to handle print functions
 *
 * @p: pointer to function
 * @c: char to choose print functions
 */

typedef struct print
{
	int (*p)(va_list);
	char c;
} print_st;

int (*choose_print(char ch))(va_list);
int _printf(const char *format, ...);
int P_char(va_list p);
int P_string(va_list p);
int P_integer(va_list p);
int _putchar(char c);
int print_num(long int num);

#endif
