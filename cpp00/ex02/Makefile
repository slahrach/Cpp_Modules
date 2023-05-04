NAME = job

STDFLAGS = -std=c++98

FLAGS = -Wall -Wextra -Werror

all :
	c++ Account.cpp test.cpp ${FLAGS} ${STDFLAGS} -o ${NAME}

clean :
	rm -rf ${NAME}

fclean : clean

re : clean all