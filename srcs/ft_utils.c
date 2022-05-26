#include "../header/ft_printf.h"

int	ft_putchar(char c)
{
	int	res;

	res = 0;
	res += write (1, &c, 1);
	return (res)
}

int	ft_putstr(char	*str)
{
	int	res;

	res = 0;
	while (*str)
	{
		res += ft_putchar(*str);
		str++;
	}
	return (res);
}

int	ft_putnbr(int	numb)
{
	int	res;

	res = 0;
	if (numb >= 10)
		ft_putnbr(numb / 10);
	numb = numb % 10;
	if (numb < 10)
		res += ft_putchar(numb);
	return (res);
}

int	ft_hexa(unsigned long int numb, char chr)
{
	int	res;

	res = 0;
	if (chr == 'x' || chr == 'p')
	{
		if (numb >= 16)
		{
			res = ft_hexa(numb / 16);
		}
		res += ft_putchar("0123456789abcdef" [numb/16]);
	}
	else if (chr == 'X')
		if (numb >= 16)
			res = ft_hexa(numb / 16);
		res += ft_putchar("0123456789ABDCEF" [numb/16]);
	return (res);
}

int	ft_putnbru(unsigned int numb)
{
	int	res;
	
	res = 0;
	if (numb >= 10)
		res = ft_putnbru(numb / 10);
	numb = numb % 10;
	if (numb < 10)
		res += ft_putchar(numb);
	return (res);
}
