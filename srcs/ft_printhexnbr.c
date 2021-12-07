/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:12:42 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/07 04:16:48 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printhexnbr(unsigned int nb, char c, size_t printed)
{
	char *uppbase;
	char *lowbase;

	uppbase = "0123456789ABCDEF";
	lowbase = "0123456789abcdef";
	if (c == 'X')
	{
		if (nb >= 16)
		{
			ft_printhexnbr(nb / 10)
		}
		printed += printc(uppbase[nb % 16]);	
	}
	if (c == 'X')
	{
		if (nb >= 16)
		{
			ft_printhexnbr(nb / 10);
		}
		printed += ft_printc(lowbase[nb % 16]);
	}
	return (printed);
}
