# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avaganay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 12:15:14 by avaganay          #+#    #+#              #
#    Updated: 2022/07/24 18:20:09 by lbourniq         ###   ########lyon.fr    #
#    Updated: 2022/07/23 15:40:53 by avaganay         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/basics/ft_is_char_in_str.c \
		  srcs/basics/ft_nul_chars.c \
		  srcs/basics/ft_putchar.c \
		  srcs/basics/ft_putnbr.c \
		  srcs/basics/ft_putstr.c \
		  srcs/basics/ft_strjoin.c \
		  srcs/basics/ft_strlen.c \
		  srcs/basics/ft_str_lens.c \
		  srcs/basics/ft_strdup.c \
		  srcs/basics/ft_tab_len.c \
		  srcs/basics/ft_create_buffer.c \
		  srcs/parsing_functions/ft_atoi.c \
		  srcs/parsing_functions/ft_big_split.c \
		  srcs/parsing_functions/ft_count_dictionnary_lines.c \
		  srcs/parsing_functions/ft_remove_spaces.c \
		  srcs/parsing_functions/ft_split.c \
		  srcs/parsing_functions/ft_verify_unsigned_int.c \
		  srcs/input/ft_check_input.c \
		  srcs/input/ft_is_numeric.c \
		  srcs/input/ft_display_error.c \
		  srcs/input/ft_get_buffer_size.c \
		  main.c \
		  ft_print.c

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Werror -Wextra

RM	= rm -f

NAME	= rush-02

.c.o:
	gcc ${FLAGS} -Iincludes/ -c $< -o ${<:.c=.o}

commands : 	${OBJS}
			gcc ${OBJS} -o ${NAME}

all:	commands	

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
