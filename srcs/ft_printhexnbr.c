/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 21:12:42 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 21:13:14 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_printhexnbr(int nb)
{
	char *base;

	base = "0123456789ABCDEF";
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= ft_strlen