# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/31 16:49:10 by marvin            #+#    #+#              #
#    Updated: 2024/12/31 16:49:10 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

CC			=	cc

CFLAGS			=	-Wall -Wextra -Werror -I $(LIBFT_DIR)

LIBFT_DIR		=	./libft

LIBFT			=	$(LIBFT_DIR)/libft.a

SRC			=	ft_printf.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putnbr.c \
				ft_putnbr_uns.c \
				ft_puthex.c \
				ft_puthex_up.c \
				ft_putptr.c

OBJS			=	$(SRC:.c=.o)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

all: 		$(LIBFT) $(NAME)

$(LIBFT):
			make -C $(LIBFT_DIR)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(LIBFT) 
			cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)
			make clean -C $(LIBFT_DIR)

fclean:		clean
			rm -f $(NAME)
			make fclean -C $(LIBFT_DIR)

re:			fclean all
