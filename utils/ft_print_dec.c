#include "../ft_printf.h"

int ft_print_dec(int n)
{
  int i;

  i = 0;
  if (!n)
    return (i);
  if (n < 0)
  {
    i += ft_print_char('-');
    n = -n;
  }
  i += ft_print_dec(n / 10);
  i += ft_print_char(n % 10 + '0');
  return (i);
}