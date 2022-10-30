# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junsyun <junsyun@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 14:20:40 by junsyun           #+#    #+#              #
#    Updated: 2022/09/22 16:09:16 by junsyun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	./utils.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc
RM		= rm -f
AR		= ar rcs
# CFLAGS	= -Wall -Wextra -Werror

NAME	= push_swap

all:	${NAME}

$(NAME):	${OBJS}
			${AR} ${NAME} ${OBJS}
			
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:
			make fclean
			make all

.PHONY:		all clean fclean bonus re
# object : dependency
#	command to generate object
# $^ target 이름
# $< 의존파일 목록중 첫 번째
# $^ 의존파일 목록 전체