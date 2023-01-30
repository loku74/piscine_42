# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 14:11:09 by lbourniq          #+#    #+#              #
#    Updated: 2022/07/28 11:07:11 by lbourniq         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = 	srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

HEAD = includes

FLAGS = -Wall -Wextra -Werror

NAME = libft.a 

CLIB = ar rc

ILIB = ranlib

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I${HEAD} -c $< -o ${<:.c=.o} 

libft.a:	commands

all:	${NAME}

commands:	${OBJS}
			${CLIB} ${NAME} ${OBJS}
			${ILIB} ${NAME}

clean:	 
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all		

.PHONY: all clean fclean re
