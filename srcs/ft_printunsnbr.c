/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 03:49:50 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/07 03:58:05 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printunsnbr(unsigned int nb, size_t printed)
{
	if (nb < 10)
		printed += ft_printc(nb + '0');
	else
	{
		ft_printunsnbr(nb / 10);
		printed += ft_printc(nb % 10 + '0');
	}
	return (printed);
}
