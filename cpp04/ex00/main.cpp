#include "catDog.hpp"
int main()
{
	Animal a;
	std::cout << a.getType() << std::endl;
	a.makeSound();
	const Animal* meta = new Animal();
	meta->makeSound();
	std::cout << std::endl;

	const WrongAnimal* wrong = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrong->getType() << " " << std::endl << std::endl;

	i->makeSound(); //will output the cat sound
	j->makeSound(); //output the dog sound
	wrong->makeSound(); //here output the wrong animal sound instead of the wrong cat sound !

	delete wrong;
	delete i;
	delete j;
	return 0;
}