#include "replace.hpp"

int main(int argc, char *argv[])
{
	std::string	file;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cout << "error in number of arguments" << std::endl;
		return (0);
	}
	s1 = argv[2];
	s2 = argv[3];
	file = argv[1];
	if (s1.empty() || s2.empty() || file.empty())
	{
		std::cout << "arguments cant be empty" << std::endl;
		return (0);
	}
	replace (file, s1, s2);
	return (0);
}