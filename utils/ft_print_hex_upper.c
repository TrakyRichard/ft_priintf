#include "../ft_printf.h"

int ft_print_hex_upper(unsigned int n)
{
  int i;

  i = 0;
  if (!n)
    return (i);
  i += ft_print_hex_upper(n / 16);

  if (n % 16 > 9)
    i += ft_print_char(n % 16 + '7');
  else
    i += ft_print_char(n % 16 + '0');
  return (i);
}