# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youbella <younesoublall@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/23 19:15:14 by youbella          #+#    #+#              #
#    Updated: 2023/12/23 19:15:14 by youbella         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

compiler = gcc -Wall -Wextra -Werror

files_part1 = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_isalnum.c ft_strlen.c ft_strlcpy.c ft_strncmp.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_memcpy.c ft_memset.c ft_memcmp.c ft_memchr.c ft_bzero.c ft_calloc.c ft_strdup.c \
		ft_strnstr.c ft_memmove.c

NAME = libft.a

all: $(files_part1) $(NAME)
	
$(NAME):
	$(compiler) -c $(files_part1) 
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re