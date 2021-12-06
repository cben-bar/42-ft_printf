/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:10:25 by cben-bar          #+#    #+#             */
/*   Updated: 2021/12/06 22:28:06 by cben-bar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_check_format(va_list args, char c);
int	ft_printc(char c);
int	ft_printstr(char *str);
int ft_printadd();
int	ft_printnbr(int nb);
int ft_printunsnbr(unsigned int);
int	ft_printhexnbr(unsigned int);

#endif
