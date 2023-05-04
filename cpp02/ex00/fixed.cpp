#include "fixed.hpp"

Fixed::Fixed(void) : _FixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_FixedValue = obj.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->_FixedValue = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_FixedValue);
}

const int Fixed::_NbfractB = 8;