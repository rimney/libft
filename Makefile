# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rimney <rimney@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 10:33:40 by rimney            #+#    #+#              #
#    Updated: 2021/11/12 15:18:55 by rimney           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memcpy.c \
	   ft_memset.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_putstr_fd.c \
	   ft_strnstr.c \
	   ft_strchr.c \
	   ft_strlen.c \
	   ft_strrchr.c \
	   ft_substr.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_itoa.c \
	   ft_strdup.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strjoin.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_calloc.c \
	   ft_strncmp.c \
	   ft_memchr.c \
	   ft_split.c \
	   ft_memmove.c \
	   ft_memcmp.c \
	   ft_strtrim.c \
 
OBJS = $(SRCS:.c=.o)
GCC = gcc
FLAGS = -Wall -Wextra -Werror
HEADER = libft.h


$(NAME) :
	$(GCC)  $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all : $(NAME)

.PHONY : all clean fclean re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY : make clean fclean
