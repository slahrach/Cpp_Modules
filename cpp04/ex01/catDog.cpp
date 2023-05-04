#include "catDog.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor !!!" << std::endl;
	this->brain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(Cat& copy)
{
	std::cout <<  "Cat Copy Constructor !!!" << std::endl;
	*this = copy;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat Destructor !!!" << std::endl;
}

Cat& Cat::operator=(Cat& obj)
{
	this->_type = obj.getType();
	this->brain = new Brain();
	*(this->brain) = obj.getBrain();
	return (*this);
}

Brain& Cat::getBrain(void) const
{
	return (*(this->brain));
}

void	Cat::setBrainIdea(int index, std::string str)
{
	this->brain->setIdea(index, str);
}

std::string	Cat::getBrainIdea(int index) const
{
	return (this->brain->getIdea(index));
}

void Cat::makeSound(void) const
{
	std::cout << "Meow Meow : This Is Meow Sound !!!" << std::endl;
}

Dog::Dog(void)
{
	std::cout << "Dog Constructor !!!" << std::endl;
	this->brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(Dog& copy)
{
	std::cout << " Dog Copy Constructor !!!" << std::endl;
	*this = copy;
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog Destructor !!!" << std::endl;
}

Dog& Dog::operator=(Dog& obj)
{
	this->_type = obj.getType();
	this->brain = new Brain();
	*(this->brain) = obj.getBrain();
	return (*this);
}

Brain& Dog::getBrain(void) const
{
	return (*(this->brain));
}

void	Dog::setBrainIdea(int index, std::string str)
{
	this->brain->setIdea(index, str);
}

std::string	Dog::getBrainIdea(int index) const
{
	return (this->brain->getIdea(index));
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
