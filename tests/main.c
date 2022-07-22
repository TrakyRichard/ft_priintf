#include "../ft_printf.h"
#include <stdio.h>

int main()
{
  // printf("Je suis un printf %s\n", "Je suis à rattraper");
  // ft_printf("Je suis un ft_printf %s", "Je suis à rattraper");

  printf("Je suis un printf %d\n", -123);
  ft_printf("Je suis un ft_printf %d\n", -123);
  return (0);
}