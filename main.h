#ifndef MAIN
#define MAIN

#include<stdio.h>
#include<unistd.h>
/**
 * struct print - structure contains pointer to function 
 * that takes a va_list and return int and a char
 * this structure used to handle print functions
 *
 * @p - pointer to function
 * @c - char to choose print functions
 */

typedef struct print
{
        int (* p)(va_list);
        char c;
}print_st;

int _printf(const char *format, ...);
int p_char(va_list p);
int print_string(va_list p);
int _putchar(char c);
void print_num(int num);

#endif
