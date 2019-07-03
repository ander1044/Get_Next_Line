# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anben <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 16:32:54 by anben             #+#    #+#              #
#    Updated: 2019/07/03 13:00:54 by anben            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
NOR = norminette
FLAGS = -Wall -Werror -Wextra
ARC = ar rc
SRC = ft_isdigit.c\
	  ft_memcmp.c\
	  ft_putchar_fd.c\
	  ft_putstr.c\
	  ft_strcpy.c\
	  ft_strnstr.c\
	  ft_bzero.c\
	  ft_isprint.c\
	  ft_memcpy.c\
	  ft_putendl.c\
	  ft_putstr_fd.c\
	  ft_strrchr.c\
	  ft_isalpha.c\
	  ft_memccpy.c\
	  ft_memset.c\
	  ft_putnbr.c\
	  ft_strchr.c\
	  ft_strlen.c\
	  ft_strstr.c\
	  ft_isascii.c\
	  ft_memchr.c\
	  ft_putchar.c\
	  ft_putnbr_fd.c\
	  ft_strcmp.c\
	  ft_strncat.c\
	  ft_tolower.c\
	  ft_isalnum.c\
	  ft_toupper.c\
	  ft_isprint.c\
	  ft_memmove.c\
	  ft_strncpy.c\
	  ft_strcat.c\
	  ft_putendl_fd.c\
	  ft_strdup.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strncmp.c\
	  ft_strlcat.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_atoi.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_itoa.c\
	  ft_strsplit.c\
	  ft_strtrim.c\
	  ft_concase.c\
	  ft_conmcase.c\
	  ft_conmcasei.c\
	  ft_concasei.c\
	  ft_jointostr.c

OBJ = ft_isdigit.o\
	  ft_memcmp.o\
	  ft_putchar_fd.o\
	  ft_putstr.o\
	  ft_strcpy.o\
	  ft_strnstr.o\
	  ft_bzero.o\
	  ft_isprint.o\
	  ft_memcpy.o\
	  ft_putendl.o\
	  ft_putstr_fd.o\
	  ft_strrchr.o\
	  ft_isalpha.o\
	  ft_memccpy.o\
	  ft_memset.o\
	  ft_putnbr.o\
	  ft_strchr.o\
	  ft_strlen.o\
	  ft_strstr.o\
	  ft_isascii.o\
	  ft_memchr.o\
	  ft_putchar.o\
	  ft_putnbr_fd.o\
	  ft_strcmp.o\
	  ft_strncat.o\
	  ft_tolower.o\
	  ft_isalnum.o\
	  ft_toupper.o\
	  ft_isprint.o\
	  ft_memmove.o\
	  ft_strncpy.o\
	  ft_strcat.o\
	  ft_putendl_fd.o\
	  ft_strdup.o\
	  ft_memalloc.o\
	  ft_memdel.o\
	  ft_strnew.o\
	  ft_strdel.o\
	  ft_strclr.o\
	  ft_striter.o\
	  ft_striteri.o\
	  ft_strequ.o\
	  ft_strnequ.o\
	  ft_strncmp.o\
	  ft_strlcat.o\
	  ft_strsub.o\
	  ft_strjoin.o\
	  ft_atoi.o\
	  ft_strmap.o\
	  ft_strmapi.o\
	  ft_itoa.o\
	  ft_strsplit.o\
	  ft_strtrim.o\
	  ft_concase.o\
	  ft_conmcase.o\
	  ft_conmcasei.o\
	  ft_concasei.o\
	  ft_jointostr.o

# all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC)
		$(ARC) $(NAME) $(OBJ)
		ranlib $(NAME)

all: $(NAME)

norm:
	$(NOR)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
