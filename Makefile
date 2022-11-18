# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: junsyun <junsyun@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 13:21:33 by junsyun           #+#    #+#              #
#    Updated: 2022/11/18 13:21:35 by junsyun          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	cc
CFLAG			=	-Wall -Wextra -Werror
CFILES			=	error.c \
					ft_utils.c \
					ft_split.c \
					parsing.c \
					init_utils.c \
					prompt_sp.c \
					prompt_pa.c \
					prompt_pb.c \
					prompt_r.c \
					prompt_rr.c \
					push_swap.c \
					push_swap_utils.c \
					a_move_cnt_utils.c \
					main_sort_utils.c \
					free_utils.c \
					main.c

OBJS			=	$(CFILES:.c=.o)
NAME			= 	push_swap

LIBFT_DIR		=	./libft
LIBFT			=	$(LIBFT_DIR)/libft.a

BONUS			=	checker.c \
					error.c	\
					ft_utils.c \
					ft_split.c \
					parsing.c \
					init_utils.c \
					prompt_sp.c \
					prompt_pa.c \
					prompt_pb.c \
					prompt_r.c \
					prompt_rr.c \
					push_swap.c \
					push_swap_utils.c \
					a_move_cnt_utils.c \
					main_sort_utils.c \
					free_utils.c
					
OBJS_B			=	$(BONUS:.c=.o)
NAME_B			=	checker

ifeq ($(MAKECMDGOALS), bonus)
$(NAME_B): $(OBJS_B)
	@make -C $(LIBFT_DIR) bonus
	$(CC) $(CFLAG) $(LIBFT) $(OBJS_B) -o $@
else
$(NAME): $(OBJS)
	@make -C $(LIBFT_DIR) bonus
	$(CC) $(CFLAG) $(LIBFT) $(OBJS) -o $@
endif

%.o: %.c
	$(CC) $(CFLAG) -c $? -o $@

all: $(NAME)

clean:
	@make -C $(LIBFT_DIR) clean
	rm -f $(OBJS)
	rm -f $(OBJS_B)

fclean:
	@make -C $(LIBFT_DIR) fclean
	make clean
	rm -f $(NAME)
	rm -f $(NAME_B)

re:
	make fclean
	make all

bonus: $(NAME_B)
.PHONY: all clean fclean re bonus