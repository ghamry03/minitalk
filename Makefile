# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/18 09:55:15 by ommohame          #+#    #+#              #
#    Updated: 2022/05/20 14:52:12 by ommohame         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	minitalk

SNAME			=	server

CNAME			=	client

LIBFT_FT		=	./Libft/libft.a

LIBFT_FT_PATH	=	./Libft

FT_PRINT_F		=	./ft_printf/libftprintf.a

FT_PRINT_F_PATH	=	./ft_printf

CC				=	gcc

CFLAGS			=	-Wall -Werror -Wextra

SSRCS			=	./srcs/mandatory/server.c

CSRCS			=	./srcs/mandatory/client.c

SOBJS			=	$(SSRCS:.c=.o)

COBJS			=	$(CSRCS:.c=.o)

SSRCS_B			=	./srcs/bonus/server.c

CSRCS_B			=	./srcs/bonus/client.c

SOBJS_B			=	$(SSRCS_B:.c=.o)

COBJS_B			=	$(CSRCS_B:.c=.o)

RM				=	rm -rf

$(NAME)			:	$(SOBJS) $(COBJS)
					make -C $(FT_PRINT_F_PATH)
					make -C $(LIBFT_FT_PATH)
					$(CC) $(CFLAGS) $(SOBJS) $(FT_PRINT_F) $(LIBFT_FT) -o $(SNAME)
					$(CC) $(CFLAGS) $(COBJS) $(FT_PRINT_F) $(LIBFT_FT) -o $(CNAME)

all				:	$(NAME)
		
bonus			:	$(SOBJS_B) $(COBJS_B)
					make -C $(FT_PRINT_F_PATH)
					make -C $(LIBFT_FT_PATH)
					$(CC) $(CFLAGS) $(SOBJS_B) $(FT_PRINT_F) $(LIBFT_FT) -o $(SNAME)
					$(CC) $(CFLAGS) $(COBJS_B) $(FT_PRINT_F) $(LIBFT_FT) -o $(CNAME)

clean			:
					make clean -C $(LIBFT_FT_PATH)
					make clean -C $(FT_PRINT_F_PATH)
					$(RM) $(COBJS) $(SOBJS) $(COBJS_B) $(SOBJS_B)
		
fclean			:	clean
					make fclean -C $(LIBFT_FT_PATH)
					make fclean -C $(FT_PRINT_F_PATH)
					$(RM) $(SNAME) $(CNAME) $(LIBFT_FT) $(FT_PRINT_F)
		
re				:	fclean all