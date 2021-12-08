# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cben-bar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 22:55:40 by cben-bar          #+#    #+#              #
#    Updated: 2021/12/08 21:31:05 by cben-bar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

FILES			= \
					ft_printf.c			\
					ft_printc.c			\
					ft_printstr.c		\
					ft_printnbr.c		\
					ft_printunsnbr.c	\
					ft_printaddr.c		\
					ft_printhexnbr.c

SRCS_DIR		=	./srcs/

SRCS			=	$(addprefix $(SRCS_DIR),$(FILES))

OBJ				=	$(SRCS:.c=.o)

CFLAGS 			=	-Wall -Wextra -Werror

all : 				$(NAME)

%.o: %.c 			./includes/ft_printf.h
					gcc $(CFLAGS) -c $< -o $@

$(NAME) :			$(OBJ)
					make -C ./libft
					cp ./libft/libft.a $(NAME)
					ar -rc $(NAME) $(OBJ)

clean :
					make -C ./libft clean
					/bin/rm -rf $(OBJ)

fclean :			clean
					/bin/rm -rf libftprintf.a
					/bin/rm -rf libft/libft.a
					/bin/rm -rf $(NAME)

re :				fclean all

.PHONY:				all clean fclean re
