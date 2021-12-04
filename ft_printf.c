/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 03:38:17 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/02 05:10:09 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *str, void *printable)
{
	size_t			i;
	static size_t	printed;

	i = 0;
	printed = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == '%')
		{
			ft_check_flag(str[i + 1]);
			i++;
		}
