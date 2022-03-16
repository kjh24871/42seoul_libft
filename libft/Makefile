# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jukoh <jukoh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 19:27:14 by jukoh             #+#    #+#              #
#    Updated: 2022/03/16 21:38:25 by jukoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_isalpha.c srcs/ft_memcpy.c srcs/ft_bzero.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_isascii.c srcs/ft_memset.c srcs/ft_memmove.c srcs/ft_strlcpy.c srcs/ft_strlcat.c srcs/ft_toupper.c srcs/ft_tolower.c srcs/ft_strchr.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c
	gcc -c -Wall -Wextra -Werror $< -o $@ -I includes

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
