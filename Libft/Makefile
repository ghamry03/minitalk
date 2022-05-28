# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/09 18:24:09 by daelee            #+#    #+#              #
#    Updated: 2022/01/17 07:36:08 by ommohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	= 	ft_memset.c \
			ft_bzero.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_strtrim.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_split.c \

SRCS_B = 	ft_lstnew.c \
	  		ft_lstlast.c \
	  		ft_lstadd_front.c \
			ft_lstadd_back.c \
	  		ft_lstsize.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

AR		=	ar rcs

RM		=	rm -rf

OBJS 	=	$(SRCS:.c=.o)

OBJS_B	=	$(SRCS_B:.c=.o)

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			
all		:	$(NAME)

bonus	:	$(OBJS_B)
			$(AR) $(NAME) $(OBJS_B)

clean	:
			$(RM) $(OBJS) $(OBJS_B)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
