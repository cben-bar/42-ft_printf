/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 01:38:05 by cben-bar          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/12/08 05:13:06 by cben-bar         ###   ########lyon.fr   */
=======
/*   Updated: 2021/12/08 06:02:47 by cben-bar         ###   ########lyon.fr   */
>>>>>>> 48e6a6eb4ef6cdce78546a55da43fe9ec65a256a
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../includes/ft_printf.h"

static int	ft_printaddr2(unsigned long ptraddr, size_t printed, char *base)
{
	if (ptraddr >= 16)
		printed = ft_printaddr2((ptraddr / 16), printed + 1, base);
	ft_printc(base[ptraddr % 16]);
	return (printed);
}

int	ft_printaddr(void *add, size_t printed)
{
	unsigned long	ptraddr;
	char			*base;

	ptraddr = (unsigned long)add;
	base = "0123456789abcdef";
	printed += write(1, "0x", 2);
	printed += ft_printaddr2(ptraddr, 1, base);
	return (printed);
}
