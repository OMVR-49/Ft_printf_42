# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojebbari <ojebbari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/13 22:57:58 by ojebbari          #+#    #+#              #
#    Updated: 2023/12/11 01:03:20 by ojebbari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS= -Werror -Wall -Wextra

OBJS =	ft_hex.o ft_printf.o ft_ptr.o ft_putchar.o ft_putnbr_u.o ft_putnbr.o \
		ft_putstr.o ft_strlen.o	ft_printf.o									 \

NAME = libftprintf.a

all: $(NAME)

$(OBJS) : ../INCLUDE/ft_printf.h

$(NAME) : $(OBJS)
		ar rc $(NAME) $?
clean :
		rm -f $(OBJS)
fclean : clean
		rm -f $(NAME)
re : fclean all
