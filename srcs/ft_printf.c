/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 06:31:10 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/08 06:31:15 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_format(va_list args, char c)
{
	if (c == 'c')
		return (ft_printc(va_arg(args, int)));
	else if (c == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_printaddr(va_arg(args, void *), 0));
	else if (c == 'd' || c == 'i')
		return (ft_printnbr(va_arg(args, int), 1));
	else if (c == 'u')
		return (ft_printunsnbr(va_arg(args, unsigned int), 0));
	else if (c == 'X' || c == 'x')
		return (ft_printhexnbr(va_arg(args, unsigned int), c, 0));
	else if (c == '%')
		return (ft_printc('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t		i;
	size_t		printed;

	printed = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] != '%')
			printed += write(1, &str[i], 1);
		if (str[i] == '%' && str[i + 1])
		{
			printed += ft_check_format(args, str[i + 1]);
			i++;
		}			
		i++;
	}
	va_end(args);
	return (printed);
}
