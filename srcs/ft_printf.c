#include "../header/ft_printf.h"

int	ft_printf(char	const *str, ...)
{
	va_list	ap;
	int	num;

	num = 0;
	va_start(ap, str);
	while (*str)
	{
		if ((*str) == '%')
			num += ft_arg_printf(ap, *++str) ;
			str++;
		else
			num += ft_putchar(*str);
			str++;
	}
	va_end(ap);
	return (num);
}

int	ft_arg_printf(va_list ap, char chr)
{
	int	res;

	res = 0;
	if (chr == 'c')
		res += ft_putchar(va_arg(ap, int));
	else if (chr == 'd')
		res += ft_putnbr(va_arg(ap, int)); 
	else if (chr == 's')
		res += ft_putstr(va_arg(ap, char *));
	else if (chr == 'x')
		res += ft_hexa(va_arg(ap, int));
	if (chr == 'p')
		res += ft_hexa(va_arg(ap, int));
	else if (chr == '%')
		res += ft_putchar(' ');
	return (res);
}

