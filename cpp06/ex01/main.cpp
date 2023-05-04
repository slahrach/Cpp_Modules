#include "Data.hpp"

int main()
{
	try
	{
	
		Data*		ptr;
		uintptr_t	i;
		Data*		p;

		ptr = new Data;
		ptr->d = 18;
		i = serialize(ptr);
		p = deserialize(i);
		std::cout << p->d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}