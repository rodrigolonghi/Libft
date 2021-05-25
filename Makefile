# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 00:36:44 by rfelipe-          #+#    #+#              #
#    Updated: 2021/05/25 00:46:20 by rfelipe-         ###   ########.fr        #
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
	ft_strlcpy.o \
	ft_putchar_fd.o \
	ft_putstr_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_isalpha.o \
	ft_isdigit.o \
	ft_isalnum.o \
	ft_isascii.o \
	ft_isprint.o \
	ft_itoa.o \
	ft_split.o \
	ft_strmapi.o \
	ft_atoi.o \
	ft_strdup.o \
	ft_strlcat.o \
	ft_strncmp.o \
	ft_calloc.o \
	ft_strnstr.o \
	ft_bzero.o \
	ft_strchr.o \
	ft_strrchr.o \
	ft_memcmp.o

all: $(FT)
	ar -rcs $(NAME) *.o

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
