/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:12:42 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/08 21:22:25 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_printhexnbr2(unsigned int nb, size_t printed, char *base)
{
	if (nb >= 16)
		printed = ft_printhexnbr2((nb / 16), printed + 1, base);
	ft_printc(base[nb % 16]);
	return (printed);
}

int	ft_printhexnbr(unsigned int nb, char c)
{
	char	*uppbase;
	char	*lowbase;

	uppbase = "0123456789ABCDEF";
	lowbase = "0123456789abcdef";
	if (c == 'X')
		return (ft_printhexnbr2(nb, 1, uppbase));
	return (ft_printhexnbr2(nb, 1, lowbase));
}
