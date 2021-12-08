/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:38:05 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/08 02:40:59 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printaddr(void *add, size_t printed)
{
	unsigned long	ptraddr;
	char			*base;

	ptraddr = (unsigned long)add;
	base = "0123456789abcdef";
	printed += ft_printc('0');
	printed += ft_printc('x');
	if (ptraddr >= 16)
		ft_printaddr(((void *)(ptraddr / 16)), printed);
	printed += ft_printc(base[ptraddr % 16]);
	return (printed);
}
