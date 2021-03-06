/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 03:49:50 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/08 06:00:54 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printunsnbr(unsigned int nb, size_t printed)
{
	if (nb < 10)
		printed += ft_printc(nb + '0');
	else
	{
		printed = ft_printunsnbr((nb / 10), printed + 1);
		ft_printc((nb % 10) + '0');
	}
	return (printed);
}
