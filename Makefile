# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 16:54:55 by sjarfi            #+#    #+#              #
#    Updated: 2023/11/30 16:54:56 by sjarfi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a
LIBFTNAME = Libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./Libft

SRCS = 	ft_printf.c \
		print_char.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	
re: fclean all


