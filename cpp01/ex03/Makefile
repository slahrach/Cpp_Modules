NAME = war

CC = c++

CFLAGS = -Wall -Wextra -Werror

STDFLAGS = -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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