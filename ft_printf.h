#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

typedef struct ft_printf
{
  va_list args;
  int chars_printed;
} t_ft_printf;


int ft_printf(const char *, ...);
int ft_print_char(char c);
int ft_print_str(char *str);
int ft_print_dec(int n);
int ft_print_int(int n);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n);
int ft_print_hex_upper(unsigned int n);
int ft_print_adrr(unsigned long int n);
int ft_print_percent(int n);
int ft_print_unknown(char c);

#endif