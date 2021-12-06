/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 02:38:57 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 02:48:42 by cben-bar         ###   ########lyon.fr   */
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

int	ft_check_format(char c)
{
	char *s;
	int	i;

	s = "cspdiuxX%";
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
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
			if (ft_check_format(str[i+1]) > 8);
				i++;
			else if (ft_check_format(str[i+1] == 0)
				ft_putc(
			else if (ft_check_format(str[i+1] == 1)
			else if (ft_check_format(str[i+1] == 2)
			else if (ft_check_format(str[i+1] == 3)
			else if (ft_check_format(str[i+1] == 4)
			else if (ft_check_format(str[i+1] == 5)
			else if (ft_check_format(str[i+1] == 6)
			else if (ft_check_format(str[i+1] == 7)
			else if (ft_check_format(str[i+1] == 8)
				printed += ft_putc('%', printed);
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
