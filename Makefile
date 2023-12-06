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

NAME = printf.a

SRC = ft_printf.c print_char.c print_number.c \
		print_string.c srclibft.c print_address.c\
		print_unsigned.c

OBJ =$(SRC:.c=.o)

AR = ar rcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

fclean : clean
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re : fclean all

