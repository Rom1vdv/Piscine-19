# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/01 15:44:30 by romvan-d          #+#    #+#              #
#    Updated: 2021/12/01 15:48:08 by romvan-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/

gcc -c -Wextra -Wall -Werror *.c
ar rc libft.a *.o
rm -f *.o
ranlib libft.a
