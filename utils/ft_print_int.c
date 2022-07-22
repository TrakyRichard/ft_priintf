#include "../ft_printf.h"

int ft_print_int(int n)
{
  int i;

  i = 0;
  if (n < 0)
  {
    ft_print_char('-');
    i++;
    n = -n;
  }
  if (n == 0)
  {
    ft_print_char('0');
    i++;
  }
  while (n > 0)
  {
    ft_print_char(n % 10 + '0');
    n = n / 10;
    i++;
  }
  return (i);
}