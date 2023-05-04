#include "Conversion.hpp"
Conversion::Conversion(void) : _str("0")
{
	return ;
}
Conversion::Conversion(std::string str) : _str(str)
{
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion::Conversion(Conversion& copy)
{
	*this = copy;
}

Conversion& Conversion::operator=(Conversion& obj)
{
	this->_str = obj.getStr();
	return (*this);
}

std::string Conversion::getStr(void) const
{
	return (this->_str);
}

double Conversion::toDouble(std::string str)
{
	double d;
	if (str.length() == 1 && isalpha(str[0]))
		d = static_cast<double>(str[0]);
	else
		d = std::stod(str);
	return (d);
}

char Conversion::toChar(double d)
{
	if (std::isnan(d) || d == std::numeric_limits<double>::infinity() || d == -std::numeric_limits<double>::infinity() || d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min())
		throw Conversion::ImpossibleException();
	else
	{
		char	c;
		c = static_cast<char>(d);
		if (c < 32 || c > 127)
			throw Conversion::NonDisplaybleException();
		return (c);
	}
	
}

int Conversion::toInt(double d)
{
	if (std::isnan(d) || d == std::numeric_limits<double>::infinity()
		|| d == -std::numeric_limits<double>::infinity()
		|| d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		throw Conversion::ImpossibleException();
	else
	{
		int i;
		i = static_cast<int>(d);
		return (i);
	}
}

float	Conversion::tofloat(double d)
{
	float	f;

	f = static_cast<float>(d);
	return (f);
}

std::ostream& operator<<(std::ostream& o, Conversion& obj)
{
	double  d;
	int i = 0;
	d = obj.toDouble(obj.getStr());
	try
	{
		o << "Char : " << obj.toChar(d) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		o << "Int : " << obj.toInt(d)<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		try
		{
			i = obj.toInt(d);
		}
		catch(const std::exception& e)
		{
		}
		o << "Float : " << obj.tofloat(d);
		if (obj.tofloat(d) - i == 0)
			o << ".0f";
		else
			o << "f";
		o << std::endl;
	}
	catch(const std::exception& e)
	{
		o << e.what () << std::endl;
	}
	try
	{
		o << "Double : " << d;
		if (d - obj.toInt(d) == 0)
			o << ".0";
		o << std::endl;
	}
	catch(const std::exception& e)
	{
		o << "";
	}
	
	return (o);
}
const char* Conversion::ImpossibleException::what() const throw()
{
	return ("Impossible");
}

const char* Conversion::NonDisplaybleException::what() const throw()
{
	return ("Non Displayable");
}