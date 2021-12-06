/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 02:43:12 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 02:45:19 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puts(char *str, int printed)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putc(str[i], printed);
		i++;
	}
	return (printed = ft_strlen(str));
}
