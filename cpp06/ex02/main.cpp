#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
	try
	{
		B b;
		Base& ref = b;
		Base *ptr = generate();
		identify(ptr);
		identify(ref);
		delete ptr;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}