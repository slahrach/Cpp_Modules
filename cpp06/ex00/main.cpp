#include "Conversion.hpp"

int main(int argc, char* argv[])
{
	std::string str;

	if (argc != 2)
	{
		std::cout << "Number of args not valid" <<std::endl;
		return (0);
	}
	try
	{
		str = argv[1];
		Conversion	cnv(str);
		std::cout << cnv;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}