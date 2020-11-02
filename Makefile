# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbane <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 15:26:53 by jbane             #+#    #+#              #
#    Updated: 2020/10/28 15:26:57 by jbane            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FILES = main.c ft_bzero.c
OUT_EXE = out_executable I.

build: $(FILES)
        $(CC) -o $(OUT_EXE) $(FILES)

clean:
        rm -f *.o core

rebuild: clean build
