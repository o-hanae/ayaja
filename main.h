#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct a - this structure is going to give us the format
 * @c: the character that is going to give us the respective function
 * @p: function pointer with va_list argument
 */
typedef struct a
{
	char c;
	int (*p)(va_list list, char *s, int *index);
} choose;

int _printf(const char *format, ...);
int _putchar(char c);
void buffer(char *s, char x, int *index);
/*1-printf.c*/
int print_c(va_list a, char *s, int *index);
int print_s(va_list a, char *s, int *index);
int print_por(va_list a, char *s, int *index);
int print_id(va_list a, char *s, int *index);
int print_bin(va_list a, char *s, int *index);

#endif
