#ifndef FT_PRINTF
#define FT_PRINTF

#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
/* MAIN FUNCTIONS */

int	ft_printf(char const *str, ...);
int	ft_arg_printf(va_list ap, char chr);

/* EXTRA FUNCTIONS */
int	ft_putchar(char c);
int	ft_putstr(char	*str);
int	ft_putnbr(int	numb);
int	ft_hexa(int	numb);
int	ft_putnbru(unsigned int numb);
#endif
