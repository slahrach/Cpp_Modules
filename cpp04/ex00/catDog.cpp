#include "catDog.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat Constructor !!!" << std::endl;
}

Cat::Cat(Cat& copy)
{
	*this = copy;
	std::cout << " Cat Copy Constructor !!!" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor !!!" << std::endl;
}

Cat& Cat::operator=(Cat obj)
{
	this->_type = obj.getType();
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow : This Is Meow Sound !!!" << std::endl;
}


Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog Constructor !!!" << std::endl;
}

Dog::Dog(Dog& copy)
{
	*this = copy;
	std::cout << " Dog Copy Constructor !!!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor !!!" << std::endl;
}

Dog& Dog::operator=(Dog obj)
{
	this->_type = obj.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Haw Haw : This Is Barking Sound !!!" << std::endl;
}


WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat Constructor !!!" << std::endl;
}

WrongCat::WrongCat(WrongCat& copy)
{
	*this = copy;
	std::cout << " WrongCat Copy Constructor !!!" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor !!!" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat obj)
{
	this->_type = obj.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow Meow : This Is Wrong Meow Sound !!!" << std::endl;
}
