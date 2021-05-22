# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 00:36:44 by rfelipe-          #+#    #+#              #
#    Updated: 2021/05/22 05:57:34 by rfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

FT = ft_toupper.o \
	ft_tolower.o \
	ft_strlen.o \
	ft_substr.o \
	ft_strjoin.o \
	ft_strtrim.o \
	strlcpy.o

all: $(FT)
	ar -rcs $(NAME) *.o

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
