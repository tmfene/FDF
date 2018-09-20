# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmfene <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/13 09:55:36 by tmfene            #+#    #+#              #
#    Updated: 2018/08/10 16:18:18 by tmfene           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = fdf.c get_next_line.c ft_get_map.c ft_xymap.c ft_draw.c ft_widht.c \
	  ft_keys.c ft_pixel.c 

RM = rm -f

OBJ = fdf.o get_next_line.o ft_get_map.o ft_xymap.o ft_draw.o ft_widht.o \
	  ft_keys.o ft_pixel.o

$(NAME) :
		make -C libft/ fclean && make -C libft/
		$(CC) $(CFLAGS) -c $(SRC)
		$(CC) $(CFLAGS) $(OBJ) libft/libft.a -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL -framework AppKit -o fdf

all : $(NAME)

clean :
		$(RM) $(OBJ)
		make -C libft/ clean

fclean : clean
		$(RM) $(NAME)
		make -C libft/ fclean

re : fclean all
