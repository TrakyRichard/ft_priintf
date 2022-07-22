
#include "../ft_printf.h"

int ft_print_percent(int n)
{
  int i;

  i = 0;
  if (n == 0)
  {
    ft_print_char('%');
    i++;
  }
  return (i);
}