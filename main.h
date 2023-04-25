#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct flags - flags struct
 * @plus: on if specified
 * @space: on if hashtag_flag specified
 * @hash: on if _flag specified
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct token
 * @c: format token
 * @f: function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph_t;

int _puts(char *str);
int _putchar(char c);

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);

char *convert(unsigned long int num, int base, int lowercase);

int print_address(va_list l, flags_t *f);

int print_percent(va_list l, flags_t *f);

int (*get_print(char s))(va_list, flags_t *);

int get_flag(char s, flags_t *f);

int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);

int print_hex(va_list l, flags_t *f);
int print_HEX(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);

int print_rev(va_list l, flags_t *f);
int print_rot13(va_list l, flags_t *f);
int print_S(va_list l, flags_t *f);

int _printf(const char *format, ...);

#endif
