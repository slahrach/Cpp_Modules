#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	Base *b;
	srand(time(0));
	int	i = rand() % 3;
	if (i == 0)
		b = new A;
	else if (i == 1)
		b = new B;
	else
		b = new C;
	return (b);
}

void identify(Base* p)
{
	A* a = dynamic_cast<A*>(p);
	if(a)
		std::cout << "p is pointing to A" << std::endl;
	B* b = dynamic_cast<B*>(p);
	if(b)
		std::cout << "p is pointing to B" << std::endl;
	C* c = dynamic_cast<C*>(p);
	if(c)
		std::cout << "p is pointing to C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "p is pointing to A" << std::endl;
		a.~A();
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "p is pointing to B" << std::endl;
		b.~B();
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "p is pointing to C" << std::endl;
		c.~C();
	}
	catch(const std::exception& e)
	{
	}
	
}