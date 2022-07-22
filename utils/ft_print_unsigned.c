#include "../ft_printf.h"

int ft_print_unsigned(unsigned int n)
{
  int i;

  i = 0;
  if (n == 0)
  {
    ft_print_char('0');
    i++;
  }
  while (n > 0)
  {
    if (n % 16 > 9)
      ft_print_char(n % 16 + 'a' - 10);
    else
      ft_print_char(n % 16 + '0');
    n = n / 16;
    i++;
  }
  return (i);
}