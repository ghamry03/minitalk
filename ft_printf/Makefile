# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 07:38:14 by ommohame          #+#    #+#              #
#    Updated: 2022/02/08 19:56:49 by ommohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS		=	srcs/ft_printf.c \
			srcs/ft_puthex.c     \
			srcs/ft_putnums.c    \
			srcs/ft_putchars.c   \

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

AR		=	ar rcs

RM		=	rm -rf

OBJS 	=	$(SRCS:.c=.o)

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

all		:	$(NAME)

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
