/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:13:25 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 21:14:00 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printstr(char *str)
{
int	i;

	i = 0;
	if (! str)
	{
		ft_printstr("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_printcstr[i], printed);
		i++;
	}
	return (printed = ft_strlen(str));
}
