#include "catDog.hpp"
int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	//Animal an; should cause an error
	std::cout << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
}