# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/02 07:04:24 by slahrach          #+#    #+#              #
#    Updated: 2022/09/16 07:19:12 by slahrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = c++

CFLAGS = -Wall -Wextra -Werror

STDFLAGS = -std=c++98

SRCS = Zombie.cpp main.cpp zombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${STDFLAGS} ${OBJS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

%.o : %.cpp
	${CC} ${CFLAGS} ${STDFLAGS} -c $<

.PHONY: clean all fclean re bonus