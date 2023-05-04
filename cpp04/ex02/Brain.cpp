#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain& copy)
{
	*this = copy;
}
Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

std::string Brain::getIdea(int index)const
{
	if (index < 100)
		return (this->ideas[index]);
	else
	{
		std::cout << "out of range" << std::endl;
		return ("");
	}
}

void Brain::setIdea(int index, std::string str)
{
	if (index < 100)
		this->ideas[index] = str;
	else
		std::cout << "index out of range try again" << std::endl;
}

Brain& Brain::operator=(Brain& obj)
{
	int	i = 0;
	while(i < 100)
	{
		this->setIdea(i, obj.getIdea(i));
		i++;
	}
	return (*this);
}