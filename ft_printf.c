/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 02:38:57 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 04:00:06 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_format(va_list args, char c)
{
			if (c == 'c')
				return (ft_putc(va_arg(args, char));
			else if (c == 's')
				return (printed += ft_puts(va_arg(args, char *));
			else if (c == 'p')
				return (ft_putptr_hexa(va_arg(args, unsigned long));
			else if (c == 'd' || c == 'i')
				return (ft_putnbr(va_arg(args, int));
			else if (c == 'u')
				return (ft_putunsigned_dec(va_arg(args, unsigned int));
			else if (c == 'x')
				return (ft_puthexa_low(va_arg(args, unsigned int));
			else if (c == 'X')
				return (ft_puthexa_upp(va_arg(args, unsigned int));
			else if (c == '%')
				return (printed += ft_putc('%', printed));
		}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	static int	printed;
	va_list		args;
	int			i;

	printed = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		while (str[i] != '%')
		{
			printed += write(1, &str[i], 1);
			i++;
		}
		if (str[i] == '%')
		{
			ft_check_format(args, str[i + 1]);
		}	
		i++;
	}
	va_end(args);
	return (printed);
}

int main(int ac, char **av)
{
	static int printed;	
	int x;
	int i;
	char *str;

	x = 1;
	printed = 0;
	str = "+moi";
	while (x < ac)
	{ 
		i = 0;
		while (av[x][i])
		{
			printed += write(1, &av[x][i], 1);
			i++;
		}
		x++;
	}
	printed += ft_putc('%', printed);
	printed += ft_puts(str, printed);
	printf("\nprinted = %d\n", printed);
	return (0);
}
