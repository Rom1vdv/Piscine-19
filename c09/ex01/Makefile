# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:51:24 by romvan-d          #+#    #+#              #
#    Updated: 2021/12/02 15:43:40 by romvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ./srcs/

BUILD = ./build

HEADER = ./includes/

CC = gcc

FLAG = -Wall -Wextra -Werror

OPTION = -I $(HEADER) -c

FILLSRC = ft_putchar.c	ft_swap.c	ft_putstr.c	ft_strlen.c	ft_strcmp.c

FILLOBJ =  ${addprefix ${SOURCE}, ${FILLSRC:.c=.o}}

.c.o:
	${CC} ${FLAG} ${OPTION} $< -o ${<:.c=.o}

${NAME}: ${FILLOBJ}
	ar -rc ${NAME} ${FILLOBJ}

all:	${NAME}

clean:
		rm -rf ${FILLOBJ}
        
fclean: clean
		rm -rf ${NAME}

re: fclean all
	
.PHONY: all clean fclean re
