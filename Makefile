
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 11:05:52 by rchallie          #+#    #+#              #
#    Updated: 2020/08/13 22:17:48 by rchallie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libft.a

INCLUDE	= libft.h
SRCS	= ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c \
		  	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
			ft_strchr.c ft_isalnum.c ft_toupper.c\
			ft_memchr.c ft_tolower.c ft_memmove.c\
			ft_atoi.c\



OBJS	= $(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME)
			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
