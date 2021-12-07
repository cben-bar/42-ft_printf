/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:13:25 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/07 04:18:23 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_printc(str[i]);
		i++;
	}
	return (ft_strlen(str));
}
