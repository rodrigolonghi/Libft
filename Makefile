# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfelipe- <rfelipe-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 00:36:44 by rfelipe-          #+#    #+#              #
#    Updated: 2021/05/25 23:56:10 by rfelipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

FT = ft_atoi.o \
	ft_bzero.o \
	ft_calloc.o \
	ft_isalnum.o \
	ft_isalpha.o \
	ft_isascii.o \
	ft_isdigit.o \
	ft_isprint.o \
	ft_itoa.o \
	ft_memccpy.o \
	ft_memchr.o \
	ft_memcmp.o \
	ft_memcpy.o \
	ft_memmove.o \
	ft_memset.o \
	ft_putchar_fd.o \
	ft_putendl_fd.o \
	ft_putnbr_fd.o \
	ft_putstr_fd.o \
	ft_split.o \
	ft_strchr.o \
	ft_strdup.o \
	ft_strjoin.o \
	ft_strlcat.o \
	ft_strlcpy.o \
	ft_strlen.o \
	ft_strmapi.o \
	ft_strncmp.o \
	ft_strnstr.o \
	ft_strrchr.o \
	ft_strtrim.o \
	ft_substr.o \
	ft_tolower.o \
	ft_toupper.o

all: $(NAME)

$(NAME) : $(FT)
	ar -rcs $(NAME) *.o

%.o: %.c
	gcc $(FLAG) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
