# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ucrooks <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/22 23:35:30 by ucrooks           #+#    #+#              #
#    Updated: 2019/06/08 13:20:16 by ucrooks          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CMP = gcc

NAME = libft.a

SRC = ft_lstdel.c \
	  ft_putchar.c \
	  ft_strdel.c \
	  ft_strnequ.c \
	  ft_lstdelone.c \
	  ft_putchar_fd.c \
	  ft_strdup.c \
	  ft_strnew.c \
	  ft_lstiter.c \
	  ft_putendl.c \
	  ft_strequ.c \
	  ft_strnstr.c \
	  ft_lstmap.c \
	  ft_putendl_fd.c \
	  ft_striter.c \
	  ft_strrchr.c \
	  ft_atoi.c	ft_lstnew.c \
	  ft_putnbr.c \
	  ft_striteri.c \
	  ft_strsplit.c \
	  ft_bzero.c \
	  ft_memalloc.c \
	  ft_putnbr_fd.c \
	  ft_strjoin.c \
	  ft_strstr.c \
	  ft_isalnum.c \
	  ft_memccpy.c \
	  ft_putstr.c \
	  ft_strlcat.c \
	  ft_strsub.c \
	  ft_isalpha.c \
	  ft_memchr.c \
	  ft_putstr_fd.c \
	  ft_strlen.c \
	  ft_strtrim.c \
	  ft_isascii.c \
	  ft_memcmp.c \
	  ft_strcat.c \
	  ft_strmap.c \
	  ft_tolower.c \
	  ft_isdigit.c \
	  ft_memcpy.c \
	  ft_strchr.c \
	  ft_strmapi.c \
	  ft_toupper.c \
	  ft_isprint.c \
	  ft_memdel.c \
	  ft_strclr.c \
	  ft_strncat.c \
	  ft_itoa.c \
	  ft_memmove.c \
	  ft_strcmp.c \
	  ft_strncmp.c \
	  ft_lstadd.c \
	  ft_memset.c \
	  ft_strcpy.c \
	  ft_strncpy.c \

OBJ = $(SRC:%.c=%.o)

HEAD = libft.h

FLAG = -Wall -Wextra -Werror

OPTION = -I $(HEAD)

all : $(NAME)

%.o : %.c
		$(CMP) $(FLAG) $(OPTION) -o $@ -c $<

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean :
		/bin/rm -f $(OBJ)
fclean : clean
		/bin/rm -f $(NAME)

re : fclean all
