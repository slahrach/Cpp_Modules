#include "Animal.hpp"

Animal::Animal(void) : _type("animal")
{
	std::cout << "Animal Constructor !!!" << std::endl;
}

Animal::Animal(Animal& copy)
{
	*this = copy;
	std::cout << "Animal Copy Constructor !!!" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor !!!" << std::endl;
}

Animal& Animal::operator=(Animal& obj)
{
	this->_type = obj.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "This Is Animal Sound !!!" << std::endl;
}
void Animal::setType(std::string str)
{
	this->_type = str;
}
std::string Animal::getType(void) const
{
	return (this->_type);
}



WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal Constructor !!!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& copy)
{
	*this = copy;
	std::cout << "WrongAnimal Copy Constructor !!!" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor !!!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal obj)
{
	this->_type = obj.getType();
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "This Is WrongAnimal Sound !!!" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}