NAME = phonebook

FLAGS = -Wall -Wextra -Werror

STDFLAGS = -std=c++98

all :
	c++ main.cpp PhoneBook.cpp Contact.cpp ${FLAGS} ${STDFLAGS} -o ${NAME}

clean :
	rm -rf ${NAME}

fclean : clean

re : clean all