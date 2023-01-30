# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbourniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 13:23:51 by lbourniq          #+#    #+#              #
#    Updated: 2022/07/28 11:18:12 by lbourniq         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


SRCS	= srcs/ft_atoi.c \
		  srcs/ft_print.c \
		  srcs/operations.c \
		  main.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Werror -Wextra

RM	= rm -f

NAME	= do-op

.c.o:
	@gcc ${FLAGS} -Iincludes/ -c $< -o ${<:.c=.o}

commands : 	${OBJS}
			@gcc ${OBJS} -o ${NAME}

all:	commands	

${NAME}: all

clean:
	@${RM} ${OBJS}

fclean:	clean
	@${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
