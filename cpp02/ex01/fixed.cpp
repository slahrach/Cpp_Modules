#include "fixed.hpp"

Fixed::Fixed(void) : _FixedValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_FixedValue = nbr << Fixed::_NbfractB;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_FixedValue = roundf(n * (1 << Fixed::_NbfractB));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const &obj)
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

float Fixed::toFloat(void) const
{
	return ((float)this->_FixedValue / (1 << Fixed::_NbfractB));
}
int Fixed::toInt(void) const
{
	return (this->_FixedValue >> Fixed::_NbfractB);
}

std::ostream& operator<<(std::ostream& out, Fixed const & f)
{
	out << f.toFloat();
	return (out);
}

const int Fixed::_NbfractB = 8;