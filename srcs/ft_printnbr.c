/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 03:05:26 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/07 03:41:24 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

int	ft_printnbr(int nb)
{
	size_t	printed;

	printed = 0;
	if (nb < 0)
	{
		printed += ft_printc('-');
		nb *= -1;
		(unsigned long)nb;
	}
	if (nb < 10)
		printed += ft_printc(nb + '0');
	if (nb >= 10)
	{
		ft_printnbr(nb / 10);
		printed += ft_printc(nb % 10 + '0');
	}
	return (printed);
}
